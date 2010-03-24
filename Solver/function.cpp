#include "GmshConfig.h"
#include <sstream>
#include <fstream>
#include "function.h"
#include "SPoint3.h"
#include "MElement.h"
#include "dgDofContainer.h"
#include "dgGroupOfElements.h"
#include "GModel.h"
#if defined(HAVE_DLOPEN)
  #include "dlfcn.h"
#endif
#include "Bindings.h"

void function::call (dataCacheMap *m, fullMatrix<double> &res, std::vector<const fullMatrix<double>*> &depM) {
  switch (dep.size()) {
    case 0 : call(m, res); break;
    case 1 : call(m, *depM[0], res); break;
    case 2 : call(m, *depM[0], *depM[1], res); break;
    case 3 : call(m, *depM[0], *depM[1], *depM[2], res); break;
    case 4 : call(m, *depM[0], *depM[1], *depM[2], *depM[3], res); break;
    case 5 : call(m, *depM[0], *depM[1], *depM[2], *depM[3], *depM[4], res); break;
    case 6 : call(m, *depM[0], *depM[1], *depM[2], *depM[3], *depM[4], *depM[5], res); break;
    default : Msg::Error("function are not implemented for %i arguments\n", dep.size());
  }
}
class function::data : public dataCacheDouble {
  function *_function;
  dataCacheMap *_m;
  std::vector<dataCacheDouble *> _dependencies;
  std::vector<const fullMatrix<double> *> _depM;
  public:
  data(function *f, dataCacheMap *m):
    dataCacheDouble(*m,1,f->_nbCol)
  {
    _function = f;
    _m = m;
    _m->getElement(this);
    _dependencies.resize ( _function->dep.size());
    _depM.resize (_function->dep.size());
    for (int i=0;i<_function->dep.size();i++)
      _dependencies[i] = &m->get(_function->dep[i],this);
  }
  void _eval()
  {
    for(int i=0;i<_dependencies.size(); i++)
      _depM[i] = &(*_dependencies[i])();
    _function->call(_m, _value, _depM);
  }
};
function::function(int nbCol):_nbCol(nbCol){};
dataCacheDouble *function::newDataCache(dataCacheMap *m)
{
  return new data(this, m);
}

// dataCache members
dataCache::dataCache(dataCacheMap *cacheMap) : _valid(false) {
  cacheMap->addDataCache(this); //this dataCache can be deleted when the dataCacheMap is deleted
}

void dataCache::addMeAsDependencyOf (dataCache *newDep)
{
  _dependOnMe.insert(newDep);
  newDep->_iDependOn.insert(this);
  for(std::set<dataCache*>::iterator it = _iDependOn.begin();
      it != _iDependOn.end(); it++) {
    (*it)->_dependOnMe.insert(newDep);
    newDep->_iDependOn.insert(*it);
  }
}

//dataCacheMap members

dataCacheElement &dataCacheMap::getElement(dataCache *caller) 
{
  if(caller)
    _cacheElement.addMeAsDependencyOf(caller);
  return _cacheElement;
}

static dataCacheDouble &returnDataCacheDouble(dataCacheDouble *data, dataCache *caller)
{
  if(data==NULL) throw;
  if(caller)
    data->addMeAsDependencyOf(caller);
  return *data;
}
dataCacheDouble &dataCacheMap::get(const function *f, dataCache *caller) 
{
  dataCacheDouble *&r= _cacheDoubleMap[f];
  if(r==NULL)
    r = const_cast<function*>(f)->newDataCache(this);
  return returnDataCacheDouble(r,caller);
}
dataCacheDouble &dataCacheMap::getSolution(dataCacheDouble *caller) 
{
  return returnDataCacheDouble(_solution,caller);
}
dataCacheDouble &dataCacheMap::getSolutionGradient(dataCacheDouble *caller)
{
  return returnDataCacheDouble(_solutionGradient,caller);
}
dataCacheDouble &dataCacheMap::getParametricCoordinates(dataCacheDouble *caller) 
{
  return returnDataCacheDouble(_parametricCoordinates,caller);
}
dataCacheDouble &dataCacheMap::getNormals(dataCacheDouble *caller)
{
  returnDataCacheDouble(_normals,caller);
  return *_normals;
}

dataCacheDouble &dataCacheMap::provideSolution(int nbFields)
{
  _solution = new providedDataDouble(*this,1, nbFields);
  return *_solution;
}
dataCacheDouble &dataCacheMap::provideSolutionGradient(int nbFields){
  _solutionGradient =  new providedDataDouble(*this,1, 3*nbFields);
  return *_solutionGradient;
}
dataCacheDouble &dataCacheMap::provideParametricCoordinates()
{
  _parametricCoordinates = new providedDataDouble(*this,1, 3);
  return *_parametricCoordinates;
}
dataCacheDouble &dataCacheMap::provideNormals()
{
  _normals = new providedDataDouble(*this,1, 3);
  return *_normals;
}

dataCacheMap::~dataCacheMap()
{
  for (std::set<dataCache*>::iterator it = _toDelete.begin();
      it!=_toDelete.end(); it++) {
    delete *it;
  }
}

// now some example of functions

// constant values copied over each line
class functionConstant : public function {
  public:
  fullMatrix<double> _source;
  void call(dataCacheMap *m, fullMatrix<double> &val) {
    for(int i=0;i<val.size1();i++)
      for(int j=0;j<_source.size1();j++)
        val(i,j)=_source(j,0);
  }
  functionConstant(std::vector<double> source):function(source.size()){
    _source = fullMatrix<double>(source.size(),1);
    for(size_t i=0; i<source.size(); i++){
      _source(i,0) = source[i];
    }
  }
};

function *functionConstantNew(double v) {
  std::vector<double> vec(1);
  vec[0]=v;
  return new functionConstant(vec);
}

function *functionConstantNew(const std::vector<double> &v) {
  return new functionConstant(v);
}

// get XYZ coordinates
class functionCoordinates : public function {
  static functionCoordinates *_instance;
  void call (dataCacheMap *m, fullMatrix<double> &xyz){
    const fullMatrix<double> &uvw = m->getParametricCoordinates(NULL)();
    for(int i = 0; i < uvw.size1(); i++){
      SPoint3 p;
      m->getElement(NULL)()->pnt(uvw(i, 0), uvw(i, 1), uvw(i, 2), p);
      xyz(i, 0) = p.x();
      xyz(i, 1) = p.y();
      xyz(i, 2) = p.z();
    }
  }
  functionCoordinates():function(3){};// constructor is private only 1 instance can exists, call get to access the instance
 public:
  static function *get() {
    if(!_instance)
      _instance = new functionCoordinates();
    return _instance;
  }
};
functionCoordinates *functionCoordinates::_instance = NULL;

class functionSolution : public function {
  static functionSolution *_instance;
  functionSolution():function(0){};// constructor is private only 1 instance can exists, call get to access the instance
 public:
  void call(dataCacheMap *m, fullMatrix<double> &sol) {
    sol.setAsProxy(m->getSolution(NULL)());
  }
  static function *get() {
    if(!_instance)
      _instance = new functionSolution();
    return _instance;
  }
};
functionSolution *functionSolution::_instance = NULL;

class functionSolutionGradient : public function {
  static functionSolutionGradient *_instance;
  functionSolutionGradient():function(0){};// constructor is private only 1 instance can exists, call get to access the instance
 public:
  void call(dataCacheMap *m, fullMatrix<double> &sol) {
    sol.setAsProxy(m->getSolutionGradient(NULL)());
  }
  static function *get() {
    if(!_instance)
      _instance = new functionSolutionGradient();
    return _instance;
  }
};
functionSolutionGradient *functionSolutionGradient::_instance = NULL;

class functionStructuredGridFile : public function {
  public:
  int n[3];
  double d[3],o[3];
  double get(int i,int j, int k){
    return v[(i*n[1]+j)*n[2]+k];
  }
  double *v;
  void call(dataCacheMap *m, const fullMatrix<double> &coord, fullMatrix<double> &val){
    for(int pt=0;pt<val.size1();pt++){
      double xi[3];
      int id[3];
      for(int i=0;i<3;i++){
        id[i]=(int)((coord(pt,i)-o[i])/d[i]);
        int a=id[i];
        id[i]=std::max(0,std::min(n[i]-1,id[i]));
        xi[i]=(coord(pt,i)-o[i]-id[i]*d[i])/d[i];
        xi[i]=std::min(1.,std::max(0.,xi[i]));
      }
      val(pt,0) =
        get(id[0]   ,id[1]   ,id[2]   )*(1-xi[0])*(1-xi[1])*(1-xi[2])
        +get(id[0]   ,id[1]   ,id[2]+1 )*(1-xi[0])*(1-xi[1])*(  xi[2])
        +get(id[0]   ,id[1]+1 ,id[2]   )*(1-xi[0])*(  xi[1])*(1-xi[2])
        +get(id[0]   ,id[1]+1 ,id[2]+1 )*(1-xi[0])*(  xi[1])*(  xi[2])
        +get(id[0]+1 ,id[1]   ,id[2]   )*(  xi[0])*(1-xi[1])*(1-xi[2])
        +get(id[0]+1 ,id[1]   ,id[2]+1 )*(  xi[0])*(1-xi[1])*(  xi[2])
        +get(id[0]+1 ,id[1]+1 ,id[2]   )*(  xi[0])*(  xi[1])*(1-xi[2])
        +get(id[0]+1 ,id[1]+1 ,id[2]+1 )*(  xi[0])*(  xi[1])*(  xi[2]);
    }
  }
  functionStructuredGridFile(const std::string filename, const function *coordFunction): function(1){
    std::ifstream input(filename.c_str());
    dep.push_back(coordFunction);
    if(!input)
      Msg::Error("cannot open file : %s",filename.c_str());
    if(filename.substr(filename.size()-4,4)!=".bin") {
      input>>o[0]>>o[1]>>o[2]>>d[0]>>d[1]>>d[2]>>n[0]>>n[1]>>n[2];
      int nt = n[0]*n[1]*n[2];
      v = new double [nt];
      for (int i=0; i<nt; i++){
        input>>v[i];
      }
    } else {
      input.read((char *)o, 3 * sizeof(double));
      input.read((char *)d, 3 * sizeof(double));
      input.read((char *)n, 3 * sizeof(int));
      int nt = n[0] * n[1] * n[2];
      v = new double[nt];
      input.read((char *)v, nt * sizeof(double));
    }
  }
  ~functionStructuredGridFile(){
    delete []v;
  }
};

#ifdef HAVE_LUA
class functionLua : public function {
  lua_State *_L;
  std::string _luaFunctionName;
 public:
  void call (dataCacheMap *m, fullMatrix<double> &res, std::vector<const fullMatrix<double>*> &depM) {
    lua_getfield(_L, LUA_GLOBALSINDEX, _luaFunctionName.c_str());
    for (int i=0;i< depM.size(); i++)
      luaStack<const fullMatrix<double>*>::push(_L, depM[i]);
    luaStack<const fullMatrix<double>*>::push(_L, &res);
    lua_call(_L, depM.size()+1, 0);
  }
  functionLua (int nbCol, std::string luaFunctionName, std::vector<const function*> dependencies, lua_State *L)
    : function(nbCol), _luaFunctionName(luaFunctionName), _L(L)
  {
    dep = dependencies;
  }
};
#endif


// function that enables to interpolate a DG solution using
// geometrical search in a mesh 

class functionMesh2Mesh : public function {
  dgDofContainer *_dofContainer;
public:
  functionMesh2Mesh(dgDofContainer *dofc) : function(dofc->getNbFields()), _dofContainer(dofc){}
  void call( dataCacheMap *m, const fullMatrix<double> &xyz, fullMatrix<double> &val) {
    int nP =xyz.size1();
    val.setAll(0.0);
    double fs[256];
    fullMatrix<double> solEl;
    GModel *model = _dofContainer->getGroups()->getModel();
    for (int i=0;i<val.size1();i++){
      const double x = xyz(i,0);
      const double y = xyz(i,1);
      const double z = xyz(i,2);
      SPoint3 p(x,y,z);
      MElement *e = model->getMeshElementByCoord(p);
      int ig,index;
      _dofContainer->getGroups()->find (e,ig,index);
      dgGroupOfElements *group =  _dofContainer->getGroups()->getElementGroup(ig);      
      double U[3],X[3]={x,y,z};
      e->xyz2uvw (X,U);
      group->getFunctionSpace().f(U[0],U[1],U[2],fs);      
      fullMatrix<double> &sol = _dofContainer->getGroupProxy(ig);
      solEl.setAsProxy(sol,index*val.size2(),val.size2());
      int fSize = group->getNbNodes();
      for (int k=0;k<val.size2();k++){
        val(i,k) = 0.0; 	
        for (int j=0;j<fSize;j++){
          val(i,k) += solEl(j,k)*fs[j];
        }
      }
    }
  }
};

void dataCacheMap::setNbEvaluationPoints(int nbEvaluationPoints) {
  _nbEvaluationPoints = nbEvaluationPoints;
  for(std::set<dataCacheDouble*>::iterator it = _toResize.begin(); it!= _toResize.end(); it++){
    (*it)->resize();
    (*it)->_valid = false;
  }
}

dataCacheDouble::dataCacheDouble(dataCacheMap &map,int nRowByPoint, int nCol):
  dataCache(&map),_cacheMap(map),_value(nRowByPoint==0?1:nRowByPoint*map.getNbEvaluationPoints(),nCol){
    _nRowByPoint=nRowByPoint;
    map.addDataCacheDouble(this);
};
void dataCacheDouble::resize() {
  _value = fullMatrix<double>(_nRowByPoint==0?1:_nRowByPoint*_cacheMap.getNbEvaluationPoints(),_value.size2());
}

//functionC
class functionC : public function {
  void (*callback)(void);
  public:
  void call (dataCacheMap *m, fullMatrix<double> &val, std::vector<const fullMatrix<double>*> &depM) {
    switch (depM.size()) {
      case 0 : 
        ((void (*)(fullMatrix<double> &))(callback))(val);
        break;
      case 1 : 
        ((void (*)(fullMatrix<double> &, const fullMatrix<double>&))
         (callback)) (val, *depM[0]);
        break;
      case 2 : 
        ((void (*)(fullMatrix<double> &, const fullMatrix<double>&, const fullMatrix<double> &))
         (callback)) (val, *depM[0], *depM[1]);
        break;
      case 3 : 
        ((void (*)(fullMatrix<double> &, const fullMatrix<double>&, const fullMatrix<double>&, const fullMatrix<double>&))
         (callback)) (val, *depM[0], *depM[1], *depM[2]);
        break;
      case 4 : 
        ((void (*)(fullMatrix<double> &, const fullMatrix<double>&, const fullMatrix<double>&, const fullMatrix<double>&,
                   const fullMatrix<double>&))
         (callback)) (val, *depM[0], *depM[1], *depM[2], *depM[3]);
        break;
      case 5 : 
        ((void (*)(fullMatrix<double> &, const fullMatrix<double>&, const fullMatrix<double>&, const fullMatrix<double>&,
                   const fullMatrix<double>&, const fullMatrix<double>&))
         (callback)) (val, *depM[0], *depM[1], *depM[2], *depM[3], *depM[4]);
        break;
      case 6 : 
        ((void (*)(fullMatrix<double> &, const fullMatrix<double>&, const fullMatrix<double>&, const fullMatrix<double>&,
                   const fullMatrix<double>&, const fullMatrix<double>&, const fullMatrix<double>&))
         (callback)) (val, *depM[0], *depM[1], *depM[2], *depM[3], *depM[4], *depM[5]);
        break;
      default :
        Msg::Error("C callback not implemented for %i argurments", depM.size());
    }
  }
#if defined(HAVE_DLOPEN)
  functionC (std::string file, std::string symbol, int nbCol, std::vector<const function *> dependencies):
    function(nbCol)
  {
    dep = (dependencies);
    void *dlHandler;
    dlHandler = dlopen(file.c_str(),RTLD_NOW);
    callback = (void(*)(void))dlsym(dlHandler, symbol.c_str());
    if(!callback) 
      Msg::Error("cannot get the callback to the compiled C function");
  }
#endif
};

void function::registerBindings(binding *b){
  classBinding *cb = b->addClass<function>("function");
  cb->setDescription("A generic function that can be evaluated on a set of points. Functions can call other functions and their values are cached so that if two different functions call the same function f, f is only evaluated once.");
  methodBinding *mb;

  cb = b->addClass<functionConstant>("functionConstant");
  cb->setDescription("A constant (scalar or vector) function");
  mb = cb->setConstructor<functionConstant,std::vector <double> >();
  mb->setArgNames("v",NULL);
  mb->setDescription("A new constant function wich values 'v' everywhere. v can be a row-vector.");
  cb->setParentClass<function>();

  cb = b->addClass<functionCoordinates>("functionCoordinates");
  cb->setDescription("A function to access the coordinates (xyz). This is a single-instance class, use the 'get' member to access the instance.");
  mb = cb->addMethod("get",&functionCoordinates::get);
  mb->setDescription("return the unique instance of this class");
  cb->setParentClass<function>();

  cb = b->addClass<functionSolution>("functionSolution");
  cb->setDescription("A function to access the solution. This is a single-instance class, use the 'get' member to access the instance.");
  mb = cb->addMethod("get",&functionSolution::get);
  mb->setDescription("return the unique instance of this class");
  cb->setParentClass<function>();

  cb = b->addClass<functionSolutionGradient>("functionSolutionGradient");
  cb->setDescription("A function to access the gradient of the solution. This is a single-instance class, use the 'get' member to access the instance.");
  mb = cb->addMethod("get",&functionCoordinates::get);
  mb->setDescription("return the unique instance of this class");
  cb->setParentClass<function>();

  cb = b->addClass<functionStructuredGridFile>("functionStructuredGridFile");
  cb->setParentClass<function>();
  cb->setDescription("A function to interpolate through data given on a structured grid");
  mb = cb->setConstructor<functionStructuredGridFile,std::string, const function*>();
  mb->setArgNames("fileName","coordinateFunction",NULL);
  mb->setDescription("Tri-linearly interpolate through data in file 'fileName' at coordinate given by 'coordinateFunction'.\nThe file format is :\nx0 y0 z0\ndx dy dz\nnx ny nz\nv(0,0,0) v(0,0,1) v(0 0 2) ...");

  cb = b->addClass<functionMesh2Mesh>("functionMesh2Mesh");
  cb->setDescription("A function that can be used to interpolate into a given mesh");
  mb = cb->setConstructor<functionMesh2Mesh,dgDofContainer*>();
  mb->setArgNames("solution",NULL);
  mb->setDescription("A solution.");
  cb->setParentClass<function>();

#if defined(HAVE_DLOPEN)
  cb = b->addClass<functionC>("functionC");
  cb->setDescription("A function that compile a C code");
  mb = cb->setConstructor<functionC,std::string, std::string,int,std::vector<const function*> >();
  mb->setArgNames("file", "symbol", "nbCol", "arguments",NULL);
  mb->setDescription("  ");
  cb->setParentClass<function>();
#endif

#if defined (HAVE_LUA)
  cb= b->addClass<functionLua>("functionLua");
  cb->setDescription("A function (see the 'function' documentation entry) defined in LUA.");
  mb = cb->setConstructor<functionLua,int,std::string,std::vector<const function*>,lua_State*>();
  mb->setArgNames("d", "f", "dep", NULL);
  mb->setDescription("A new functionLua which evaluates a vector of dimension 'd' using the lua function 'f'. This function can take other functions as arguments listed by the 'dep' vector.");
  cb->setParentClass<function>();
#endif
}
