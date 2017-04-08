/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0

/* Substitute the variable and function names.  */
#define yyparse gmsh_yyparse
#define yylex   gmsh_yylex
#define yyerror gmsh_yyerror
#define yylval  gmsh_yylval
#define yychar  gmsh_yychar
#define yydebug gmsh_yydebug
#define yynerrs gmsh_yynerrs


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     tDOUBLE = 258,
     tSTRING = 259,
     tBIGSTR = 260,
     tEND = 261,
     tAFFECT = 262,
     tDOTS = 263,
     tSCOPE = 264,
     tPi = 265,
     tMPI_Rank = 266,
     tMPI_Size = 267,
     tEuclidian = 268,
     tCoordinates = 269,
     tTestLevel = 270,
     tExp = 271,
     tLog = 272,
     tLog10 = 273,
     tSqrt = 274,
     tSin = 275,
     tAsin = 276,
     tCos = 277,
     tAcos = 278,
     tTan = 279,
     tRand = 280,
     tAtan = 281,
     tAtan2 = 282,
     tSinh = 283,
     tCosh = 284,
     tTanh = 285,
     tFabs = 286,
     tAbs = 287,
     tFloor = 288,
     tCeil = 289,
     tRound = 290,
     tFmod = 291,
     tModulo = 292,
     tHypot = 293,
     tList = 294,
     tLinSpace = 295,
     tLogSpace = 296,
     tListFromFile = 297,
     tCatenary = 298,
     tPrintf = 299,
     tError = 300,
     tStr = 301,
     tSprintf = 302,
     tStrCat = 303,
     tStrPrefix = 304,
     tStrRelative = 305,
     tStrReplace = 306,
     tAbsolutePath = 307,
     tDirName = 308,
     tStrSub = 309,
     tStrLen = 310,
     tFind = 311,
     tStrFind = 312,
     tStrCmp = 313,
     tStrChoice = 314,
     tUpperCase = 315,
     tLowerCase = 316,
     tLowerCaseIn = 317,
     tTextAttributes = 318,
     tBoundingBox = 319,
     tDraw = 320,
     tSetChanged = 321,
     tToday = 322,
     tFixRelativePath = 323,
     tCurrentDirectory = 324,
     tSyncModel = 325,
     tNewModel = 326,
     tOnelabAction = 327,
     tOnelabRun = 328,
     tCodeName = 329,
     tCpu = 330,
     tMemory = 331,
     tTotalMemory = 332,
     tCreateTopology = 333,
     tCreateTopologyNoHoles = 334,
     tDistanceFunction = 335,
     tDefineConstant = 336,
     tUndefineConstant = 337,
     tDefineNumber = 338,
     tDefineStruct = 339,
     tNameStruct = 340,
     tDimNameSpace = 341,
     tAppend = 342,
     tDefineString = 343,
     tSetNumber = 344,
     tSetString = 345,
     tPoint = 346,
     tCircle = 347,
     tEllipse = 348,
     tLine = 349,
     tSphere = 350,
     tPolarSphere = 351,
     tSurface = 352,
     tSpline = 353,
     tVolume = 354,
     tBlock = 355,
     tCylinder = 356,
     tCone = 357,
     tTorus = 358,
     tEllipsoid = 359,
     tQuadric = 360,
     tShapeFromFile = 361,
     tRectangle = 362,
     tDisk = 363,
     tWire = 364,
     tGeoEntity = 365,
     tCharacteristic = 366,
     tLength = 367,
     tParametric = 368,
     tElliptic = 369,
     tRefineMesh = 370,
     tAdaptMesh = 371,
     tRelocateMesh = 372,
     tSetFactory = 373,
     tThruSections = 374,
     tWedge = 375,
     tFillet = 376,
     tChamfer = 377,
     tPlane = 378,
     tRuled = 379,
     tTransfinite = 380,
     tPhysical = 381,
     tCompound = 382,
     tPeriodic = 383,
     tUsing = 384,
     tPlugin = 385,
     tDegenerated = 386,
     tRecursive = 387,
     tRotate = 388,
     tTranslate = 389,
     tSymmetry = 390,
     tDilate = 391,
     tExtrude = 392,
     tLevelset = 393,
     tAffine = 394,
     tBooleanUnion = 395,
     tBooleanIntersection = 396,
     tBooleanDifference = 397,
     tBooleanSection = 398,
     tBooleanFragments = 399,
     tThickSolid = 400,
     tRecombine = 401,
     tSmoother = 402,
     tSplit = 403,
     tDelete = 404,
     tCoherence = 405,
     tIntersect = 406,
     tMeshAlgorithm = 407,
     tReverse = 408,
     tLayers = 409,
     tScaleLast = 410,
     tHole = 411,
     tAlias = 412,
     tAliasWithOptions = 413,
     tCopyOptions = 414,
     tQuadTriAddVerts = 415,
     tQuadTriNoNewVerts = 416,
     tRecombLaterals = 417,
     tTransfQuadTri = 418,
     tText2D = 419,
     tText3D = 420,
     tInterpolationScheme = 421,
     tTime = 422,
     tCombine = 423,
     tBSpline = 424,
     tBezier = 425,
     tNurbs = 426,
     tNurbsOrder = 427,
     tNurbsKnots = 428,
     tColor = 429,
     tColorTable = 430,
     tFor = 431,
     tIn = 432,
     tEndFor = 433,
     tIf = 434,
     tElseIf = 435,
     tElse = 436,
     tEndIf = 437,
     tExit = 438,
     tAbort = 439,
     tField = 440,
     tReturn = 441,
     tCall = 442,
     tSlide = 443,
     tMacro = 444,
     tShow = 445,
     tHide = 446,
     tGetValue = 447,
     tGetStringValue = 448,
     tGetEnv = 449,
     tGetString = 450,
     tGetNumber = 451,
     tUnique = 452,
     tHomology = 453,
     tCohomology = 454,
     tBetti = 455,
     tExists = 456,
     tFileExists = 457,
     tGetForced = 458,
     tGetForcedStr = 459,
     tGMSH_MAJOR_VERSION = 460,
     tGMSH_MINOR_VERSION = 461,
     tGMSH_PATCH_VERSION = 462,
     tGmshExecutableName = 463,
     tSetPartition = 464,
     tNameToString = 465,
     tStringToName = 466,
     tAFFECTDIVIDE = 467,
     tAFFECTTIMES = 468,
     tAFFECTMINUS = 469,
     tAFFECTPLUS = 470,
     tOR = 471,
     tAND = 472,
     tNOTEQUAL = 473,
     tEQUAL = 474,
     tGREATERGREATER = 475,
     tLESSLESS = 476,
     tGREATEROREQUAL = 477,
     tLESSOREQUAL = 478,
     UNARYPREC = 479,
     tMINUSMINUS = 480,
     tPLUSPLUS = 481
   };
#endif
/* Tokens.  */
#define tDOUBLE 258
#define tSTRING 259
#define tBIGSTR 260
#define tEND 261
#define tAFFECT 262
#define tDOTS 263
#define tSCOPE 264
#define tPi 265
#define tMPI_Rank 266
#define tMPI_Size 267
#define tEuclidian 268
#define tCoordinates 269
#define tTestLevel 270
#define tExp 271
#define tLog 272
#define tLog10 273
#define tSqrt 274
#define tSin 275
#define tAsin 276
#define tCos 277
#define tAcos 278
#define tTan 279
#define tRand 280
#define tAtan 281
#define tAtan2 282
#define tSinh 283
#define tCosh 284
#define tTanh 285
#define tFabs 286
#define tAbs 287
#define tFloor 288
#define tCeil 289
#define tRound 290
#define tFmod 291
#define tModulo 292
#define tHypot 293
#define tList 294
#define tLinSpace 295
#define tLogSpace 296
#define tListFromFile 297
#define tCatenary 298
#define tPrintf 299
#define tError 300
#define tStr 301
#define tSprintf 302
#define tStrCat 303
#define tStrPrefix 304
#define tStrRelative 305
#define tStrReplace 306
#define tAbsolutePath 307
#define tDirName 308
#define tStrSub 309
#define tStrLen 310
#define tFind 311
#define tStrFind 312
#define tStrCmp 313
#define tStrChoice 314
#define tUpperCase 315
#define tLowerCase 316
#define tLowerCaseIn 317
#define tTextAttributes 318
#define tBoundingBox 319
#define tDraw 320
#define tSetChanged 321
#define tToday 322
#define tFixRelativePath 323
#define tCurrentDirectory 324
#define tSyncModel 325
#define tNewModel 326
#define tOnelabAction 327
#define tOnelabRun 328
#define tCodeName 329
#define tCpu 330
#define tMemory 331
#define tTotalMemory 332
#define tCreateTopology 333
#define tCreateTopologyNoHoles 334
#define tDistanceFunction 335
#define tDefineConstant 336
#define tUndefineConstant 337
#define tDefineNumber 338
#define tDefineStruct 339
#define tNameStruct 340
#define tDimNameSpace 341
#define tAppend 342
#define tDefineString 343
#define tSetNumber 344
#define tSetString 345
#define tPoint 346
#define tCircle 347
#define tEllipse 348
#define tLine 349
#define tSphere 350
#define tPolarSphere 351
#define tSurface 352
#define tSpline 353
#define tVolume 354
#define tBlock 355
#define tCylinder 356
#define tCone 357
#define tTorus 358
#define tEllipsoid 359
#define tQuadric 360
#define tShapeFromFile 361
#define tRectangle 362
#define tDisk 363
#define tWire 364
#define tGeoEntity 365
#define tCharacteristic 366
#define tLength 367
#define tParametric 368
#define tElliptic 369
#define tRefineMesh 370
#define tAdaptMesh 371
#define tRelocateMesh 372
#define tSetFactory 373
#define tThruSections 374
#define tWedge 375
#define tFillet 376
#define tChamfer 377
#define tPlane 378
#define tRuled 379
#define tTransfinite 380
#define tPhysical 381
#define tCompound 382
#define tPeriodic 383
#define tUsing 384
#define tPlugin 385
#define tDegenerated 386
#define tRecursive 387
#define tRotate 388
#define tTranslate 389
#define tSymmetry 390
#define tDilate 391
#define tExtrude 392
#define tLevelset 393
#define tAffine 394
#define tBooleanUnion 395
#define tBooleanIntersection 396
#define tBooleanDifference 397
#define tBooleanSection 398
#define tBooleanFragments 399
#define tThickSolid 400
#define tRecombine 401
#define tSmoother 402
#define tSplit 403
#define tDelete 404
#define tCoherence 405
#define tIntersect 406
#define tMeshAlgorithm 407
#define tReverse 408
#define tLayers 409
#define tScaleLast 410
#define tHole 411
#define tAlias 412
#define tAliasWithOptions 413
#define tCopyOptions 414
#define tQuadTriAddVerts 415
#define tQuadTriNoNewVerts 416
#define tRecombLaterals 417
#define tTransfQuadTri 418
#define tText2D 419
#define tText3D 420
#define tInterpolationScheme 421
#define tTime 422
#define tCombine 423
#define tBSpline 424
#define tBezier 425
#define tNurbs 426
#define tNurbsOrder 427
#define tNurbsKnots 428
#define tColor 429
#define tColorTable 430
#define tFor 431
#define tIn 432
#define tEndFor 433
#define tIf 434
#define tElseIf 435
#define tElse 436
#define tEndIf 437
#define tExit 438
#define tAbort 439
#define tField 440
#define tReturn 441
#define tCall 442
#define tSlide 443
#define tMacro 444
#define tShow 445
#define tHide 446
#define tGetValue 447
#define tGetStringValue 448
#define tGetEnv 449
#define tGetString 450
#define tGetNumber 451
#define tUnique 452
#define tHomology 453
#define tCohomology 454
#define tBetti 455
#define tExists 456
#define tFileExists 457
#define tGetForced 458
#define tGetForcedStr 459
#define tGMSH_MAJOR_VERSION 460
#define tGMSH_MINOR_VERSION 461
#define tGMSH_PATCH_VERSION 462
#define tGmshExecutableName 463
#define tSetPartition 464
#define tNameToString 465
#define tStringToName 466
#define tAFFECTDIVIDE 467
#define tAFFECTTIMES 468
#define tAFFECTMINUS 469
#define tAFFECTPLUS 470
#define tOR 471
#define tAND 472
#define tNOTEQUAL 473
#define tEQUAL 474
#define tGREATERGREATER 475
#define tLESSLESS 476
#define tGREATEROREQUAL 477
#define tLESSOREQUAL 478
#define UNARYPREC 479
#define tMINUSMINUS 480
#define tPLUSPLUS 481




/* Copy the first part of user declarations.  */
#line 1 "Gmsh.y"

// Gmsh - Copyright (C) 1997-2017 C. Geuzaine, J.-F. Remacle
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to the public mailing list <gmsh@onelab.info>.

#include <sstream>
#include <map>
#include <string.h>
#include <stdarg.h>
#include <time.h>
#include "GmshConfig.h"
#include "GmshMessage.h"
#include "fullMatrix.h"
#include "MallocUtils.h"
#include "ListUtils.h"
#include "TreeUtils.h"
#include "StringUtils.h"
#include "Numeric.h"
#include "Context.h"
#include "GModel.h"
#include "GModelIO_GEO.h"
#include "GModelIO_OCC.h"
#include "GeoDefines.h"
#include "ExtrudeParams.h"
#include "Options.h"
#include "Parser.h"
#include "OpenFile.h"
#include "CommandLine.h"
#include "FunctionManager.h"
#include "ColorTable.h"
#include "OS.h"
#include "CreateFile.h"
#include "gmshSurface.h"
#include "gmshLevelset.h"
#include "fullMatrix.h"

#if defined(HAVE_MESH)
#include "Generator.h"
#include "Field.h"
#include "BackgroundMesh.h"
#include "HighOrder.h"
#endif

#if defined(HAVE_POST)
#include "PView.h"
#include "PViewDataList.h"
#endif

#if defined(HAVE_PLUGINS)
#include "PluginManager.h"
#endif

#if defined(HAVE_OPENGL)
#include "drawContext.h"
#endif

#if defined(HAVE_POPPLER)
#include "gmshPopplerWrapper.h"
#endif

#define MAX_RECUR_TESTS 100
#define MAX_RECUR_LOOPS 100

// global parser variables
std::string gmsh_yyname;
int gmsh_yyerrorstate = 0;
int gmsh_yyviewindex = 0;
std::map<std::string, gmsh_yysymbol> gmsh_yysymbols;
std::map<std::string, std::vector<std::string> > gmsh_yystringsymbols;
std::string gmsh_yyfactory;
NameSpaces gmsh_yynamespaces;

// static parser variables (accessible only in this file)
#if defined(HAVE_POST)
static PViewDataList *ViewData = 0;
#endif
static std::vector<double> ViewCoord;
static std::vector<double> *ViewValueList = 0;
static int *ViewNumList = 0;
static ExtrudeParams extr;
static gmshSurface *myGmshSurface = 0;
static int statusImbricatedTests[MAX_RECUR_TESTS];
static int ImbricatedLoop = 0, ImbricatedTest = 0;
static gmshfpos_t yyposImbricatedLoopsTab[MAX_RECUR_LOOPS];
static int yylinenoImbricatedLoopsTab[MAX_RECUR_LOOPS];
static double LoopControlVariablesTab[MAX_RECUR_LOOPS][3];
static std::string LoopControlVariablesNameTab[MAX_RECUR_LOOPS];
static std::string struct_name, struct_namespace;
static int flag_tSTRING_alloc = 0;
static int dim_entity;

static std::map<std::string, std::vector<double> > floatOptions;
static std::map<std::string, std::vector<std::string> > charOptions;
static int flag_Enum, member_ValMax;

void init_options(int member_ValMax_ = 0)
{
  floatOptions.clear(); charOptions.clear();
  flag_Enum = 0; member_ValMax = member_ValMax_;
}

// parser functions defined at the end of this file
void yyerror(const char *s);
void yymsg(int level, const char *fmt, ...);
char *strsave(char *ptr);
void skip(const char *skip, const char *until);
void skipTest(const char *skip, const char *until,
              const char *until2, int l_until2_sub, int *type_until2);
void assignVariable(const std::string &name, int index, int assignType,
                    double value);
void assignVariables(const std::string &name, List_T *indices, int assignType,
                     List_T *values);
void incrementVariable(const std::string &name, int index, double value);
int printListOfDouble(char *format, List_T *list, char *buffer);
fullMatrix<double> ListOfListOfDouble2Matrix(List_T *list);
void ListOfDouble2Vector(List_T *list, std::vector<int> &v);
void ListOfDouble2Vector(List_T *list, std::vector<double> &v);
void ListOfShapes2VectorOfPairs(List_T *list, std::vector<std::pair<int, int> > &v);
void VectorOfPairs2ListOfShapes(const std::vector<std::pair<int, int> > &v, List_T *list);
void addPeriodicEdge(int, int, const std::vector<double>&);
void addPeriodicFace(int, int, const std::map<int, int>&);
void addPeriodicFace(int, int, const std::vector<double>&);
void computeAffineTransformation(SPoint3&, SPoint3&, double, SPoint3&,
                                 std::vector<double>&);
void addEmbedded(int dim, std::vector<int> tags, int dim2, int tag2);
void getAllElementaryTags(int dim, List_T *in);
void getAllPhysicalTags(int dim, List_T *in);
void getElementaryTagsForPhysicalGroups(int dim, List_T *in, List_T *out);
void getElementaryTagsInBoundingBox(int dim, double x1, double y1, double z1,
                                    double x2, double y2, double z2, List_T *out);
void setVisibility(int dim, int visible, bool recursive);
void setVisibility(const std::vector<std::pair<int, int> > &dimTags, int visible,
                   bool recursive);
void setColor(const std::vector<std::pair<int, int> > &dimTags, unsigned int val,
              bool recursive);

double treat_Struct_FullName_Float
  (char* c1, char* c2, int type_var = 1, int index = 0,
   double val_default = 0., int type_treat = 0);
double treat_Struct_FullName_dot_tSTRING_Float
  (char* c1, char* c2, char* c3, int index = 0,
   double val_default = 0., int type_treat = 0);
List_T * treat_Struct_FullName_dot_tSTRING_ListOfFloat
  (char* c1, char* c2, char* c3);
int treat_Struct_FullName_dot_tSTRING_Float_getDim
  (char* c1, char* c2, char* c3);
char* treat_Struct_FullName_String
  (char* c1, char* c2, int type_var = 1, int index = 0,
   char* val_default = NULL, int type_treat = 0);
char* treat_Struct_FullName_dot_tSTRING_String
  (char* c1, char* c2, char* c3, int index = 0,
   char* val_default = NULL, int type_treat = 0);
List_T * treat_Struct_FullName_dot_tSTRING_ListOfString
  (char* c1, char* c2, char* c3);

struct doubleXstring{
  double d;
  char *s;
};



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 164 "Gmsh.y"
{
  char *c;
  int i;
  unsigned int u;
  double d;
  double v[5];
  Shape s;
  List_T *l;
  struct TwoChar c2;
}
/* Line 193 of yacc.c.  */
#line 730 "Gmsh.tab.cpp"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 743 "Gmsh.tab.cpp"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   14866

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  249
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  113
/* YYNRULES -- Number of rules.  */
#define YYNRULES  585
/* YYNRULES -- Number of states.  */
#define YYNSTATES  2058

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   481

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   234,     2,   246,     2,   231,   233,     2,
     239,   240,   229,   227,   248,   228,   245,   230,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     221,     2,   222,   216,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   241,     2,   242,   238,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   243,   232,   244,   247,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   217,   218,   219,   220,   223,   224,   225,   226,   235,
     236,   237
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,     9,    12,    14,    16,    18,
      24,    26,    28,    30,    32,    34,    36,    38,    40,    42,
      44,    46,    48,    50,    52,    54,    56,    58,    60,    66,
      72,    80,    88,    96,   106,   113,   120,   127,   136,   137,
     140,   143,   146,   149,   152,   154,   158,   160,   164,   165,
     166,   177,   179,   183,   184,   198,   200,   204,   205,   221,
     230,   245,   246,   253,   255,   257,   259,   261,   263,   265,
     267,   269,   271,   273,   275,   281,   287,   290,   298,   306,
     311,   315,   322,   332,   340,   347,   355,   362,   367,   376,
     386,   396,   403,   413,   420,   430,   436,   445,   454,   466,
     473,   483,   489,   497,   507,   517,   529,   537,   547,   557,
     558,   560,   561,   565,   571,   572,   582,   583,   595,   601,
     602,   612,   613,   617,   621,   627,   633,   634,   637,   638,
     640,   642,   646,   649,   651,   656,   659,   662,   663,   666,
     668,   672,   675,   678,   681,   684,   687,   689,   691,   695,
     696,   702,   703,   706,   714,   722,   730,   739,   748,   756,
     764,   776,   784,   793,   802,   811,   821,   825,   830,   841,
     849,   857,   865,   873,   881,   889,   897,   905,   913,   921,
     930,   938,   946,   955,   964,   977,   978,   988,   990,   992,
     994,   996,  1001,  1003,  1005,  1007,  1012,  1014,  1016,  1021,
    1023,  1025,  1027,  1032,  1038,  1050,  1056,  1066,  1076,  1081,
    1091,  1101,  1103,  1105,  1106,  1109,  1116,  1125,  1136,  1151,
    1168,  1181,  1196,  1211,  1226,  1241,  1250,  1259,  1266,  1271,
    1277,  1284,  1291,  1295,  1300,  1304,  1310,  1317,  1323,  1327,
    1331,  1336,  1342,  1347,  1353,  1357,  1363,  1371,  1379,  1383,
    1391,  1395,  1398,  1401,  1404,  1407,  1410,  1426,  1429,  1432,
    1435,  1438,  1441,  1458,  1470,  1477,  1486,  1495,  1506,  1508,
    1511,  1514,  1516,  1520,  1524,  1529,  1534,  1536,  1538,  1544,
    1556,  1570,  1571,  1579,  1580,  1594,  1595,  1611,  1612,  1619,
    1629,  1632,  1636,  1647,  1649,  1652,  1658,  1666,  1669,  1672,
    1676,  1679,  1683,  1686,  1690,  1700,  1707,  1709,  1711,  1713,
    1715,  1717,  1718,  1721,  1725,  1729,  1734,  1744,  1749,  1764,
    1765,  1769,  1770,  1772,  1773,  1776,  1777,  1780,  1781,  1784,
    1791,  1799,  1806,  1812,  1816,  1825,  1831,  1836,  1843,  1855,
    1867,  1886,  1905,  1918,  1931,  1944,  1955,  1960,  1965,  1970,
    1975,  1978,  1982,  1989,  1991,  1993,  1995,  1998,  2004,  2012,
    2023,  2025,  2029,  2032,  2035,  2038,  2042,  2046,  2050,  2054,
    2058,  2062,  2066,  2070,  2074,  2078,  2082,  2086,  2090,  2094,
    2098,  2102,  2106,  2110,  2116,  2121,  2126,  2131,  2136,  2141,
    2146,  2151,  2156,  2161,  2166,  2173,  2178,  2183,  2188,  2193,
    2198,  2203,  2208,  2213,  2220,  2227,  2234,  2239,  2241,  2243,
    2245,  2247,  2249,  2251,  2253,  2255,  2257,  2259,  2261,  2262,
    2269,  2271,  2276,  2283,  2285,  2290,  2295,  2300,  2307,  2313,
    2321,  2326,  2331,  2338,  2343,  2347,  2350,  2356,  2362,  2366,
    2372,  2379,  2388,  2395,  2404,  2411,  2416,  2424,  2431,  2438,
    2445,  2450,  2457,  2462,  2463,  2466,  2467,  2470,  2471,  2479,
    2481,  2485,  2487,  2489,  2492,  2493,  2497,  2499,  2502,  2505,
    2509,  2513,  2525,  2535,  2543,  2551,  2553,  2557,  2559,  2561,
    2564,  2568,  2573,  2579,  2581,  2583,  2586,  2590,  2594,  2600,
    2605,  2608,  2612,  2629,  2631,  2633,  2635,  2639,  2645,  2653,
    2658,  2663,  2668,  2675,  2682,  2691,  2700,  2705,  2720,  2725,
    2730,  2732,  2734,  2738,  2742,  2752,  2760,  2762,  2768,  2772,
    2779,  2781,  2785,  2787,  2789,  2794,  2799,  2803,  2809,  2816,
    2825,  2832,  2838,  2844,  2850,  2856,  2858,  2863,  2865,  2867,
    2869,  2871,  2876,  2883,  2888,  2895,  2901,  2909,  2914,  2919,
    2924,  2933,  2938,  2943,  2948,  2953,  2962,  2971,  2978,  2983,
    2990,  2995,  2997,  3002,  3007,  3008,  3015,  3020,  3023,  3028,
    3033,  3035,  3037,  3041,  3043,  3045,  3049,  3053,  3057,  3063,
    3071,  3077,  3083,  3092,  3094,  3096
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     250,     0,    -1,   251,    -1,     1,     6,    -1,    -1,   251,
     252,    -1,   254,    -1,   255,    -1,   275,    -1,   118,   239,
     351,   240,     6,    -1,   293,    -1,   299,    -1,   303,    -1,
     304,    -1,   305,    -1,   306,    -1,   310,    -1,   319,    -1,
     320,    -1,   326,    -1,   327,    -1,   309,    -1,   308,    -1,
     307,    -1,   302,    -1,   329,    -1,   222,    -1,   223,    -1,
      44,   239,   351,   240,     6,    -1,    45,   239,   351,   240,
       6,    -1,    44,   239,   351,   240,   253,   351,     6,    -1,
      44,   239,   351,   248,   347,   240,     6,    -1,    45,   239,
     351,   248,   347,   240,     6,    -1,    44,   239,   351,   248,
     347,   240,   253,   351,     6,    -1,   361,   351,   243,   256,
     244,     6,    -1,   157,     4,   241,   330,   242,     6,    -1,
     158,     4,   241,   330,   242,     6,    -1,   159,     4,   241,
     330,   248,   330,   242,     6,    -1,    -1,   256,   259,    -1,
     256,   263,    -1,   256,   266,    -1,   256,   268,    -1,   256,
     269,    -1,   330,    -1,   257,   248,   330,    -1,   330,    -1,
     258,   248,   330,    -1,    -1,    -1,     4,   260,   239,   257,
     240,   261,   243,   258,   244,     6,    -1,   351,    -1,   262,
     248,   351,    -1,    -1,   164,   239,   330,   248,   330,   248,
     330,   240,   264,   243,   262,   244,     6,    -1,   351,    -1,
     265,   248,   351,    -1,    -1,   165,   239,   330,   248,   330,
     248,   330,   248,   330,   240,   267,   243,   265,   244,     6,
      -1,   166,   243,   343,   244,   243,   343,   244,     6,    -1,
     166,   243,   343,   244,   243,   343,   244,   243,   343,   244,
     243,   343,   244,     6,    -1,    -1,   167,   270,   243,   258,
     244,     6,    -1,     7,    -1,   215,    -1,   214,    -1,   213,
      -1,   212,    -1,   237,    -1,   236,    -1,   239,    -1,   241,
      -1,   240,    -1,   242,    -1,    81,   241,   277,   242,     6,
      -1,    82,   241,   281,   242,     6,    -1,   335,     6,    -1,
      89,   273,   352,   248,   330,   274,     6,    -1,    90,   273,
     361,   248,   352,   274,     6,    -1,   361,   271,   344,     6,
      -1,   361,   272,     6,    -1,   361,   273,   274,   271,   344,
       6,    -1,   361,   273,   243,   347,   244,   274,   271,   344,
       6,    -1,   361,   241,   330,   242,   271,   330,     6,    -1,
     361,   241,   330,   242,   272,     6,    -1,   361,   239,   330,
     240,   271,   330,     6,    -1,   361,   239,   330,   240,   272,
       6,    -1,   361,     7,   352,     6,    -1,   361,   273,   274,
       7,    46,   273,   274,     6,    -1,   361,   273,   274,     7,
      46,   273,   356,   274,     6,    -1,   361,   273,   274,   215,
      46,   273,   356,   274,     6,    -1,   361,   245,     4,     7,
     352,     6,    -1,   361,   241,   330,   242,   245,     4,     7,
     352,     6,    -1,   361,   245,     4,   271,   330,     6,    -1,
     361,   241,   330,   242,   245,     4,   271,   330,     6,    -1,
     361,   245,     4,   272,     6,    -1,   361,   241,   330,   242,
     245,     4,   272,     6,    -1,   361,   245,   174,   245,     4,
       7,   348,     6,    -1,   361,   241,   330,   242,   245,   174,
     245,     4,     7,   348,     6,    -1,   361,   245,   175,     7,
     349,     6,    -1,   361,   241,   330,   242,   245,   175,     7,
     349,     6,    -1,   361,   185,     7,   330,     6,    -1,   185,
     241,   330,   242,     7,     4,     6,    -1,   185,   241,   330,
     242,   245,     4,     7,   330,     6,    -1,   185,   241,   330,
     242,   245,     4,     7,   352,     6,    -1,   185,   241,   330,
     242,   245,     4,     7,   243,   347,   244,     6,    -1,   185,
     241,   330,   242,   245,     4,     6,    -1,   130,   239,     4,
     240,   245,     4,     7,   330,     6,    -1,   130,   239,     4,
     240,   245,     4,     7,   352,     6,    -1,    -1,   248,    -1,
      -1,   277,   276,   361,    -1,   277,   276,   361,     7,   330,
      -1,    -1,   277,   276,   361,     7,   243,   344,   278,   283,
     244,    -1,    -1,   277,   276,   361,   273,   274,     7,   243,
     344,   279,   283,   244,    -1,   277,   276,   361,     7,   352,
      -1,    -1,   277,   276,   361,     7,   243,   352,   280,   287,
     244,    -1,    -1,   281,   276,   351,    -1,   330,     7,   352,
      -1,   282,   248,   330,     7,   352,    -1,   346,     7,   361,
     239,   240,    -1,    -1,   248,   285,    -1,    -1,   285,    -1,
     286,    -1,   285,   248,   286,    -1,     4,   344,    -1,     4,
      -1,     4,   243,   282,   244,    -1,     4,   352,    -1,     4,
     355,    -1,    -1,   248,   288,    -1,   289,    -1,   288,   248,
     289,    -1,     4,   330,    -1,     4,   352,    -1,   189,   352,
      -1,     4,   357,    -1,     4,   355,    -1,   330,    -1,   352,
      -1,   352,   248,   330,    -1,    -1,   177,    95,   243,   330,
     244,    -1,    -1,   123,   341,    -1,    91,   239,   330,   240,
       7,   341,     6,    -1,    94,   239,   330,   240,     7,   344,
       6,    -1,    98,   239,   330,   240,     7,   344,     6,    -1,
      92,   239,   330,   240,     7,   344,   292,     6,    -1,    93,
     239,   330,   240,     7,   344,   292,     6,    -1,   169,   239,
     330,   240,     7,   344,     6,    -1,   170,   239,   330,   240,
       7,   344,     6,    -1,   171,   239,   330,   240,     7,   344,
     173,   344,   172,   330,     6,    -1,   109,   239,   330,   240,
       7,   344,     6,    -1,    94,     4,   239,   330,   240,     7,
     344,     6,    -1,   123,    97,   239,   330,   240,     7,   344,
       6,    -1,    97,   239,   330,   240,     7,   344,   291,     6,
      -1,   124,    97,   239,   330,   240,     7,   344,   291,     6,
      -1,    13,    14,     6,    -1,    14,    97,   330,     6,    -1,
     113,    97,   239,   330,   240,     7,     5,     5,     5,     6,
      -1,    95,   239,   330,   240,     7,   344,     6,    -1,    96,
     239,   330,   240,     7,   344,     6,    -1,   100,   239,   330,
     240,     7,   344,     6,    -1,   103,   239,   330,   240,     7,
     344,     6,    -1,   107,   239,   330,   240,     7,   344,     6,
      -1,   108,   239,   330,   240,     7,   344,     6,    -1,   101,
     239,   330,   240,     7,   344,     6,    -1,   102,   239,   330,
     240,     7,   344,     6,    -1,   120,   239,   330,   240,     7,
     344,     6,    -1,   145,   239,   330,   240,     7,   344,     6,
      -1,    97,     4,   239,   330,   240,     7,   344,     6,    -1,
      99,   239,   330,   240,     7,   344,     6,    -1,   119,   239,
     330,   240,     7,   344,     6,    -1,   124,   119,   239,   330,
     240,     7,   344,     6,    -1,   127,   296,   239,   330,   240,
       7,   344,     6,    -1,   127,   296,   239,   330,   240,     7,
     344,     4,   243,   343,   244,     6,    -1,    -1,   126,   295,
     294,   239,   290,   240,   271,   344,     6,    -1,    91,    -1,
      94,    -1,    97,    -1,    99,    -1,   110,   243,   330,   244,
      -1,    94,    -1,    97,    -1,    99,    -1,   110,   243,   330,
     244,    -1,    94,    -1,    97,    -1,   110,   243,   330,   244,
      -1,    91,    -1,    94,    -1,    97,    -1,   110,   243,   330,
     244,    -1,   134,   341,   243,   300,   244,    -1,   133,   243,
     341,   248,   341,   248,   330,   244,   243,   300,   244,    -1,
     135,   341,   243,   300,   244,    -1,   136,   243,   341,   248,
     330,   244,   243,   300,   244,    -1,   136,   243,   341,   248,
     341,   244,   243,   300,   244,    -1,     4,   243,   300,   244,
      -1,   151,    94,   243,   347,   244,    97,   243,   330,   244,
      -1,   148,    94,   239,   330,   240,   243,   347,   244,     6,
      -1,   301,    -1,   299,    -1,    -1,   301,   293,    -1,   301,
     295,   243,   347,   244,     6,    -1,   138,   123,   239,   330,
     240,     7,   344,     6,    -1,   138,    91,   239,   330,   240,
       7,   243,   343,   244,     6,    -1,   138,   123,   239,   330,
     240,     7,   243,   341,   248,   341,   248,   347,   244,     6,
      -1,   138,   123,   239,   330,   240,     7,   243,   341,   248,
     341,   248,   341,   248,   347,   244,     6,    -1,   138,    95,
     239,   330,   240,     7,   243,   341,   248,   347,   244,     6,
      -1,   138,   101,   239,   330,   240,     7,   243,   341,   248,
     341,   248,   347,   244,     6,    -1,   138,   102,   239,   330,
     240,     7,   243,   341,   248,   341,   248,   347,   244,     6,
      -1,   138,   104,   239,   330,   240,     7,   243,   341,   248,
     341,   248,   347,   244,     6,    -1,   138,   105,   239,   330,
     240,     7,   243,   341,   248,   341,   248,   347,   244,     6,
      -1,   138,     4,   239,   330,   240,     7,   344,     6,    -1,
     138,     4,   239,   330,   240,     7,     5,     6,    -1,   138,
       4,   243,   330,   244,     6,    -1,   149,   243,   301,   244,
      -1,   132,   149,   243,   301,   244,    -1,   149,   185,   241,
     330,   242,     6,    -1,   149,     4,   241,   330,   242,     6,
      -1,   149,   361,     6,    -1,   149,     4,     4,     6,    -1,
     149,    84,     6,    -1,   174,   348,   243,   301,   244,    -1,
     132,   174,   348,   243,   301,   244,    -1,   209,   330,   243,
     301,   244,    -1,   190,     5,     6,    -1,   191,     5,     6,
      -1,   190,   243,   301,   244,    -1,   132,   190,   243,   301,
     244,    -1,   191,   243,   301,   244,    -1,   132,   191,   243,
     301,   244,    -1,   361,   352,     6,    -1,    73,   239,   358,
     240,     6,    -1,   361,   361,   241,   330,   242,   351,     6,
      -1,   361,   361,   361,   241,   330,   242,     6,    -1,   361,
     330,     6,    -1,   130,   239,     4,   240,   245,     4,     6,
      -1,   168,     4,     6,    -1,   183,     6,    -1,   184,     6,
      -1,    70,     6,    -1,    71,     6,    -1,    64,     6,    -1,
      64,   243,   330,   248,   330,   248,   330,   248,   330,   248,
     330,   248,   330,   244,     6,    -1,    65,     6,    -1,    66,
       6,    -1,    78,     6,    -1,    79,     6,    -1,   115,     6,
      -1,   116,   243,   347,   244,   243,   347,   244,   243,   343,
     244,   243,   330,   248,   330,   244,     6,    -1,   188,   239,
     243,   347,   244,   248,   352,   248,   352,   240,     6,    -1,
     176,   239,   330,     8,   330,   240,    -1,   176,   239,   330,
       8,   330,     8,   330,   240,    -1,   176,     4,   177,   243,
     330,     8,   330,   244,    -1,   176,     4,   177,   243,   330,
       8,   330,     8,   330,   244,    -1,   178,    -1,   189,     4,
      -1,   189,   352,    -1,   186,    -1,   187,   361,     6,    -1,
     187,   352,     6,    -1,   179,   239,   330,   240,    -1,   180,
     239,   330,   240,    -1,   181,    -1,   182,    -1,   137,   341,
     243,   301,   244,    -1,   137,   243,   341,   248,   341,   248,
     330,   244,   243,   301,   244,    -1,   137,   243,   341,   248,
     341,   248,   341,   248,   330,   244,   243,   301,   244,    -1,
      -1,   137,   341,   243,   301,   311,   315,   244,    -1,    -1,
     137,   243,   341,   248,   341,   248,   330,   244,   243,   301,
     312,   315,   244,    -1,    -1,   137,   243,   341,   248,   341,
     248,   341,   248,   330,   244,   243,   301,   313,   315,   244,
      -1,    -1,   137,   243,   301,   314,   315,   244,    -1,   137,
     243,   301,   244,   129,   109,   243,   330,   244,    -1,   119,
     344,    -1,   124,   119,   344,    -1,   121,   243,   347,   244,
     243,   347,   244,   243,   330,   244,    -1,   316,    -1,   315,
     316,    -1,   154,   243,   330,   244,     6,    -1,   154,   243,
     344,   248,   344,   244,     6,    -1,   155,     6,    -1,   146,
       6,    -1,   146,   330,     6,    -1,   160,     6,    -1,   160,
     162,     6,    -1,   161,     6,    -1,   161,   162,     6,    -1,
     156,   239,   330,   240,     7,   344,   129,   330,     6,    -1,
     129,     4,   241,   330,   242,     6,    -1,   140,    -1,   141,
      -1,   142,    -1,   143,    -1,   144,    -1,    -1,   149,     6,
      -1,   132,   149,     6,    -1,   149,   330,     6,    -1,   132,
     149,   330,     6,    -1,   317,   243,   301,   318,   244,   243,
     301,   318,   244,    -1,   106,   239,   351,   240,    -1,   317,
     239,   330,   240,     7,   243,   301,   318,   244,   243,   301,
     318,   244,     6,    -1,    -1,   129,     4,   330,    -1,    -1,
       4,    -1,    -1,     7,   344,    -1,    -1,     7,   330,    -1,
      -1,   139,   344,    -1,   111,   112,   344,     7,   330,     6,
      -1,   125,    94,   345,     7,   330,   321,     6,    -1,   125,
      97,   345,   323,   322,     6,    -1,   125,    99,   345,   323,
       6,    -1,   163,   345,     6,    -1,   152,    97,   243,   347,
     244,     7,   330,     6,    -1,   146,    97,   345,   324,     6,
      -1,   146,    99,   345,     6,    -1,   147,    97,   345,     7,
     330,     6,    -1,   128,    94,   243,   347,   244,     7,   243,
     347,   244,   325,     6,    -1,   128,    97,   243,   347,   244,
       7,   243,   347,   244,   325,     6,    -1,   128,    94,   243,
     347,   244,     7,   243,   347,   244,   133,   243,   341,   248,
     341,   248,   330,   244,     6,    -1,   128,    97,   243,   347,
     244,     7,   243,   347,   244,   133,   243,   341,   248,   341,
     248,   330,   244,     6,    -1,   128,    94,   243,   347,   244,
       7,   243,   347,   244,   134,   341,     6,    -1,   128,    97,
     243,   347,   244,     7,   243,   347,   244,   134,   341,     6,
      -1,   128,    97,   330,   243,   347,   244,     7,   330,   243,
     347,   244,     6,    -1,   295,   243,   347,   244,   177,   295,
     243,   330,   244,     6,    -1,   153,   297,   345,     6,    -1,
     117,   298,   345,     6,    -1,   131,    94,   344,     6,    -1,
     127,   296,   344,     6,    -1,   150,     6,    -1,   150,     4,
       6,    -1,   150,    91,   243,   347,   244,     6,    -1,   198,
      -1,   199,    -1,   200,    -1,   328,     6,    -1,   328,   243,
     344,   244,     6,    -1,   328,   243,   344,   248,   344,   244,
       6,    -1,   328,   239,   344,   240,   243,   344,   248,   344,
     244,     6,    -1,   331,    -1,   239,   330,   240,    -1,   228,
     330,    -1,   227,   330,    -1,   234,   330,    -1,   330,   228,
     330,    -1,   330,   227,   330,    -1,   330,   229,   330,    -1,
     330,   230,   330,    -1,   330,   232,   330,    -1,   330,   233,
     330,    -1,   330,   231,   330,    -1,   330,   238,   330,    -1,
     330,   221,   330,    -1,   330,   222,   330,    -1,   330,   226,
     330,    -1,   330,   225,   330,    -1,   330,   220,   330,    -1,
     330,   219,   330,    -1,   330,   218,   330,    -1,   330,   217,
     330,    -1,   330,   223,   330,    -1,   330,   224,   330,    -1,
     330,   216,   330,     8,   330,    -1,    16,   273,   330,   274,
      -1,    17,   273,   330,   274,    -1,    18,   273,   330,   274,
      -1,    19,   273,   330,   274,    -1,    20,   273,   330,   274,
      -1,    21,   273,   330,   274,    -1,    22,   273,   330,   274,
      -1,    23,   273,   330,   274,    -1,    24,   273,   330,   274,
      -1,    26,   273,   330,   274,    -1,    27,   273,   330,   248,
     330,   274,    -1,    28,   273,   330,   274,    -1,    29,   273,
     330,   274,    -1,    30,   273,   330,   274,    -1,    31,   273,
     330,   274,    -1,    32,   273,   330,   274,    -1,    33,   273,
     330,   274,    -1,    34,   273,   330,   274,    -1,    35,   273,
     330,   274,    -1,    36,   273,   330,   248,   330,   274,    -1,
      37,   273,   330,   248,   330,   274,    -1,    38,   273,   330,
     248,   330,   274,    -1,    25,   273,   330,   274,    -1,     3,
      -1,    10,    -1,    15,    -1,    11,    -1,    12,    -1,   205,
      -1,   206,    -1,   207,    -1,    75,    -1,    76,    -1,    77,
      -1,    -1,    83,   273,   330,   332,   283,   274,    -1,   335,
      -1,   196,   273,   351,   274,    -1,   196,   273,   351,   248,
     330,   274,    -1,   337,    -1,   361,   241,   330,   242,    -1,
     361,   239,   330,   240,    -1,   201,   239,   337,   240,    -1,
     201,   239,   337,   245,   338,   240,    -1,   203,   239,   337,
     333,   240,    -1,   203,   239,   337,   245,   338,   333,   240,
      -1,   202,   239,   352,   240,    -1,   246,   361,   273,   274,
      -1,   246,   337,   245,   338,   273,   274,    -1,    86,   273,
     361,   274,    -1,    86,   273,   274,    -1,   361,   272,    -1,
     361,   241,   330,   242,   272,    -1,   361,   239,   330,   240,
     272,    -1,   361,   245,   338,    -1,   361,     9,   361,   245,
     338,    -1,   361,   245,   338,   239,   330,   240,    -1,   361,
       9,   361,   245,   338,   239,   330,   240,    -1,   361,   245,
     338,   241,   330,   242,    -1,   361,     9,   361,   245,   338,
     241,   330,   242,    -1,   361,   241,   330,   242,   245,     4,
      -1,   361,   245,     4,   272,    -1,   361,   241,   330,   242,
     245,     4,   272,    -1,   192,   239,   351,   248,   330,   240,
      -1,    56,   239,   344,   248,   344,   240,    -1,    57,   273,
     351,   248,   351,   274,    -1,    55,   273,   351,   274,    -1,
      58,   273,   351,   248,   351,   274,    -1,    63,   239,   358,
     240,    -1,    -1,   248,   330,    -1,    -1,   248,   351,    -1,
      -1,    84,   337,   340,   336,   241,   284,   242,    -1,   361,
      -1,   361,     9,   361,    -1,     4,    -1,    87,    -1,    87,
     330,    -1,    -1,   239,   339,   240,    -1,   342,    -1,   228,
     341,    -1,   227,   341,    -1,   341,   228,   341,    -1,   341,
     227,   341,    -1,   243,   330,   248,   330,   248,   330,   248,
     330,   248,   330,   244,    -1,   243,   330,   248,   330,   248,
     330,   248,   330,   244,    -1,   243,   330,   248,   330,   248,
     330,   244,    -1,   239,   330,   248,   330,   248,   330,   240,
      -1,   344,    -1,   343,   248,   344,    -1,   330,    -1,   346,
      -1,   243,   244,    -1,   243,   347,   244,    -1,   228,   243,
     347,   244,    -1,   330,   229,   243,   347,   244,    -1,   344,
      -1,     5,    -1,   228,   346,    -1,   330,   229,   346,    -1,
     330,     8,   330,    -1,   330,     8,   330,     8,   330,    -1,
      91,   243,   330,   244,    -1,   295,     5,    -1,   126,   295,
     345,    -1,   295,   177,    64,   243,   330,   248,   330,   248,
     330,   248,   330,   248,   330,   248,   330,   244,    -1,   299,
      -1,   310,    -1,   319,    -1,   361,   273,   274,    -1,   361,
     245,   338,   273,   274,    -1,   361,     9,   361,   245,   338,
     273,   274,    -1,    39,   241,   361,   242,    -1,    39,   241,
     346,   242,    -1,    39,   239,   346,   240,    -1,    39,   273,
     243,   347,   244,   274,    -1,   361,   273,   243,   347,   244,
     274,    -1,    40,   273,   330,   248,   330,   248,   330,   274,
      -1,    41,   273,   330,   248,   330,   248,   330,   274,    -1,
      42,   273,   351,   274,    -1,    43,   273,   330,   248,   330,
     248,   330,   248,   330,   248,   330,   248,   330,   274,    -1,
     197,   273,   346,   274,    -1,    32,   273,   346,   274,    -1,
     330,    -1,   346,    -1,   347,   248,   330,    -1,   347,   248,
     346,    -1,   243,   330,   248,   330,   248,   330,   248,   330,
     244,    -1,   243,   330,   248,   330,   248,   330,   244,    -1,
     361,    -1,     4,   245,   174,   245,     4,    -1,   243,   350,
     244,    -1,   361,   241,   330,   242,   245,   175,    -1,   348,
      -1,   350,   248,   348,    -1,   352,    -1,   361,    -1,   361,
     241,   330,   242,    -1,   361,   239,   330,   240,    -1,   361,
     245,   338,    -1,   361,     9,   361,   245,   338,    -1,   361,
     245,   338,   239,   330,   240,    -1,   361,     9,   361,   245,
     338,   239,   330,   240,    -1,   361,   241,   330,   242,   245,
       4,    -1,   126,    91,   243,   330,   244,    -1,   126,    94,
     243,   330,   244,    -1,   126,    97,   243,   330,   244,    -1,
     126,    99,   243,   330,   244,    -1,     5,    -1,   210,   241,
     361,   242,    -1,    67,    -1,   208,    -1,    72,    -1,    74,
      -1,   194,   239,   351,   240,    -1,   193,   239,   351,   248,
     351,   240,    -1,   195,   273,   351,   274,    -1,   195,   273,
     351,   248,   351,   274,    -1,   204,   239,   337,   334,   240,
      -1,   204,   239,   337,   245,   338,   334,   240,    -1,    48,
     273,   358,   274,    -1,    49,   239,   351,   240,    -1,    50,
     239,   351,   240,    -1,    51,   239,   351,   248,   351,   248,
     351,   240,    -1,    46,   273,   358,   274,    -1,    60,   273,
     351,   274,    -1,    61,   273,   351,   274,    -1,    62,   273,
     351,   274,    -1,    59,   273,   330,   248,   351,   248,   351,
     274,    -1,    54,   273,   351,   248,   330,   248,   330,   274,
      -1,    54,   273,   351,   248,   330,   274,    -1,    47,   273,
     351,   274,    -1,    47,   273,   351,   248,   347,   274,    -1,
      68,   273,   351,   274,    -1,    69,    -1,    53,   273,   351,
     274,    -1,    52,   273,   351,   274,    -1,    -1,    88,   273,
     352,   353,   287,   274,    -1,    85,   273,   354,   274,    -1,
     246,   330,    -1,   361,     9,   246,   330,    -1,    46,   273,
     357,   274,    -1,   358,    -1,   357,    -1,   243,   358,   244,
      -1,   351,    -1,   359,    -1,   358,   248,   351,    -1,   358,
     248,   359,    -1,   361,   239,   240,    -1,   361,   245,   338,
     239,   240,    -1,   361,     9,   361,   245,   338,   239,   240,
      -1,     4,   247,   243,   330,   244,    -1,   360,   247,   243,
     330,   244,    -1,   211,   241,   351,   242,   247,   243,   330,
     244,    -1,     4,    -1,   360,    -1,   211,   241,   351,   242,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   266,   266,   267,   272,   274,   278,   279,   280,   281,
     300,   301,   302,   303,   304,   305,   306,   307,   308,   309,
     310,   311,   312,   313,   314,   315,   319,   323,   330,   335,
     340,   354,   367,   380,   408,   422,   435,   448,   467,   472,
     473,   474,   475,   476,   480,   482,   487,   489,   495,   599,
     494,   617,   624,   635,   634,   652,   659,   670,   669,   686,
     703,   726,   725,   739,   740,   741,   742,   743,   747,   748,
     754,   754,   755,   755,   761,   762,   763,   764,   769,   775,
     837,   852,   881,   891,   896,   904,   909,   917,   926,   931,
     943,   960,   966,   975,   993,  1011,  1020,  1032,  1037,  1045,
    1065,  1088,  1099,  1107,  1129,  1152,  1190,  1211,  1223,  1237,
    1237,  1239,  1241,  1250,  1260,  1259,  1280,  1279,  1297,  1307,
    1306,  1320,  1322,  1330,  1336,  1341,  1367,  1369,  1372,  1374,
    1378,  1379,  1383,  1395,  1408,  1423,  1432,  1445,  1447,  1451,
    1452,  1457,  1465,  1474,  1482,  1496,  1514,  1518,  1525,  1534,
    1537,  1544,  1547,  1554,  1578,  1594,  1610,  1647,  1687,  1703,
    1719,  1741,  1757,  1776,  1792,  1813,  1824,  1830,  1836,  1843,
    1874,  1889,  1911,  1934,  1957,  1980,  2004,  2028,  2052,  2078,
    2095,  2111,  2129,  2147,  2177,  2207,  2206,  2236,  2238,  2240,
    2242,  2244,  2252,  2254,  2256,  2258,  2266,  2268,  2270,  2278,
    2280,  2282,  2284,  2294,  2310,  2326,  2342,  2358,  2374,  2409,
    2431,  2455,  2456,  2461,  2464,  2468,  2489,  2508,  2529,  2544,
    2560,  2578,  2629,  2650,  2672,  2695,  2800,  2816,  2851,  2862,
    2873,  2879,  2894,  2922,  2934,  2943,  2950,  2962,  2981,  2987,
    2993,  3000,  3007,  3014,  3026,  3099,  3117,  3134,  3149,  3182,
    3194,  3218,  3222,  3227,  3234,  3239,  3249,  3254,  3260,  3268,
    3272,  3276,  3285,  3349,  3365,  3382,  3399,  3421,  3443,  3478,
    3486,  3494,  3500,  3507,  3514,  3534,  3560,  3572,  3583,  3601,
    3619,  3638,  3637,  3662,  3661,  3688,  3687,  3712,  3711,  3734,
    3750,  3767,  3784,  3807,  3810,  3816,  3828,  3848,  3852,  3856,
    3860,  3864,  3868,  3872,  3876,  3885,  3898,  3899,  3900,  3901,
    3902,  3906,  3907,  3908,  3909,  3910,  3913,  3936,  3955,  3977,
    3980,  3996,  3999,  4016,  4019,  4025,  4028,  4035,  4038,  4045,
    4062,  4103,  4147,  4186,  4211,  4220,  4250,  4276,  4302,  4334,
    4361,  4387,  4413,  4439,  4465,  4487,  4498,  4546,  4595,  4607,
    4618,  4622,  4632,  4643,  4644,  4645,  4649,  4655,  4667,  4685,
    4713,  4714,  4715,  4716,  4717,  4718,  4719,  4720,  4721,  4728,
    4729,  4730,  4731,  4732,  4733,  4734,  4735,  4736,  4737,  4738,
    4739,  4740,  4741,  4742,  4743,  4744,  4745,  4746,  4747,  4748,
    4749,  4750,  4751,  4752,  4753,  4754,  4755,  4756,  4757,  4758,
    4759,  4760,  4761,  4762,  4763,  4764,  4765,  4774,  4775,  4776,
    4777,  4778,  4779,  4780,  4781,  4782,  4783,  4784,  4789,  4788,
    4796,  4798,  4803,  4808,  4812,  4817,  4822,  4826,  4830,  4834,
    4838,  4844,  4860,  4865,  4871,  4877,  4896,  4917,  4950,  4954,
    4959,  4963,  4967,  4971,  4976,  4981,  4991,  5001,  5006,  5017,
    5026,  5031,  5036,  5064,  5065,  5071,  5072,  5078,  5077,  5100,
    5102,  5107,  5116,  5118,  5124,  5125,  5130,  5134,  5138,  5142,
    5146,  5153,  5157,  5161,  5165,  5172,  5177,  5184,  5189,  5193,
    5198,  5202,  5210,  5221,  5225,  5237,  5245,  5253,  5260,  5270,
    5293,  5299,  5310,  5316,  5326,  5336,  5346,  5359,  5363,  5369,
    5381,  5385,  5389,  5393,  5411,  5419,  5427,  5456,  5466,  5482,
    5493,  5498,  5502,  5506,  5518,  5522,  5534,  5551,  5561,  5565,
    5580,  5585,  5592,  5596,  5601,  5615,  5632,  5636,  5641,  5645,
    5650,  5658,  5664,  5670,  5676,  5685,  5689,  5693,  5701,  5707,
    5713,  5717,  5725,  5733,  5740,  5750,  5755,  5760,  5775,  5789,
    5803,  5815,  5831,  5840,  5849,  5859,  5870,  5878,  5886,  5890,
    5909,  5916,  5922,  5929,  5937,  5936,  5946,  5970,  5972,  5978,
    5983,  5985,  5990,  5995,  6000,  6002,  6006,  6018,  6032,  6036,
    6043,  6051,  6059,  6070,  6072,  6075
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "tDOUBLE", "tSTRING", "tBIGSTR", "tEND",
  "tAFFECT", "tDOTS", "tSCOPE", "tPi", "tMPI_Rank", "tMPI_Size",
  "tEuclidian", "tCoordinates", "tTestLevel", "tExp", "tLog", "tLog10",
  "tSqrt", "tSin", "tAsin", "tCos", "tAcos", "tTan", "tRand", "tAtan",
  "tAtan2", "tSinh", "tCosh", "tTanh", "tFabs", "tAbs", "tFloor", "tCeil",
  "tRound", "tFmod", "tModulo", "tHypot", "tList", "tLinSpace",
  "tLogSpace", "tListFromFile", "tCatenary", "tPrintf", "tError", "tStr",
  "tSprintf", "tStrCat", "tStrPrefix", "tStrRelative", "tStrReplace",
  "tAbsolutePath", "tDirName", "tStrSub", "tStrLen", "tFind", "tStrFind",
  "tStrCmp", "tStrChoice", "tUpperCase", "tLowerCase", "tLowerCaseIn",
  "tTextAttributes", "tBoundingBox", "tDraw", "tSetChanged", "tToday",
  "tFixRelativePath", "tCurrentDirectory", "tSyncModel", "tNewModel",
  "tOnelabAction", "tOnelabRun", "tCodeName", "tCpu", "tMemory",
  "tTotalMemory", "tCreateTopology", "tCreateTopologyNoHoles",
  "tDistanceFunction", "tDefineConstant", "tUndefineConstant",
  "tDefineNumber", "tDefineStruct", "tNameStruct", "tDimNameSpace",
  "tAppend", "tDefineString", "tSetNumber", "tSetString", "tPoint",
  "tCircle", "tEllipse", "tLine", "tSphere", "tPolarSphere", "tSurface",
  "tSpline", "tVolume", "tBlock", "tCylinder", "tCone", "tTorus",
  "tEllipsoid", "tQuadric", "tShapeFromFile", "tRectangle", "tDisk",
  "tWire", "tGeoEntity", "tCharacteristic", "tLength", "tParametric",
  "tElliptic", "tRefineMesh", "tAdaptMesh", "tRelocateMesh", "tSetFactory",
  "tThruSections", "tWedge", "tFillet", "tChamfer", "tPlane", "tRuled",
  "tTransfinite", "tPhysical", "tCompound", "tPeriodic", "tUsing",
  "tPlugin", "tDegenerated", "tRecursive", "tRotate", "tTranslate",
  "tSymmetry", "tDilate", "tExtrude", "tLevelset", "tAffine",
  "tBooleanUnion", "tBooleanIntersection", "tBooleanDifference",
  "tBooleanSection", "tBooleanFragments", "tThickSolid", "tRecombine",
  "tSmoother", "tSplit", "tDelete", "tCoherence", "tIntersect",
  "tMeshAlgorithm", "tReverse", "tLayers", "tScaleLast", "tHole", "tAlias",
  "tAliasWithOptions", "tCopyOptions", "tQuadTriAddVerts",
  "tQuadTriNoNewVerts", "tRecombLaterals", "tTransfQuadTri", "tText2D",
  "tText3D", "tInterpolationScheme", "tTime", "tCombine", "tBSpline",
  "tBezier", "tNurbs", "tNurbsOrder", "tNurbsKnots", "tColor",
  "tColorTable", "tFor", "tIn", "tEndFor", "tIf", "tElseIf", "tElse",
  "tEndIf", "tExit", "tAbort", "tField", "tReturn", "tCall", "tSlide",
  "tMacro", "tShow", "tHide", "tGetValue", "tGetStringValue", "tGetEnv",
  "tGetString", "tGetNumber", "tUnique", "tHomology", "tCohomology",
  "tBetti", "tExists", "tFileExists", "tGetForced", "tGetForcedStr",
  "tGMSH_MAJOR_VERSION", "tGMSH_MINOR_VERSION", "tGMSH_PATCH_VERSION",
  "tGmshExecutableName", "tSetPartition", "tNameToString", "tStringToName",
  "tAFFECTDIVIDE", "tAFFECTTIMES", "tAFFECTMINUS", "tAFFECTPLUS", "'?'",
  "tOR", "tAND", "tNOTEQUAL", "tEQUAL", "'<'", "'>'", "tGREATERGREATER",
  "tLESSLESS", "tGREATEROREQUAL", "tLESSOREQUAL", "'+'", "'-'", "'*'",
  "'/'", "'%'", "'|'", "'&'", "'!'", "UNARYPREC", "tMINUSMINUS",
  "tPLUSPLUS", "'^'", "'('", "')'", "'['", "']'", "'{'", "'}'", "'.'",
  "'#'", "'~'", "','", "$accept", "All", "GeoFormatItems", "GeoFormatItem",
  "SendToFile", "Printf", "View", "Views", "ElementCoords",
  "ElementValues", "Element", "@1", "@2", "Text2DValues", "Text2D", "@3",
  "Text3DValues", "Text3D", "@4", "InterpolationMatrix", "Time", "@5",
  "NumericAffectation", "NumericIncrement", "LP", "RP", "Affectation",
  "Comma", "DefineConstants", "@6", "@7", "@8", "UndefineConstants",
  "Enumeration", "FloatParameterOptionsOrNone",
  "FloatParameterOptionsOrNone_NoComma", "FloatParameterOptions",
  "FloatParameterOption", "CharParameterOptionsOrNone",
  "CharParameterOptions", "CharParameterOption",
  "PhysicalId_per_dim_entity", "InSphereCenter", "CircleOptions", "Shape",
  "@9", "GeoEntity", "GeoEntity123", "GeoEntity12", "GeoEntity02",
  "Transform", "MultipleShape", "ListOfShapes", "LevelSet", "Delete",
  "Colorify", "SetPartition", "Visibility", "Command", "Slide", "Loop",
  "Extrude", "@10", "@11", "@12", "@13", "ExtrudeParameters",
  "ExtrudeParameter", "BooleanOperator", "BooleanOption", "Boolean",
  "BooleanShape", "TransfiniteType", "TransfiniteArrangement",
  "TransfiniteCorners", "RecombineAngle", "PeriodicTransform",
  "Constraints", "Coherence", "HomologyCommand", "Homology", "FExpr",
  "FExpr_Single", "@14", "GetForced_Default", "GetForcedStr_Default",
  "DefineStruct", "@15", "Struct_FullName", "tSTRING_Member", "Append",
  "AppendOrNot", "VExpr", "VExpr_Single", "RecursiveListOfListOfDouble",
  "ListOfDouble", "ListOfDoubleOrAll", "FExpr_Multi",
  "RecursiveListOfDouble", "ColorExpr", "ListOfColor",
  "RecursiveListOfColor", "StringExprVar", "StringExpr", "@16",
  "NameStruct_Arg", "Str_BracedRecursiveListOfStringExprVar",
  "BracedOrNotRecursiveListOfStringExprVar",
  "BracedRecursiveListOfStringExprVar", "RecursiveListOfStringExprVar",
  "MultiStringExprVar", "StringIndex", "String__Index", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,   432,   433,   434,
     435,   436,   437,   438,   439,   440,   441,   442,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,    63,   471,   472,   473,
     474,    60,    62,   475,   476,   477,   478,    43,    45,    42,
      47,    37,   124,    38,    33,   479,   480,   481,    94,    40,
      41,    91,    93,   123,   125,    46,    35,   126,    44
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   249,   250,   250,   251,   251,   252,   252,   252,   252,
     252,   252,   252,   252,   252,   252,   252,   252,   252,   252,
     252,   252,   252,   252,   252,   252,   253,   253,   254,   254,
     254,   254,   254,   254,   255,   255,   255,   255,   256,   256,
     256,   256,   256,   256,   257,   257,   258,   258,   260,   261,
     259,   262,   262,   264,   263,   265,   265,   267,   266,   268,
     268,   270,   269,   271,   271,   271,   271,   271,   272,   272,
     273,   273,   274,   274,   275,   275,   275,   275,   275,   275,
     275,   275,   275,   275,   275,   275,   275,   275,   275,   275,
     275,   275,   275,   275,   275,   275,   275,   275,   275,   275,
     275,   275,   275,   275,   275,   275,   275,   275,   275,   276,
     276,   277,   277,   277,   278,   277,   279,   277,   277,   280,
     277,   281,   281,   282,   282,   282,   283,   283,   284,   284,
     285,   285,   286,   286,   286,   286,   286,   287,   287,   288,
     288,   289,   289,   289,   289,   289,   290,   290,   290,   291,
     291,   292,   292,   293,   293,   293,   293,   293,   293,   293,
     293,   293,   293,   293,   293,   293,   293,   293,   293,   293,
     293,   293,   293,   293,   293,   293,   293,   293,   293,   293,
     293,   293,   293,   293,   293,   294,   293,   295,   295,   295,
     295,   295,   296,   296,   296,   296,   297,   297,   297,   298,
     298,   298,   298,   299,   299,   299,   299,   299,   299,   299,
     299,   300,   300,   301,   301,   301,   302,   302,   302,   302,
     302,   302,   302,   302,   302,   302,   302,   302,   303,   303,
     303,   303,   303,   303,   303,   304,   304,   305,   306,   306,
     306,   306,   306,   306,   307,   307,   307,   307,   307,   307,
     307,   307,   307,   307,   307,   307,   307,   307,   307,   307,
     307,   307,   307,   308,   309,   309,   309,   309,   309,   309,
     309,   309,   309,   309,   309,   309,   309,   309,   310,   310,
     310,   311,   310,   312,   310,   313,   310,   314,   310,   310,
     310,   310,   310,   315,   315,   316,   316,   316,   316,   316,
     316,   316,   316,   316,   316,   316,   317,   317,   317,   317,
     317,   318,   318,   318,   318,   318,   319,   319,   320,   321,
     321,   322,   322,   323,   323,   324,   324,   325,   325,   326,
     326,   326,   326,   326,   326,   326,   326,   326,   326,   326,
     326,   326,   326,   326,   326,   326,   326,   326,   326,   326,
     327,   327,   327,   328,   328,   328,   329,   329,   329,   329,
     330,   330,   330,   330,   330,   330,   330,   330,   330,   330,
     330,   330,   330,   330,   330,   330,   330,   330,   330,   330,
     330,   330,   330,   330,   330,   330,   330,   330,   330,   330,
     330,   330,   330,   330,   330,   330,   330,   330,   330,   330,
     330,   330,   330,   330,   330,   330,   330,   331,   331,   331,
     331,   331,   331,   331,   331,   331,   331,   331,   332,   331,
     331,   331,   331,   331,   331,   331,   331,   331,   331,   331,
     331,   331,   331,   331,   331,   331,   331,   331,   331,   331,
     331,   331,   331,   331,   331,   331,   331,   331,   331,   331,
     331,   331,   331,   333,   333,   334,   334,   336,   335,   337,
     337,   338,   339,   339,   340,   340,   341,   341,   341,   341,
     341,   342,   342,   342,   342,   343,   343,   344,   344,   344,
     344,   344,   344,   345,   345,   346,   346,   346,   346,   346,
     346,   346,   346,   346,   346,   346,   346,   346,   346,   346,
     346,   346,   346,   346,   346,   346,   346,   346,   346,   346,
     347,   347,   347,   347,   348,   348,   348,   348,   349,   349,
     350,   350,   351,   351,   351,   351,   351,   351,   351,   351,
     351,   351,   351,   351,   351,   352,   352,   352,   352,   352,
     352,   352,   352,   352,   352,   352,   352,   352,   352,   352,
     352,   352,   352,   352,   352,   352,   352,   352,   352,   352,
     352,   352,   352,   352,   353,   352,   352,   354,   354,   355,
     356,   356,   357,   358,   358,   358,   358,   359,   359,   359,
     360,   360,   360,   361,   361,   361
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     0,     2,     1,     1,     1,     5,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     5,     5,
       7,     7,     7,     9,     6,     6,     6,     8,     0,     2,
       2,     2,     2,     2,     1,     3,     1,     3,     0,     0,
      10,     1,     3,     0,    13,     1,     3,     0,    15,     8,
      14,     0,     6,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     5,     5,     2,     7,     7,     4,
       3,     6,     9,     7,     6,     7,     6,     4,     8,     9,
       9,     6,     9,     6,     9,     5,     8,     8,    11,     6,
       9,     5,     7,     9,     9,    11,     7,     9,     9,     0,
       1,     0,     3,     5,     0,     9,     0,    11,     5,     0,
       9,     0,     3,     3,     5,     5,     0,     2,     0,     1,
       1,     3,     2,     1,     4,     2,     2,     0,     2,     1,
       3,     2,     2,     2,     2,     2,     1,     1,     3,     0,
       5,     0,     2,     7,     7,     7,     8,     8,     7,     7,
      11,     7,     8,     8,     8,     9,     3,     4,    10,     7,
       7,     7,     7,     7,     7,     7,     7,     7,     7,     8,
       7,     7,     8,     8,    12,     0,     9,     1,     1,     1,
       1,     4,     1,     1,     1,     4,     1,     1,     4,     1,
       1,     1,     4,     5,    11,     5,     9,     9,     4,     9,
       9,     1,     1,     0,     2,     6,     8,    10,    14,    16,
      12,    14,    14,    14,    14,     8,     8,     6,     4,     5,
       6,     6,     3,     4,     3,     5,     6,     5,     3,     3,
       4,     5,     4,     5,     3,     5,     7,     7,     3,     7,
       3,     2,     2,     2,     2,     2,    15,     2,     2,     2,
       2,     2,    16,    11,     6,     8,     8,    10,     1,     2,
       2,     1,     3,     3,     4,     4,     1,     1,     5,    11,
      13,     0,     7,     0,    13,     0,    15,     0,     6,     9,
       2,     3,    10,     1,     2,     5,     7,     2,     2,     3,
       2,     3,     2,     3,     9,     6,     1,     1,     1,     1,
       1,     0,     2,     3,     3,     4,     9,     4,    14,     0,
       3,     0,     1,     0,     2,     0,     2,     0,     2,     6,
       7,     6,     5,     3,     8,     5,     4,     6,    11,    11,
      18,    18,    12,    12,    12,    10,     4,     4,     4,     4,
       2,     3,     6,     1,     1,     1,     2,     5,     7,    10,
       1,     3,     2,     2,     2,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     5,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     6,     4,     4,     4,     4,     4,
       4,     4,     4,     6,     6,     6,     4,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     6,
       1,     4,     6,     1,     4,     4,     4,     6,     5,     7,
       4,     4,     6,     4,     3,     2,     5,     5,     3,     5,
       6,     8,     6,     8,     6,     4,     7,     6,     6,     6,
       4,     6,     4,     0,     2,     0,     2,     0,     7,     1,
       3,     1,     1,     2,     0,     3,     1,     2,     2,     3,
       3,    11,     9,     7,     7,     1,     3,     1,     1,     2,
       3,     4,     5,     1,     1,     2,     3,     3,     5,     4,
       2,     3,    16,     1,     1,     1,     3,     5,     7,     4,
       4,     4,     6,     6,     8,     8,     4,    14,     4,     4,
       1,     1,     3,     3,     9,     7,     1,     5,     3,     6,
       1,     3,     1,     1,     4,     4,     3,     5,     6,     8,
       6,     5,     5,     5,     5,     1,     4,     1,     1,     1,
       1,     4,     6,     4,     6,     5,     7,     4,     4,     4,
       8,     4,     4,     4,     4,     8,     8,     6,     4,     6,
       4,     1,     4,     4,     0,     6,     4,     2,     4,     4,
       1,     1,     3,     1,     1,     3,     3,     3,     5,     7,
       5,     5,     8,     1,     1,     4
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     2,     3,     1,   583,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   187,     0,     0,   188,     0,     0,
     189,     0,   190,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   306,   307,   308,   309,
     310,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     268,     0,     0,   276,   277,     0,     0,     0,   271,     0,
       0,     0,     0,     0,   353,   354,   355,     0,     0,     5,
       6,     7,     8,    10,     0,    11,    24,    12,    13,    14,
      15,    23,    22,    21,    16,     0,    17,    18,    19,    20,
       0,    25,     0,   584,     0,   213,     0,     0,     0,     0,
       0,   255,     0,   257,   258,   253,   254,     0,   259,   260,
     111,   121,   583,   464,   459,    70,    71,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   261,     0,   199,   200,   201,     0,     0,     0,   407,
     408,   410,   411,   409,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   415,   416,   417,
       0,     0,   187,   188,   189,   190,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   412,   413,   414,     0,     0,
       0,     0,     0,     0,     0,   493,   494,     0,   495,   477,
     360,   420,   423,   290,   478,   459,     0,     0,     0,     0,
       0,     0,     0,     0,   187,   185,   192,   193,   194,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   466,     0,     0,   213,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   583,     0,     0,   213,     0,     0,   350,
       0,     0,     0,   196,   197,     0,     0,     0,     0,     0,
     484,     0,   483,     0,     0,     0,     0,     0,   583,     0,
       0,   516,     0,     0,     0,     0,   251,   252,     0,   535,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   537,     0,   561,   539,   540,     0,     0,
       0,     0,     0,     0,   538,     0,     0,     0,     0,   269,
     270,     0,   213,     0,   213,     0,     0,     0,   459,     0,
       0,     0,   213,   356,     0,     0,    76,     0,    63,     0,
       0,    67,    66,    65,    64,    69,    68,    70,    71,     0,
       0,     0,     0,     0,     0,   522,   459,     0,   212,     0,
     211,     0,   166,     0,     0,   522,   523,     0,     0,   573,
       0,   574,   523,   109,   109,     0,   457,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   510,   511,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    70,    71,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   363,     0,   362,   485,   364,
       0,   479,     0,     0,   459,   490,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    70,    71,
       0,   435,     0,     0,     0,     0,     0,     0,   291,     0,
     323,   323,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   213,     0,   213,   213,     0,   468,   467,     0,     0,
       0,     0,   213,   213,     0,     0,     0,     0,   287,     0,
     213,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   325,     0,     0,     0,     0,     0,   234,     0,     0,
     232,   351,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   333,   250,     0,     0,     0,     0,     0,   213,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   273,   272,     0,   238,     0,
     239,     0,     0,   362,     0,   213,     0,     0,     0,     0,
       0,     0,     0,   311,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    80,
      72,    73,     0,     0,   248,    38,   244,     0,     0,     0,
       0,     0,   208,     0,     0,     0,   214,     0,     0,   167,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   110,     0,     0,     0,   462,
       0,     0,   460,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     317,     0,     0,     0,   191,     0,     0,     0,     0,     0,
       0,   347,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     459,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   418,   434,     0,     0,   491,     0,     0,     0,     0,
       0,   453,     0,   361,   480,     0,     0,     0,   487,     0,
     380,   379,   378,   377,   373,   374,   381,   382,   376,   375,
     366,   365,     0,   367,   486,   368,   371,   369,   370,   372,
     460,     0,     0,   461,   438,     0,   496,     0,     0,     0,
       0,     0,     0,     0,   321,     0,     0,     0,     0,   349,
       0,     0,     0,     0,   348,     0,   213,     0,     0,     0,
       0,     0,   470,   469,     0,     0,     0,     0,     0,     0,
       0,   281,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   336,     0,     0,   233,     0,     0,
     228,     0,     0,     0,     0,   346,     0,     0,     0,   361,
       0,     0,     0,     0,     0,     0,     0,     0,   274,   275,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   564,     0,
       0,     0,   455,     0,     0,   240,   242,     0,   367,     0,
     460,   438,   585,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    87,     0,     0,     0,     0,     0,   361,     0,
      63,     0,     0,     0,     0,    79,     0,    63,    64,     0,
       0,   460,     0,     0,   438,     0,     0,     0,     0,     0,
     580,    28,    26,    27,     0,     0,     0,     0,     0,   461,
     526,    29,     0,     0,   245,   575,   576,     0,   577,   526,
      74,   112,    75,   122,   463,   465,   128,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     512,   513,   202,     9,   384,   385,   386,   387,   388,   389,
     390,   391,   392,   406,   393,     0,   395,   396,   397,   398,
     399,   509,   400,   401,   402,     0,     0,     0,   501,   500,
     499,     0,     0,     0,   506,     0,   450,     0,     0,     0,
     452,   126,   433,   489,     0,     0,   421,   508,   426,     0,
     430,     0,     0,     0,   481,     0,     0,   431,     0,     0,
       0,     0,     0,   425,   424,   445,    70,    71,     0,     0,
       0,     0,     0,     0,   361,   319,   324,   322,     0,   332,
       0,   146,   147,   195,   361,     0,     0,     0,     0,   229,
       0,   241,   243,     0,     0,     0,   203,   205,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   293,
       0,   278,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   326,   335,     0,     0,     0,     0,     0,
       0,     0,   198,     0,     0,     0,     0,     0,     0,     0,
       0,   235,     0,     0,     0,     0,   551,     0,   558,   547,
     548,   549,     0,   563,   562,     0,     0,   552,   553,   554,
     560,   567,   566,     0,   137,     0,   541,     0,   543,     0,
       0,     0,   536,     0,   237,     0,     0,     0,     0,     0,
       0,     0,   312,     0,     0,     0,   357,     0,   581,     0,
       0,     0,     0,   101,    63,     0,     0,     0,     0,     0,
       0,     0,    95,     0,     0,     0,     0,     0,     0,     0,
       0,    48,     0,     0,     0,    61,     0,    39,    40,    41,
      42,    43,     0,   425,   424,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   525,   524,     0,     0,     0,     0,
       0,     0,     0,   133,     0,   129,   130,     0,     0,     0,
     151,   151,     0,     0,     0,     0,     0,   149,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   329,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   453,   454,   428,     0,
       0,     0,   488,   383,   482,   439,   437,     0,   436,     0,
       0,   497,     0,     0,     0,     0,     0,     0,     0,     0,
     331,     0,     0,     0,     0,     0,     0,     0,   236,     0,
       0,     0,     0,     0,     0,     0,   298,     0,     0,   297,
       0,   300,     0,   302,     0,   288,   294,     0,     0,     0,
     227,     0,     0,     0,     0,     0,     0,     0,     0,   337,
       0,   231,   230,   352,     0,     0,    35,    36,     0,     0,
       0,     0,   517,     0,     0,     0,   264,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   455,   456,
     545,     0,   439,     0,     0,   213,   313,     0,   314,   213,
       0,     0,   531,   532,   533,   534,     0,    86,     0,     0,
       0,     0,    84,    91,    93,     0,   520,     0,    99,     0,
       0,     0,     0,    81,     0,     0,     0,     0,     0,    34,
     439,     0,     0,     0,     0,     0,     0,     0,     0,    30,
      31,     0,   527,     0,     0,    32,     0,   527,   578,     0,
     113,   118,     0,     0,     0,   132,   135,   136,   458,     0,
      77,    78,   153,     0,     0,     0,     0,   154,   169,   170,
       0,     0,     0,   155,   180,   171,   175,   176,   172,   173,
     174,   161,     0,     0,   394,   403,   404,   405,   502,     0,
       0,     0,   448,   449,   451,   127,   419,   447,   422,   427,
       0,   181,   432,     0,    70,    71,     0,   444,   440,   442,
     503,   177,     0,     0,   149,     0,     0,   330,     0,   148,
       0,     0,     0,     0,   249,     0,     0,     0,     0,   213,
     213,     0,     0,   299,   477,     0,     0,   301,   303,     0,
       0,   282,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   178,     0,     0,     0,     0,   158,   159,     0,
       0,     0,     0,   102,   106,     0,   559,     0,     0,   557,
       0,   568,     0,     0,   138,   139,   565,   542,   544,     0,
       0,     0,     0,     0,     0,   311,   315,   311,     0,   358,
      85,    63,     0,     0,     0,     0,    83,     0,   518,     0,
       0,     0,     0,     0,     0,   571,   570,     0,     0,     0,
       0,     0,   475,     0,     0,   444,   246,   440,   247,     0,
       0,   215,     0,     0,   530,   528,     0,     0,   114,   119,
       0,     0,     0,   510,   511,   131,   152,   156,   157,   162,
     179,     0,   164,     0,     0,     0,     0,     0,   429,     0,
       0,     0,   498,   446,     0,   163,     0,   182,   320,     0,
       0,   183,     0,     0,     0,     0,     0,     0,   474,   473,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     226,   225,     0,     0,     0,     0,     0,     0,     0,     0,
     216,     0,     0,   334,    37,     0,   515,     0,     0,   266,
     265,     0,     0,     0,     0,     0,     0,   141,   142,   145,
     144,   143,     0,   546,     0,   582,     0,     0,     0,     0,
       0,     0,    96,     0,     0,    97,   521,     0,     0,     0,
      88,     0,     0,     0,    44,     0,     0,     0,     0,     0,
      46,     0,    33,     0,     0,   579,   126,   137,     0,     0,
     134,     0,     0,     0,     0,     0,     0,   504,   505,     0,
       0,   441,   443,     0,   165,   186,     0,   327,   327,     0,
     107,   108,   213,     0,   206,   207,   289,     0,   295,     0,
       0,   213,     0,     0,     0,     0,     0,     0,     0,     0,
     210,   209,     0,     0,     0,     0,   103,   104,   550,   556,
     555,   140,     0,     0,     0,   316,     0,    92,    94,     0,
     100,     0,    82,   572,    89,    90,    49,     0,     0,     0,
       0,   476,     0,     0,   441,   529,     0,     0,     0,   116,
     569,     0,   123,     0,     0,   168,     0,     0,     0,   292,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     472,     0,   305,     0,     0,   283,     0,   217,     0,     0,
       0,     0,     0,     0,     0,   514,   267,     0,     0,   345,
     213,   359,     0,   519,     0,    45,     0,     0,     0,    62,
      47,     0,   115,   120,   126,     0,     0,   150,     0,     0,
       0,     0,     0,     0,   328,   338,     0,     0,   339,     0,
     204,     0,   296,     0,   279,     0,   213,     0,     0,     0,
       0,     0,     0,   160,   105,   263,   311,    98,     0,     0,
       0,     0,     0,     0,   124,   125,     0,     0,     0,   184,
       0,   342,     0,   343,   344,   471,     0,     0,   285,   220,
       0,     0,     0,     0,     0,     0,     0,     0,    53,     0,
      59,     0,     0,   117,     0,     0,     0,     0,     0,   304,
     284,   280,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   221,   222,   223,   224,     0,   218,   318,    50,     0,
      57,     0,   256,     0,   507,     0,     0,     0,   286,     0,
       0,    51,     0,     0,   262,     0,     0,     0,   219,     0,
       0,     0,     0,   492,     0,     0,    54,    52,     0,    55,
       0,   340,   341,     0,     0,    60,    58,    56
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,   109,   994,   110,   111,   980,  1763,  1769,
    1257,  1454,  1904,  2030,  1258,  2001,  2048,  1259,  2032,  1260,
    1261,  1458,   410,   551,   552,  1060,   112,   726,   433,  1776,
    1914,  1777,   434,  1662,  1322,  1284,  1285,  1286,  1415,  1604,
    1605,  1120,  1502,  1494,   706,   562,   254,   280,   326,   187,
     255,   419,   420,   116,   117,   118,   119,   120,   121,   122,
     123,   256,  1152,  1935,  1992,   879,  1148,  1149,   257,   957,
     258,   127,  1349,  1118,   854,   893,  1874,   128,   129,   130,
     131,   259,   260,  1081,  1093,  1211,   261,   731,   262,   844,
     730,   436,   577,   295,  1641,   332,   333,   264,   522,   340,
    1245,  1447,   429,   425,  1204,   936,  1487,  1634,  1635,   921,
     431,   133,   388
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -1741
static const yytype_int16 yypact[] =
{
   10092,    54,    40, 10243, -1741, -1741,  -172,    64,    -8,  -135,
    -123,    45,   137,   166,   211,   217,     6,   232,   251,   140,
     147,    24,   -59,   -59,    66,   167,   194,    59,   206,   225,
      62,   244,   249,   271,   298,   303,   337,   342,   357,   360,
     386,    17,   359,   398,   559,   304,   283,   407,  5348,   436,
     346,   580,   -49,    76,   530,   520,     9,   451,   598,   -90,
     452,  -160,  -160,   484,   377,    58, -1741, -1741, -1741, -1741,
   -1741,   462,    55,   614,   676,    15,    43,   689,   695,   449,
     730,   819,   834,  3787,   836,   623,   659,   660,    18,    65,
   -1741,   661,   663, -1741, -1741,   840,   857,   635, -1741, 10411,
     665, 10441,    19,    20, -1741, -1741, -1741,  9609,   664, -1741,
   -1741, -1741, -1741, -1741,   666, -1741, -1741, -1741, -1741, -1741,
   -1741, -1741, -1741, -1741, -1741,   231, -1741, -1741, -1741, -1741,
      46, -1741,   900,   684,  4635,   295,   667,   901,  9609,  3437,
    3437, -1741,  9609, -1741, -1741, -1741, -1741,  3437, -1741, -1741,
   -1741, -1741,   686,   669,   902, -1741, -1741,  1185,    24,  9609,
    9609,  9609,   673,  9609,  9609,  9609,   674,  9609,  9609,  9609,
    9609,  9609,  9609,  9609,  3437,  9609,  9609,  9609,  9609,  5585,
     698, -1741,  7481, -1741, -1741, -1741,   691,  3787,  3437, -1741,
   -1741, -1741, -1741, -1741,   -59,   -59,   -59,   -59,   -59,   -59,
     -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,
     -59,   -59,   -59,   -59,   -59,   -59,   -59,    81,   -59,   -59,
     -59,   -59,   -59,   699,   -59,   -59,   700, -1741, -1741, -1741,
     -59,   -59,   693, -1741, -1741, -1741,  5585,   821,   530,   702,
     -59,   -59,   703,   704,   705, -1741, -1741, -1741,  9609,  5822,
    9609,  9609,  6059,    24,    34, -1741, -1741,   706, -1741,  8067,
   -1741, -1741, -1741, -1741, -1741,    99,  9609,  7481,   707,   708,
    6296,  3787,  3787,  3787, -1741, -1741, -1741, -1741, -1741,   709,
    6533,   711,  8354,   941,  5585,   713,    18,   715,   716,  -160,
    -160,  -160,  9609,  9609,   -29, -1741,   238,  -160,  8431,   379,
     418,   714,   721,   722,   725,   726,   728,   729,  9609,  3787,
    3787,  3787,   731,    12,   944,   732, -1741,   963,   966, -1741,
     735,   738,   739, -1741, -1741,   740,  3787,   734,   746,   747,
   -1741,  9609, -1741,   968,   983,  9609,  9609,  9609,   256,  9609,
     751, -1741,   813,  9609,  9609,  9609, -1741, -1741,  9609, -1741,
     -59,   -59,   -59,   759,   770,   771,   -59,   -59,   -59,   -59,
     -59,   -59,   -59, -1741,   -59, -1741, -1741, -1741,   -59,   -59,
     772,   774,   -59,   775, -1741,   778,  1006,  1009,   780, -1741,
   -1741,  1010, -1741,  1028, -1741,   -59,  9609, 12587,   106,  3437,
    7481,  9609, -1741, -1741,  5585,  5585, -1741,   792,  1185,   579,
    1030, -1741, -1741, -1741, -1741, -1741, -1741,  9609,  9609,    31,
    5585,  1032,   510,  2267,   796,  1034,    37,   798, -1741,   799,
   10562,  9609, -1741,  2467,  -131, -1741,    72,  -102, 10525, -1741,
     -44, -1741,    73,  -198,  -187,   955, -1741,    24,   797,   800,
   13103, 13128, 13153,  9609, 13178, 13203, 13228,  9609, 13253, 13278,
   13303, 13328, 13353, 13378, 13403,   804, 13428, 13453, 13478,  9480,
    1039,  9609,  7481,  8302, -1741,     3,  9609,  1041,   825,  9609,
    9609,  9609,  9609,  9609,  9609,  9609,  9609,  9609,  9609,  9609,
    9609,  9609,  9609,  9609,  9609,  7481,  9609,  9609,  9609,  9609,
    9609,  9609,  7481,  7481,   823,  9609,  9609,  3437,  9609,  3437,
    5585,  3437,  3437,  3437,  9609,    60,  9609,  5585,  3787,  3437,
    3437,  7481,    24,  1185,    24,   830,  7481,   830, -1741,   830,
   13503, -1741,   458,   826,    98, -1741,  1008,  9609,  9609,  9609,
    9609,  9609,  9609,  9609,  9609,  9609,  9609,  9609,  9609,  9609,
    9609,  6770,  9609,  9609,  9609,  9609,  9609,    24,  9609,  9609,
    1066, -1741,   654, 13528,   459,  9609,  9609,  9609, -1741,  1070,
    1071,  1071,   841,  9609,  9609,  1067,  7481,  7481, 12615,   839,
    1075, -1741,   843, -1741, -1741,  -171, -1741, -1741, 10558, 10591,
    -160,  -160,   295,   295,  -154,  8431,  8431,  9609,  5889,  -115,
   -1741,  9609,  9609,  9609,  9609,  9609,  9609,  9609,  9609,  9609,
   13553,  1076,  1078,  1080,  9609,  1082,  9609, -1741,  9609,  6126,
   -1741, -1741,  7481,  7481,  7481,  9609,  1083,  9609,  9609,  9609,
   13578, -1741, -1741, 13603, 13628, 13653,   916, 10624, -1741,   848,
    8386, 13678, 13703, 12698,  3437,  3437,  3437,  3437,  3437,  3437,
    3437,  3437,  3437,  9609,  3437,  3437,  3437,  3437,     8,  1185,
    3437,  3437,  3437,    24,    24, -1741, -1741,  7481, -1741,  6363,
   -1741,  6600,  9609,   830,  9609, -1741,    24,  9609,  9609,  1066,
     851,   468, 13728, 10442,   854,   501,  9609,  1089,   853,   855,
     856,   858,  9609, 13753, 12725,   158,   852,  1095,  1097, -1741,
   -1741, -1741,  7481,   149, -1741, -1741, -1741,    24,  9609,  9609,
    1066,   863, -1741,   867,   -43,   520, -1741,   866, 11746, -1741,
      21,  7481,    24,  9609,  9609,  1106,  1124,  7481,  9609,  1125,
    3437,    24,  8668,  1106,  1126, -1741,    24,  1130,  3437,  9609,
     903,   904, -1741,  9609,  1185,  1134,  1137,  1139, 13778,  1140,
    1144,  1145, 13803,  1146,  1147,  1148,  1149,  1150,  1151,  1153,
   -1741,  1154,  1155,  1156, -1741,  9609, 13828,  7481,   922,  7481,
   11775, -1741,  1160, 12671, 12671, 12671, 12671, 12671, 12671, 12671,
   12671, 12671, 12671, 12671, 10657, 12671, 12671, 12671, 12671,   895,
     110, 12671, 12671, 12671, 10690, 10723, 10756,  8302,   927,   926,
      89,  7481, 10789, 10822,   110, 10855,   110,   923,   924,   928,
     -16, 14628, -1741,   110, 11804, -1741,   929,   -33,   110,   145,
     938,  -122,   503,  1172, -1741,  1106,   110,   937,  8623,  8699,
     697,   831,  1281,  1281,   453,   453,   453,   453,   453,   453,
     467,   467,  7481,   380, -1741,   380,   380,   830,   830,   830,
     936, 13853, 12752,   -45,   311,  7481, -1741,  1175,   940, 13878,
   13903, 13928,  9609,  5585,  1181,  1180,  8122, 11833, 13953, -1741,
     511,   514,  7481,   942, -1741,  6837, -1741,  7074,  7311,  -160,
    9609,  9609, -1741, -1741,   947,   948,  8431,  9249,  1059,   -36,
    -160,  9637, 13978, 11862, 14003, 14028, 14053, 14078, 14103, 14128,
   14153,  1187,  9609,  1189, -1741,  9609, 14178, -1741, 12779, 12806,
   -1741,   516,   517,   519, 11891, -1741, 12833, 12860, 10888, -1741,
    1191,  1192,  1193,   951,  9609,  9676,  9609,  9609, -1741, -1741,
      30,   176,   199,   176,   961,   965,   958,   110,   110,   960,
   10921,   110,   110,   110,   110,  9609,   110,  1194, -1741,   962,
     969,   236,   267,   971,   525, -1741, -1741, 12671,   380,  9767,
     970,   316,   964,  1040,  1209,  1072,  8752,   975,   977,  1217,
    5585, 11920, -1741,  9609,  9609,  9609,  9609,  2647,   186,    79,
    1185,  9609,  1218,  1221,    29, -1741,   527,  1182,  1183,  5585,
      22,   985, 14203, 12887,   481,  9609,  9609,  1001,  1003,  7481,
   -1741, -1741, -1741, -1741,  3437,   117,   998, 14228, 12914, -1741,
    1011, -1741,   172, 10954, -1741, -1741, -1741,  1004, -1741,  1012,
   -1741,    80, -1741, -1741, 14628, -1741,  1244, 12671,   110,  -160,
    5585,  5585,  1249,  5585,  5585,  5585,  1251,  5585,  5585,  5585,
    5585,  5585,  5585,  5585,  5585,  5585,  5585,  2815,  1253,  7481,
    8302, -1741, -1741, -1741, -1741, -1741, -1741, -1741, -1741, -1741,
   -1741, -1741, -1741, -1741, -1741,  9609, -1741, -1741, -1741, -1741,
   -1741, -1741, -1741, -1741, -1741,  9609,  9609,  9609, -1741, -1741,
   -1741,   528,  9609,  9609, -1741,  9609, -1741,  5585,  3437,  3437,
   -1741,  1014, -1741, -1741,  9609,  9609, -1741, -1741, -1741,  1106,
   -1741,  1106,  9609,  1023, -1741,  5585,   -59, -1741,  9609,  9609,
    9609,   533,  1106,   -45,   -68, -1741,  9609,  9609,   110,   538,
    5585,  7481,  1258,  1259,  1260,  1896, -1741, -1741,  1263, -1741,
    1031, 14628,  1024, -1741,  1267,  1268,  1271,   541,  1275, -1741,
    9858, -1741, -1741,  -106, 10987, 11020, -1741, -1741, 11949,   -61,
    1173,  1277,  8984,  1042,  1278,  1047,    28,    32,   296, -1741,
     -87, -1741,   -36,  1283,  1282,  1284,  1285,  1287,  1288,  1290,
    1292,  1293,  5585, 14628, -1741,  3388,  1060,  1296,  1298,  1299,
    1210,  1303, -1741,  1300,  1305,  9609,  5585,  5585,  5585,  1308,
   11053, -1741,  8939,  2323,  1309,  1311, -1741,  7481, -1741, -1741,
   -1741, -1741,  3437, -1741, -1741,  9609,  3437, -1741, -1741, -1741,
   -1741, 14628, -1741,  1074,  1068,  3437, -1741,  3437, -1741,  1106,
    3437,  1081, -1741,  1079, -1741,  1106,  9609,  9609,  1085,   530,
    1086,  9068, -1741,  3537,  1087,  5585, -1741,  1088, -1741, 11978,
   12007, 12036, 12065, -1741, -1741,  9609,  1320,    38,  9609,  1325,
    1327,  3845, -1741,  1328,    18,  1330,  1093,   110,   -59,   -59,
    1331, -1741,  1099,  1100,  1098, -1741,  1339, -1741, -1741, -1741,
   -1741, -1741,  1106,    -9,  2704,  9609, 12941, 14253,  9609,  9609,
     568,  1340,   133,  1106, -1741,  1102,  9609,  1343,  9609,  1106,
    9300,  7713,   110,  4099,  1111,  1108, -1741,  1348,  1351,   105,
    1235,  1235,  5585,  1354,  1355,  1356,  5585,  1186,  1358,  1360,
    1362,  1363,  1364,  1365,  1366,  1367,  1368, -1741,  1370,   569,
   12671, 12671, 12671, 12671,   110, 11086, 11119, 11152,  1141,   110,
     110,  1244,   110, 14278, 12671,  1142,  1129, 14628, -1741,  1377,
     110, 11185, 14628, 14628, -1741,   387, -1741,  1381, -1741, 14303,
   12968, -1741,   110,  1380,   570,  5585,  5585,  5585,  1384,  1385,
   -1741,   196,  9609,  5585,  1157,  1158,  1383,   733, -1741,  9609,
    9609,  9609,  1161,  1162,  1163,  1166, -1741,  4035,  5585, -1741,
    9609, -1741,  1386, -1741,  1388, -1741, -1741,  8431,   307,  4874,
   -1741,  1165,  1168,  1169,  1171,  1174,  1176,  7007,  1390, -1741,
    7481, -1741, -1741, -1741,  1177,  9609, -1741, -1741, 12995,  1391,
    1392,  1226, -1741,  9609,  9609,  9609, -1741,  1397,   773,   473,
    1167,  9015,  1170,  9609,    27,   110,  1184,   110,  1178, -1741,
   -1741,  1185,   423,  9609,  1179, -1741, -1741,  4137, -1741, -1741,
    1188,  1403, -1741, -1741, -1741, -1741,  4314, -1741,   190,  1190,
    1409,  4509, -1741, -1741, -1741,    18, -1741,   576, -1741,  9609,
     196,  1633,  3125, -1741,  1195,  9609,  9609,  5585,  1196, -1741,
     505,  1419,  1422, 14328,  1424,  1172, 14353, 14378,  1425, -1741,
   -1741,  3437,  1198,  1421, 14403, -1741, 11218,  1199, -1741,  4377,
   14628, -1741,  1426,   -59,  6059, -1741, -1741, -1741, -1741,  1244,
   -1741, -1741, -1741,  -160,  1434,  1435,  1437, -1741, -1741, -1741,
    1438,  1337,  1439, -1741, -1741, -1741, -1741, -1741, -1741, -1741,
   -1741, -1741,  1441,  1204, -1741, -1741, -1741, -1741, -1741,  9609,
    9609,  9609, -1741, -1741, -1741,  1108, -1741, -1741, -1741, -1741,
    1212, -1741, -1741,  9609,  9609,  9609,   110,   -45, -1741, -1741,
   -1741, -1741,  1207,  1447,  1186,  1449,  9609, -1741,  5585, 14628,
     556,  7481,  7481,  9609, -1741,  8122, 12094, 14428,  9333,   295,
     295,  9609,  9609, -1741,   301,  1208, 14453, -1741, -1741, 12123,
     -70, -1741,  1451,  1452,  5585,  -160,  -160,  -160,  -160,  -160,
    5111,  1453, -1741,   578,  9609,  4547,  1454, -1741, -1741,  5585,
    9896,   577, 14478, -1741, -1741,  7799, -1741,  3437,  9609, -1741,
    3437, 14628,  8036,  1185,  1213, -1741, -1741, -1741, -1741,  1222,
    1216,  9609,  9609, 12152,  9609, 10442, -1741, 10442,  5585, -1741,
   -1741,  1185,  9609,  1459,  1462,    29, -1741,  1461, -1741,    18,
   13022,  5585,  3437,  1463,   110, -1741,  1223,   110,  9609, 11251,
   11284,   583, -1741,  9609,  9609,   416, -1741,  1227, -1741,  1260,
    1267, -1741,  1466,  9609, -1741, -1741,  9609,  9377, -1741, -1741,
    1230,  3125,   586,  7418,  1467, -1741,   563, -1741, -1741, -1741,
   -1741,  1232, -1741,  1472,  5585, 12671, 12671, 11317, -1741, 11350,
   14503, 13049, -1741, -1741,  9609, -1741,  1473, -1741, 14628,  1474,
    1239, -1741,   588,   589, 12643,  4570,  1477,  1241, -1741, -1741,
    9609,  1234,  1243, 12181, 13076,  1479,  5585,  1481,  1247,  9609,
   -1741, -1741,   591,   -26,    -7,   131,   141,   169,  7244,   187,
   -1741,  1485, 12210, -1741, -1741,  1321, -1741,  9609,  9609, -1741,
   -1741,  7481,  4810,  1486,  1254, 12671,   110, 14628, -1741, -1741,
   -1741, -1741,    27, -1741,  1185, -1741, 12239,  1252,  1255,  1256,
    1489,  5047, -1741,  1490,  1492, -1741, -1741,  1270,  1510,   599,
   -1741,  1511,  1512,   192, 14628,  9609,  9609,  1279,  5585,   604,
   14628, 14528, -1741, 14553, 11383, -1741,  1014,  1068,  5585,   110,
   -1741,  9609,  1185,    24,  9609,  1517,   605, -1741, -1741,  9609,
    9609, -1741, -1741, 12268, -1741, -1741,  5585,   535,   554,  7481,
   -1741, -1741,   295, 10492, -1741, -1741, -1741,  1519, -1741,  1286,
    5585, -1741, 12297,  1521,  7481,  -160,  -160,  -160,  -160,  -160,
   -1741, -1741,  9609, 12326, 12355,   607, -1741, -1741, -1741, -1741,
   -1741, -1741,  1289,  1522,  1294, -1741,  1525, -1741, -1741,    18,
   -1741,  1357, -1741, -1741, -1741, -1741, -1741,  9609, 11416, 11449,
    5585, -1741,  1529,  9609,  1295, -1741,  9609,  1297,  1306, -1741,
   -1741,  7745, -1741,  1301, 12384, -1741,  1304, 11482, 11515, -1741,
     610,  1310,  -160,  5585,  1530,  1313,  -160,  1533,   612,  1307,
   -1741,  9609, -1741,  1537,  1415,  9897,  1314, -1741,   613,   210,
     221,   227,   308,   321,  5284, -1741, -1741,  1548,  1557, -1741,
   -1741, -1741,  1558, -1741,  1322, 14628,  9609,  9609,   621, -1741,
   14628, 11548, -1741, -1741,  1014,  1185,  1326, -1741,  9609,  9609,
    9609,  1561,  -160,   121, -1741, -1741,  -160,   126, -1741,  1562,
   -1741, 12413, -1741,  9609, -1741,   -36, -1741,  1563,  7481,  7481,
    7481,  7481,  7244, -1741, -1741, -1741, 10442, -1741,  9609, 14578,
   11581,    52,  9609,  1329, -1741, -1741, 11614, 11647, 11680, -1741,
     326, -1741,   343, -1741, -1741, -1741,  5521,   331,  9962, -1741,
     624,   626,   629,   631,   350,   634,  1332,   637, -1741,  9609,
   -1741,  5585, 12442, -1741,  9609,  9609,  9609,  -160,  -160, -1741,
   -1741, -1741,   -36,  1564,  1568,  1569,  1572,  7481,  1574,  1575,
    1576,  1341, 14603,   639,  1577, 12471, 12671, 11713,   367,   375,
     412, -1741, -1741, -1741, -1741,   640, -1741, -1741, -1741,  3437,
   -1741,  1342, -1741,  1581, -1741,  9609,  9609,  9609, -1741,  1582,
     642, -1741,  1346,  5585, -1741, 12500, 12529, 12558, -1741,  1585,
    3437,  3437,   645, -1741,  1586,  1587, -1741, -1741,   647, -1741,
    1589, -1741, -1741,  1590,  3437, -1741, -1741, -1741
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1741, -1741, -1741, -1741,   327, -1741, -1741, -1741, -1741,  -350,
   -1741, -1741, -1741, -1741, -1741, -1741, -1741, -1741, -1741, -1741,
   -1741, -1741,  -672,  -124,  2864,  2643, -1741,  1197, -1741, -1741,
   -1741, -1741, -1741, -1741, -1740, -1741,   279,   112,  -175, -1741,
    -138, -1741,    61,   315,  1604, -1741,    -1,   905, -1741, -1741,
       0,  -575,  -287, -1741, -1741, -1741, -1741, -1741, -1741, -1741,
   -1741,  1605, -1741, -1741, -1741, -1741, -1151, -1139,  1606, -1600,
    1608, -1741, -1741, -1741,  1051, -1741,  -180, -1741, -1741, -1741,
   -1741,  1747, -1741, -1741,   291,   201,  1617, -1741,     2,  -505,
   -1741, -1741,    86, -1741, -1560,   -28,  -181,  1915,   710,  -281,
      -4, -1741,    91,   -69, -1741, -1741,    23,   171, -1559,  -143,
     907, -1741,    -3
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -531
static const yytype_int16 yytable[] =
{
     134,  1378,   114,   115,   430,   572,   467,   874,   875,  1376,
     411,   588,   152,   971,  1712,  1747,   605,  1748,   154,   313,
     263,   979,   338,   153,   381,   383,  1251,   991,   152,   609,
     376,  1602,   380,   152,  1371,   685,  1857,  1184,  1373,   525,
       5,   152,  1438,  1740,   724,   265,   697,   318,   269,   319,
     725,   141,   393,   275,   269,   727,   580,   581,  1980,   285,
       4,   725,   300,   162,   152,   415,   166,   290,   291,   342,
     270,   135,   317,   580,   581,   136,   987,   869,   137,   292,
     265,   712,   721,   293,   286,   341,  1234,  1281,   438,   138,
     559,   560,   561,  1141,   876,   659,   377,   661,   547,   314,
     287,   288,  1779,   281,   139,   673,   282,   437,   547,   710,
    1142,  1492,   580,   581,  1786,   666,   140,   711,  1143,  1144,
    1145,   580,   581,  1091,  1146,  1147,  1092,  1961,   601,   602,
     603,   416,  1963,   880,   320,   418,   426,   426,   716,  1470,
     580,   581,  1359,   143,   432,   616,   717,   294,   296,   301,
     299,   460,   309,   302,   310,   439,   977,   580,   581,   303,
     304,  1377,   305,   306,   951,   970,   580,   581,   405,   406,
     271,   426,   144,   272,  1953,   273,   265,  1337,  1709,   265,
     155,   307,   156,  1363,   265,   426,  1252,  1253,  1254,  1255,
    1372,   405,   406,  1234,  1374,   984,   719,  1621,   580,   581,
     315,   580,   581,  1234,   720,   686,   687,   690,   263,   691,
    1000,   526,  1439,  1440,   582,  1085,  1603,   145,  1009,   108,
     580,   581,  1814,   146,  1080,   414,   108,   405,   406,   108,
     424,   427,   720,   265,  -525,   108,  1870,   508,   148,  1376,
     108,  1815,   558,   992,   993,   147,   265,   758,   108,   265,
     524,   759,   565,   606,   935,   523,   570,   149,   316,   136,
     178,   339,   382,   384,   265,   455,  1256,   265,   265,   265,
     265,   108,  1244,   405,   406,  1185,   698,   265,   699,   468,
    -523,   265,   700,   341,   865,   394,   867,   868,   142,   395,
    1908,   401,   402,   403,   404,  1981,  1235,  1238,   163,   417,
     690,   167,   691,   881,   343,   159,   265,   265,   265,   527,
    1096,   713,   722,   714,   714,   405,   406,   715,   723,   155,
     492,   156,   493,   265,  1237,   405,   406,   805,   548,   677,
     549,  1070,   580,   581,   550,   405,   406,   155,   548,   156,
     549,   915,   405,   406,   550,   667,  1976,   668,   580,   581,
     690,   669,   691,   580,   581,   992,   993,  1272,   580,   581,
     800,   401,   402,   403,   978,   759,   674,   675,   580,   581,
     401,   402,   403,   404,   183,   575,   576,   184,   949,  1816,
     185,   150,   688,   584,   589,  1088,   426,   265,   151,  1817,
    1089,   265,   265,   186,   405,   406,   580,   581,   401,   402,
     403,   404,   401,   402,   403,   404,   160,   265,   401,   402,
     403,   404,  1277,   701,   580,   581,   690,  1818,   691,   707,
     759,  2003,   405,   406,   720,  1141,   405,   406,    60,    61,
      62,    63,  1846,   161,   732,  1819,  1141,   580,   581,   690,
    1847,   691,  1142,    74,   810,   164,    77,  1187,   580,   581,
    1143,  1144,  1145,  1142,   580,   581,  1146,  1147,  1938,   265,
    1141,  1143,  1144,  1145,   165,   580,   581,  1146,  1147,  1939,
     391,   179,   797,  2042,   392,  1940,   690,  1142,   691,   558,
     670,   583,   265,   168,  1207,  1143,  1144,  1145,   169,   265,
     790,  1146,  1147,   923,   426,   180,   426,   265,   426,   426,
     432,   626,   803,   136,   265,   265,   426,   426,   265,   154,
     170,   154,  1209,   265,   809,  1210,   811,   528,   529,   530,
     531,   532,   533,   534,   535,   536,   537,   538,   539,   540,
     541,   542,   543,   544,   545,   580,   581,   171,   265,   546,
    1375,  1141,   172,   323,   840,  1705,   324,   182,   580,   581,
    1106,  1571,  1107,   580,   581,  1216,  1941,  1217,  1142,   325,
    1690,   972,  1691,   265,   265,   181,  1143,  1144,  1145,  1942,
     580,   581,  1146,  1147,  1987,  1990,   173,   580,   581,  1130,
     938,   174,   418,   418,  1325,  1728,  1326,   707,   794,   267,
     796,  1988,   798,   799,   580,   581,   175,  1335,  1997,   176,
     806,   807,   580,   581,   290,   291,   580,   581,   707,   265,
     265,   265,   544,   545,   276,  2026,   292,   277,   546,   278,
     298,   274,   590,  2027,   233,   177,  1534,   234,  1535,   235,
     279,   432,   426,   432,   426,   426,   426,   426,   426,   426,
      41,   426,   426,   426,   426,   937,   188,   426,   426,   426,
     154,   943,   405,   406,   265,   942,  2028,   591,   707,  -530,
     707,   592,  1611,   950,  1612,  1018,   872,   873,  1871,  1872,
     678,   576,   707,   679,  1873,   266,   680,   268,   681,  1548,
     539,   540,   664,   542,   543,   544,   545,  1875,  1876,   265,
     283,   546,   284,  1873,   981,   289,   664,   542,   543,   544,
     545,   308,   814,   848,  1418,   546,   759,   759,   265,   996,
    1422,   311,   953,   690,   265,   691,   759,   432,  1007,  1105,
    1265,   759,  1217,  1011,  -526,   426,   922,   297,   924,   925,
     926,   927,   928,   929,   327,   931,   932,   933,   934,  1554,
    1555,   939,   940,   941,  1644,   959,  1612,  1094,  -527,   960,
     690,   759,   691,   692,   265,  1125,   265,  1460,  1126,   759,
    1169,  1170,   759,  1171,   759,   759,  1622,   759,  1472,  1213,
     312,  1247,  1314,   759,  1477,   759,   759,  1334,  1631,  1594,
    1595,   759,  1342,   321,  1967,  1356,   759,  1122,   265,   759,
     580,   581,   322,   528,   529,   530,   531,   532,   533,   534,
     535,   536,   537,   538,   539,   540,   664,   542,   543,   544,
     545,  1005,  1468,  1513,  1542,   546,   759,   759,   759,  1013,
    1628,  1729,  1721,   328,  1629,  1116,   759,  1767,  1376,   265,
    1780,  1768,  1797,  1798,  1781,  1813,   759,   759,   329,  1768,
     334,  2010,   265,  1843,  1236,  1239,   346,   720,  1852,  1866,
     265,  1897,  1853,  1768,  1921,   759,  1929,  1937,  1768,   265,
     759,   759,   335,   347,   707,  1951,   707,   707,  1993,  1768,
    1994,  1376,   759,  1995,   759,  1996,   348,   759,  1998,   759,
     707,  2000,   759,  2021,  2029,  1853,  2039,  1768,   759,  2050,
    2040,  2053,   465,  1768,   690,  2054,   691,   845,   336,   337,
     344,  1240,   345,   527,   378,   389,   396,   422,   435,   390,
     421,   437,   443,   447,   707,   530,   531,   532,   533,   534,
     535,   536,   537,   538,   539,   540,   664,   542,   543,   544,
     545,   397,  1227,   136,   466,   546,   506,   461,   500,   503,
     507,   509,   512,   513,   514,   569,   555,   556,   707,   392,
     607,  1250,   563,   593,   566,  1133,   571,   265,   573,   574,
     594,   595,  1139,  1446,   596,   597,  1150,   598,   599,   610,
     604,  1246,   611,   608,   621,   617,   265,   554,   612,  1336,
    1338,   613,   614,   615,  1701,  1702,   265,   618,   619,   622,
     629,   426,  1290,  1291,   628,  1293,  1294,  1295,   637,  1297,
    1298,  1299,  1300,  1301,  1302,  1303,  1304,  1305,  1306,   638,
     639,   650,   655,   651,   653,   656,   658,   265,   265,   654,
     265,   265,   265,   657,   265,   265,   265,   265,   265,   265,
     265,   265,   265,   265,   660,   676,   265,   682,   689,   695,
     696,   135,   729,   702,   750,   733,   755,   761,   734,  1318,
     531,   532,   533,   534,   535,   536,   537,   538,   539,   540,
     664,   542,   543,   544,   545,   762,   791,  1329,   546,   546,
     843,   815,   817,   859,   265,   426,   426,   852,   853,   863,
     856,   864,  1343,   892,   894,  1271,   866,   895,   897,   905,
     913,   916,   265,   952,   958,   962,   963,   973,   964,   965,
     671,   966,   974,   975,   985,  1289,   986,   265,   265,   989,
     999,   528,   529,   530,   531,   532,   533,   534,   535,   536,
     537,   538,   539,   540,   757,   542,   543,   544,   545,   707,
    1001,  1004,  1010,   546,  1388,   690,  1012,   691,  1615,  1336,
    1338,  1019,  1617,  1015,  1020,  1016,  1021,  1023,  1399,  1400,
    1401,  1024,  1025,  1027,  1028,  1029,  1030,  1031,  1032,   265,
    1033,  1034,  1035,  1036,  1627,  1039,  1043,  1068,  1069,  1319,
    1320,  1077,  1078,   265,   265,   265,  1079,  1084,  1090,  1095,
    1098,  1102,  1110,  1111,   265,  1117,  1119,  1128,  1140,   426,
     349,  1136,  1137,   426,  1162,  1164,  1179,  1430,  1176,  1177,
    1178,  1190,   426,  1203,   426,  1191,  1192,   426,  1195,  1206,
    1205,  1218,  1481,  1212,  1486,  1215,  1220,  1219,  1424,  1224,
    1225,  1221,   265,  1226,  1242,  1243,   812,  1879,  1248,  1249,
    1262,   350,   351,   352,   353,   354,   355,   356,   357,   358,
    1268,   341,  1269,  1273,   359,   360,   361,   362,  1283,  1279,
    1276,  1280,   363,   364,   365,  1485,  1292,   366,  1296,   367,
    1308,   426,  1321,  1328,  1496,  1345,  1346,  1347,  1500,  1350,
     368,  1351,  1352,   369,  1353,  1354,   860,   861,  1355,  1357,
     265,  1365,  1364,  1410,  1369,  1368,  1370,  1412,  1380,   265,
    1379,  1381,  1382,   265,  1383,  1384,  1416,  1385,  1417,  1386,
    1387,  1419,  1391,  1390,  1392,  1393,  1396,  1394,  1636,  1636,
    1395,  1397,  1402,  1407,  1623,  1408,  1414,  1543,  1544,  1545,
    1413,  1420,   901,   902,   903,  1550,  1437,  1421,  1423,  1425,
    1429,  1442,  1431,  1443,  1449,  1445,  1448,  1453,  1455,  1456,
    1565,  1457,   265,   265,   265,  1459,  1469,  1473,  1756,  1475,
     265,  1573,  1610,  1488,  1490,  1462,  1489,  1491,  1493,  1581,
    1497,  1498,  1499,  1501,  1503,   265,  1504,   944,  1505,  1506,
    1507,  1508,  1509,  1510,  1511,  1512,   265,  1092,   370,   371,
     372,  1522,  1529,  1531,   265,  1537,  1541,   265,  1546,   373,
    1553,  1547,  1567,   374,  1568,   375,  1582,  1587,  1588,  1589,
    1551,  1552,   976,  1593,  1559,  1560,  1561,  1562,  1574,  1619,
    1659,  1575,  1576,  1683,  1577,  1597,  1625,  1578,  1600,  1579,
    1584,   995,  1614,  1645,  1607,  1654,  1210,  1002,  1646,  1642,
    1648,  1651,  1671,  1660,  1638,  1624,  1618,  1653,  1657,  1643,
    1667,  1668,   341,  1669,  1670,  1672,  1673,  1674,   432,   432,
    1684,  1658,  1678,  1685,   265,  1687,  1706,  1710,  1711,  1720,
    1724,  1742,  1743,  1570,  1744,  1752,  1753,  1755,   426,  1760,
    -528,   720,  1772,  1778,  1783,  1784,   265,  1785,  1804,  1794,
    1795,   265,  1796,  1801,  1802,  1808,  1696,  1805,  1810,  1759,
    1811,  1820,  1827,  1822,  1828,  1837,  1834,  1839,  1840,  1835,
    1836,  1071,   533,   534,   535,   536,   537,   538,   539,   540,
     664,   542,   543,   544,   545,  1841,  1842,  1844,  1845,   546,
    1689,  1683,  1850,  1865,  1885,  1882,  1733,  1887,  1899,  1898,
    1883,  1901,  1903,  1738,  1741,  1909,  1925,  1900,  -529,  1928,
    1916,  1912,  1101,  1932,  1933,   265,  1642,  1918,   265,   265,
    1913,  1930,  1750,  1922,  1944,  1109,  1926,  1936,  1902,   418,
     418,  1725,  1652,  1945,  1947,  1948,  1955,  1959,  1964,  1969,
    2011,   265,  1127,  1983,  2012,  2013,  1999,   265,  2014,  1666,
    2016,  2017,  2018,  2022,  2019,  2033,   265,  2034,  2038,  2041,
    1749,  2046,  2051,  2052,   426,  2055,  2056,   426,  1977,  1471,
    1525,  1665,  1858,  1758,  1831,  1686,  1495,   113,   124,   125,
     988,   126,   855,  1946,   707,   265,   707,  1530,  1877,  1609,
     132,  1754,  1246,  1637,     0,  1739,   341,  1006,   265,   432,
       0,   728,     0,     0,     0,     0,     0,   152,   349,     0,
       0,     0,     0,     0,     0,     0,  1642,     0,     0,  1968,
       0,     0,     0,     0,     0,     0,     0,     0,   432,     0,
       0,  1713,  1714,  1715,  1716,  1717,  1719,     0,     0,     0,
       0,   265,     0,     0,     0,  1832,     0,     0,  1809,   350,
     351,   352,   353,   354,   355,   356,   357,   358,  1734,     0,
       0,  1736,   359,   360,   361,   362,     0,     0,     0,  1270,
     363,   364,   365,   265,     0,   366,     0,   367,     0,     0,
       0,     0,     0,  1862,     0,   265,     0,     0,   368,     0,
       0,   369,     0,     0,     0,     0,     0,     0,   265,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1851,     0,     0,     0,     0,     0,     0,     0,     0,  1309,
    1859,     0,     0,     0,     0,     0,     0,     0,     0,   399,
       0,     0,     0,     0,     0,   265,     0,     0,  1642,     0,
       0,     0,     0,     0,     0,   265,     0,     0,     0,     0,
    1863,     0,  1884,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   265,     0,     0,   265,     0,     0,     0,
       0,     0,   418,     0,     0,     0,     0,   265,     0,     0,
       0,   265,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1344,  1642,     0,     0,     0,   370,   371,   372,     0,
       0,     0,     0,     0,     0,     0,   341,   373,     0,     0,
       0,   374,     0,   375,   108,  1924,  1954,   265,     0,     0,
       0,     0,     0,     0,   387,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     265,     0,     0,   690,     0,   691,  1632,     0,     0,     0,
       0,   413,     0,     0,   707,   423,     0,     0,     0,   428,
       0,     0,     0,     0,     0,     0,     0,  1409,     0,     0,
       0,  1889,  1890,  1891,  1892,  1893,   440,   441,   442,     0,
     444,   445,   446,     0,   448,   449,   450,   451,   452,   453,
     454,     0,   456,   457,   458,   459,     0,     0,     0,   463,
       0,     0,     0,     0,     0,   265,   265,   265,   265,   265,
       0,     0,     0,     0,     0,   707,     0,     0,     0,     0,
       0,     0,     0,  1642,     0,     0,     0,     0,  1923,     0,
       0,     0,  1927,     0,     0,     0,     0,   707,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   265,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   265,   515,   517,   519,   520,   463,
       0,     0,     0,     0,     0,  1642,     0,     0,  1960,     0,
       0,     0,  1962,   553,   463,     0,   426,     0,     0,     0,
       0,     0,     0,     0,     0,  1348,     0,     0,  1974,   568,
     265,     0,     0,     0,     0,     0,     0,   426,   426,   578,
     579,     0,     0,     0,     0,   579,     0,     0,     0,     0,
       0,   426,     0,     0,     0,   600,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2008,  2009,     0,     0,     0,   620,     0,
       0,     0,   623,   624,   625,     0,   627,     0,     0,     0,
     630,   631,   632,     0,     0,   633,     0,   464,     0,     0,
    1583,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2031,     0,   528,   529,   530,   531,   532,   533,   534,   535,
     536,   537,   538,   539,   540,   664,   542,   543,   544,   545,
       0,  2047,  2049,   663,   546,     0,     0,   463,   672,     0,
       0,     0,     0,     0,     0,  2057,     0,     0,     0,     0,
       0,     0,     0,     0,   683,   684,     0,     0,     0,     0,
       0,     0,     0,     0,   518,     0,     0,   464,   708,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   464,     0,     0,     0,     0,     0,     0,     0,
     738,     0,     0,     0,   742,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   756,   517,
       0,     0,     0,   760,     0,     0,   763,   764,   765,   766,
     767,   768,   769,   770,   771,   772,   773,   774,   775,   776,
     777,   778,   779,   781,   782,   783,   784,   785,   786,   787,
     787,     0,   792,   793,     0,   795,     0,     0,     0,     0,
       0,   801,     0,   804,     0,     0,     0,     0,   787,     0,
       0,  1692,  1693,   463,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   694,   818,   819,   820,   821,   822,   823,
     824,   825,   826,   827,   828,   829,   830,   831,   833,   835,
     836,   837,   838,   839,     0,   841,   842,     0,     0,     0,
       0,     0,   849,   850,   851,   464,     0,     0,     0,     0,
     857,   858,     0,   463,   463,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1405,   515,   663,   877,     0,     0,     0,   882,   883,
     884,   885,   886,   887,   888,   889,   890,     0,     0,     0,
       0,   896,     0,   898,     0,   899,     0,     0,     0,   463,
     463,   463,   904,     0,   906,   907,   908,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   518,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     930,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     780,     0,     0,     0,   463,     0,     0,   788,   789,   947,
       0,   948,     0,     0,   841,   842,     0,     0,     0,     0,
       0,     0,     0,   961,     0,     0,   808,     0,     0,   967,
       0,   464,     0,     0,     0,     0,     0,     0,     0,   463,
       0,  1825,     0,     0,     0,   982,   983,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   834,     0,   463,     0,
     997,   998,     0,     0,   463,  1003,     0,     0,     0,   997,
       0,     0,     0,   709,     0,     0,  1014,     0,     0,     0,
    1017,   464,   464,   528,   529,   530,   531,   532,   533,   534,
     535,   536,   537,   538,   539,   540,   664,   542,   543,   544,
     545,     0,  1037,     0,   833,   546,  1040,     0,     0,  1878,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1888,     0,     0,   464,   464,   464,
       0,     0,     0,     0,     0,     0,     0,     0,   463,   528,
     529,   530,   531,   532,   533,   534,   535,   536,   537,   538,
     539,   540,   664,   542,   543,   544,   545,     0,     0,     0,
       0,   546,     0,  1406,     0,     0,     0,     0,     0,     0,
       0,     0,   464,     0,     0,     0,     0,     0,     0,   463,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   463,     0,     0,     0,     0,     0,     0,  1115,
       0,     0,     0,  1121,     0,     0,     0,   464,     0,   463,
       0,     0,     0,     0,     0,     0,     0,  1134,  1135,     0,
       0,     0,     0,  1138,     0,     0,   464,     0,     0,     0,
       0,     0,   464,     0,     0,     0,     0,     0,     0,  1163,
       0,     0,  1165,     0,     0,     0,     0,     0,  1970,  1971,
    1972,  1973,  1975,  1233,     0,     0,     0,     0,     0,     0,
       0,  1180,     0,  1182,  1183,     0,     0,     0,     0,     0,
       0,     0,   834,     0,  1041,     0,     0,     0,     0,     0,
       0,     0,  1201,   528,   529,   530,   531,   532,   533,   534,
     535,   536,   537,   538,   539,   540,   664,   542,   543,   544,
     545,     0,     0,  1223,     0,   546,   464,  2015,   152,   349,
    1229,  1230,  1231,  1232,     0,     0,     0,     0,  1241,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1266,  1267,     0,     0,   463,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   464,     0,     0,
     350,   351,   352,   353,   354,   355,   356,   357,   358,     0,
     464,     0,     0,   359,   360,   361,   362,     0,     0,     0,
       0,   363,   364,   365,     0,     0,   366,   464,   367,     0,
       0,     0,     0,     0,     0,     0,   463,     0,     0,   368,
       0,     0,   369,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1310,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1311,  1312,  1313,     0,     0,     0,     0,  1315,
    1316,  1307,  1317,     0,     0,     0,     0,     0,     0,     0,
     399,  1323,  1324,     0,     0,     0,     0,     0,     0,  1327,
       0,     0,     0,     0,     0,  1331,  1332,  1333,     0,     0,
       0,     0,     0,  1339,  1340,     0,     0,     0,   463,     0,
       0,     0,     0,   528,   529,   530,   531,   532,   533,   534,
     535,   536,   537,   538,   539,   540,   664,   542,   543,   544,
     545,     0,     0,     0,     0,   546,   157,   158,     0,  1367,
       0,     0,     0,     0,     0,     0,     0,   370,   371,   372,
       0,     0,     0,     0,   464,     0,     0,     0,   373,     0,
       0,     0,   374,     0,   375,   108,     0,     0,     0,     0,
       0,     0,  1398,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   463,     0,     0,     0,     0,     0,
     405,   406,  1411,     0,     0,     0,     0,  -524,     0,  1461,
       0,     0,     0,     0,   464,     0,     0,     0,     0,     0,
       0,     0,     0,  1339,  1340,     0,     0,     0,  1427,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1436,     0,     0,  1441,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   412,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1463,     0,     0,  1466,  1467,     0,     0,     0,
       0,     0,     0,  1474,     0,  1476,   464,  1474,  1480,     0,
       0,   528,   529,   530,   531,   532,   533,   534,   535,   536,
     537,   538,   539,   540,   664,   542,   543,   544,   545,     0,
       0,     0,     0,   546,     0,   693,     0,     0,   469,   470,
     471,   472,   473,   474,   475,   476,   477,   478,   479,   480,
     481,   482,   483,   484,   485,   486,   487,   488,   489,   490,
     491,   494,   495,   496,   497,   498,   499,     0,   501,   502,
       0,     0,     0,     0,   504,   505,     0,     0,     0,  1549,
       0,     0,   464,     0,   510,   511,  1556,  1557,  1558,     0,
       0,     0,     0,     0,     0,  1564,     0,  1566,     0,     0,
       0,     0,     0,     0,  1569,     0,     0,     0,     0,   152,
     349,     0,     0,     0,     0,     0,     0,   463,     0,     0,
       0,     0,  1585,     0,     0,     0,     0,     0,   802,     0,
    1590,  1591,  1592,     0,     0,     0,     0,     0,     0,     0,
    1601,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1613,   350,   351,   352,   353,   354,   355,   356,   357,   358,
       0,     0,     0,     0,   359,   360,   361,   362,     0,     0,
       0,     0,   363,   364,   365,   846,  1630,   366,     0,   367,
       0,     0,  1639,  1640,     0,     0,     0,     0,     0,     0,
     368,     0,     0,   369,   634,   635,   636,     0,     0,     0,
     640,   641,   642,   643,   644,   645,   646,     0,   647,     0,
       0,  1663,   648,   649,     0,     0,   652,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   662,
       0,   399,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1675,  1676,  1677,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1679,  1680,  1681,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1688,     0,     0,     0,     0,   463,   463,
    1694,     0,  1695,     0,     0,   464,     0,     0,  1703,  1704,
       0,     0,     0,     0,     0,     0,     0,     0,   370,   371,
     372,     0,     0,     0,     0,     0,     0,   463,     0,   373,
       0,  1722,     0,   374,     0,   375,   108,     0,     0,     0,
       0,     0,  1732,     0,     0,  1735,     0,     0,     0,  1737,
       0,     0,     0,     0,     0,     0,     0,     0,  1680,  1681,
       0,  1746,     0,     0,     0,     0,     0,     0,  1632,  1751,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1764,     0,     0,   816,     0,
    1770,  1771,     0,     0,  1389,     0,     0,     0,     0,  1664,
    1773,     0,     0,  1774,  1773,     0,  1044,  1045,  1046,  1047,
    1048,  1049,  1050,  1051,  1052,  1053,  1054,     0,  1056,  1057,
    1058,  1059,     0,  1061,  1062,  1063,  1064,     0,     0,     0,
       0,  1793,     0,     0,     0,     0,     0,  1074,     0,  1076,
       0,   152,   349,     0,     0,     0,  1082,  1803,     0,     0,
    1086,  1087,     0,     0,     0,     0,  1812,     0,     0,  1097,
       0,     0,     0,     0,     0,   517,   464,   464,     0,     0,
       0,     0,     0,     0,  1823,  1824,     0,     0,   463,     0,
       0,     0,     0,   350,   351,   352,   353,   354,   355,   356,
     357,   358,     0,     0,     0,   464,   359,   360,   361,   362,
       0,     0,     0,     0,   363,   364,   365,     0,     0,   366,
       0,   367,  1848,  1849,     0,     0,     0,     0,     0,     0,
       0,     0,   368,     0,     0,   369,     0,     0,  1861,     0,
       0,  1864,     0,     0,     0,     0,  1867,  1868,     0,     0,
       0,     0,     0,  1428,     0,     0,   463,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   463,     0,   399,  1186,  1188,  1189,     0,     0,  1894,
    1193,  1194,     0,     0,  1197,  1198,  1199,  1200,     0,  1202,
       0,     0,     0,     0,  1208,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1905,     0,     0,     0,     0,     0,
    1910,     0,     0,  1911,   528,   529,   530,   531,   532,   533,
     534,   535,   536,   537,   538,   539,   540,   664,   542,   543,
     544,   545,     0,     0,     0,     0,   546,     0,  1931,     0,
     370,   371,   372,   518,     0,     0,     0,     0,     0,     0,
       0,   373,     0,     0,     0,   374,   464,   375,   108,     0,
       0,     0,     0,  1949,  1950,     0,     0,     0,     0,     0,
    1287,  1288,     0,     0,     0,  1956,  1957,  1958,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1966,     0,     0,     0,     0,   463,   463,   463,   463,   463,
       0,     0,     0,     0,     0,  1770,     0,     0,     0,  1982,
       0,     0,     0,     0,     0,     0,     0,     0,  1108,     0,
       0,     0,     0,     0,   464,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2002,     0,     0,   464,
       0,  2005,  2006,  2007,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   463,     0,     0,     0,     0,     0,
       0,  1341,     0,   528,   529,   530,   531,   532,   533,   534,
     535,   536,   537,   538,   539,   540,   664,   542,   543,   544,
     545,     0,  2035,  2036,  2037,   546,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     189,     6,   330,     0,     0,     0,     0,   190,   191,   192,
       0,     0,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   222,   223,   224,   225,     0,     0,     0,     0,
     226,  1444,     0,   464,   464,   464,   464,   464,     0,     0,
       0,     0,   227,   228,   229,     0,     0,     0,     0,     0,
     230,    21,     0,   231,     0,  1282,     0,     0,   232,     0,
       0,   233,     0,     0,   234,     0,   235,     0,     0,     0,
    1450,     0,     0,    37,     0,     0,     0,    41,     0,     0,
       0,     0,     0,     0,     0,     0,   236,     0,    50,     0,
       0,   237,   464,   238,     0,     0,     0,     0,     0,     0,
      60,    61,    62,    63,    64,  1482,     0,    66,    67,    68,
      69,    70,     0,     0,     0,    74,     0,     0,    77,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1514,  1515,  1516,  1517,  1518,     0,     0,
    1330,     0,  1523,  1524,     0,  1526,     0,  1528,     0,     0,
       0,     0,     0,  1532,     0,     0,     0,     0,     0,   239,
       0,     0,     0,   240,   241,  1540,     0,     0,   242,   243,
     244,     0,   245,   246,   247,     0,     0,     0,   108,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   248,   249,     0,     0,     0,     0,
       0,   250,     0,     0,     0,     0,   331,     0,     0,     0,
     252,     0,     0,   253,     0,     0,     0,     0,     0,     0,
       0,  1563,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1596,     0,  1599,     0,     0,     0,  1606,     0,
    1608,   528,   529,   530,   531,   532,   533,   534,   535,   536,
     537,   538,   539,   540,   664,   542,   543,   544,   545,     0,
       0,     0,     0,   546,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1633,     0,     0,     0,     0,     0,
       0,     0,   189,     6,   349,     0,     0,     0,     0,   190,
     191,   192,  1451,  1452,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,  1616,     0,  1483,   351,   352,   353,   354,
     355,   356,   357,   358,   222,   223,   224,   225,   359,   360,
     361,   362,   226,     0,     0,     0,   363,   364,   365,     0,
       0,   366,     0,   367,   227,   228,   229,     0,     0,  1682,
       0,     0,   230,    21,   368,   231,     0,   369,     0,     0,
     232,     0,     0,   233,     0,     0,   234,     0,   235,  1536,
       0,     0,     0,     0,     0,    37,     0,     0,     0,    41,
       0,     0,     0,     0,     0,     0,     0,     0,   236,     0,
      50,     0,     0,   237,     0,   238,     0,     0,     0,     0,
       0,     0,    60,    61,    62,    63,    64,     0,     0,    66,
      67,    68,    69,    70,     0,     0,     0,    74,     0,     0,
      77,   528,   529,   530,   531,   532,   533,   534,   535,   536,
     537,   538,   539,   540,   664,   542,   543,   544,   545,     0,
       0,     0,     0,   546,     0,     0,     0,  1761,     0,     0,
    1762,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   239,   370,   371,   372,   240,   241,     0,     0,     0,
     242,   243,   244,   373,   245,   246,   247,   374,     0,   375,
     108,     0,     0,     0,     0,     0,     0,     0,  1787,  1788,
    1620,     0,     0,     0,     0,     0,   248,   249,     0,     0,
       0,     0,     0,   250,     0,     0,     0,     0,   331,     0,
       0,     0,  1484,     0,     0,   253,     0,  1661,     0,     0,
       0,     0,     0,   528,   529,   530,   531,   532,   533,   534,
     535,   536,   537,   538,   539,   540,   664,   542,   543,   544,
     545,     0,     0,     0,     0,   546,     0,     0,  1829,  1830,
     189,     6,   349,     0,     0,     0,     0,   190,   191,   192,
       0,     0,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,     0,  1860,   350,   351,   352,   353,   354,   355,   356,
     357,   358,   222,   223,   224,   225,   359,   360,   361,   362,
     226,     0,     0,     0,   363,   364,   365,     0,     0,   366,
       0,   367,   227,   228,   229,     0,     0,     0,     0,     0,
     230,    21,   368,   231,     0,   369,     0,     0,   232,     0,
       0,   233,     0,     0,   234,     0,   235,     0,     0,     0,
       0,     0,     0,    37,     0,     0,     0,    41,     0,     0,
       0,     0,     0,     0,     0,     0,   236,     0,    50,     0,
       0,   237,     0,   238,     0,     0,     0,     0,     0,     0,
      60,    61,    62,    63,    64,  1626,     0,    66,    67,    68,
      69,    70,     0,     0,     0,    74,     0,     0,    77,     0,
     528,   529,   530,   531,   532,   533,   534,   535,   536,   537,
     538,   539,   540,   664,   542,   543,   544,   545,     0,     0,
       0,     0,   546,  1723,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   239,
     370,   371,   372,   240,   241,     0,  1800,     0,   242,   243,
     244,   373,   245,   246,   247,   374,     0,   375,   108,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   248,   249,     0,     0,     0,     0,
       0,   250,     0,     0,     0,     0,   331,     0,     0,     0,
     252,     0,     0,   253,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   189,   152,
     349,     0,   398,     0,     0,   190,   191,   192,     0,  2024,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   385,   211,   212,
     213,   214,   215,   216,     0,     0,     0,     0,     0,     0,
       0,   350,   351,   352,   353,   354,   355,   356,   357,   358,
     222,   223,   224,   225,   359,   360,   361,   362,   226,     0,
       0,     0,   363,   364,   365,     0,     0,   366,     0,   367,
     227,   228,   229,     0,     0,     0,     0,     0,   230,    21,
     368,   231,     0,   369,     0,   528,   529,   530,   531,   532,
     533,   534,   535,   536,   537,   538,   539,   540,   664,   542,
     543,   544,   545,     0,     0,     0,     0,   546,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   399,     0,   528,   529,   530,   531,   532,   533,   534,
     535,   536,   537,   538,   539,   540,   664,   542,   543,   544,
     545,     0,     0,     0,     0,   546,   528,   529,   530,   531,
     532,   533,   534,   535,   536,   537,   538,   539,   540,   664,
     542,   543,   544,   545,     0,     0,     0,     0,   546,     0,
       0,     0,     0,     0,     0,     0,  1826,     0,     0,     0,
     400,     0,     0,     0,     0,     0,     0,   239,   370,   371,
     372,   240,     0,     0,     0,     0,   242,   243,   244,   373,
     245,   246,   247,   374,     0,   375,   108,   401,   402,   403,
     404,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   248,   386,     0,     0,     0,     0,     0,   250,
       0,   405,   406,     0,   407,     0,   408,   189,     6,  1572,
     409,   253,     0,     0,   190,   191,   192,     0,     0,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   222,
     223,   224,   225,     0,     0,     0,     0,   226,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   227,
     228,   229,     0,     0,     0,     0,     0,   230,    21,     0,
     231,     0,     0,     0,     0,   232,     0,     0,   233,     0,
       0,   234,     0,   235,     0,     0,     0,     0,     0,     0,
      37,     0,     0,     0,    41,     0,     0,     0,     0,     0,
       0,     0,     0,   236,     0,    50,     0,     0,   237,     0,
     238,     0,     0,     0,     0,     0,     0,    60,    61,    62,
      63,    64,     0,     0,    66,    67,    68,    69,    70,     0,
       0,     0,    74,     0,     0,    77,   528,   529,   530,   531,
     532,   533,   534,   535,   536,   537,   538,   539,   540,   664,
     542,   543,   544,   545,     0,     0,     0,     0,   546,     0,
       0,     0,     0,  1838,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   239,     0,     0,     0,
     240,   241,     0,     0,     0,   242,   243,   244,     0,   245,
     246,   247,     0,     0,     0,   108,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   248,   249,     0,     0,     0,     0,     0,   250,     0,
       0,     0,     0,   331,   189,     6,     0,   252,     0,     0,
     253,   190,   191,   192,     0,     0,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   222,   223,   224,   225,
       0,     0,     0,     0,   226,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   227,   228,   229,     0,
       0,     0,     0,     0,   230,    21,     0,   231,     0,     0,
       0,     0,   232,     0,     0,   233,     0,     0,   234,     0,
     235,     0,     0,     0,     0,     0,     0,    37,     0,     0,
       0,    41,     0,     0,     0,     0,     0,     0,     0,     0,
     236,     0,    50,     0,     0,   237,     0,   238,     0,     0,
       0,     0,     0,     0,    60,    61,    62,    63,    64,     0,
       0,    66,    67,    68,    69,    70,     0,     0,     0,    74,
       0,     0,    77,   528,   529,   530,   531,   532,   533,   534,
     535,   536,   537,   538,   539,   540,   664,   542,   543,   544,
     545,     0,     0,     0,     0,   546,     0,     0,     0,     0,
    1943,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   239,     0,     0,     0,   240,   241,     0,
       0,     0,   242,   243,   244,     0,   245,   246,   247,     0,
       0,     0,   108,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   585,  1718,
       0,     0,     0,     0,     0,   250,     0,     0,     0,     0,
     587,   189,     6,     0,   293,   521,     0,   253,   190,   191,
     192,     0,     0,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   222,   223,   224,   225,     0,     0,     0,
       0,   226,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   227,   228,   229,     0,     0,     0,     0,
       0,   230,    21,     0,   231,     0,     0,     0,     0,   232,
       0,     0,   233,     0,     0,   234,     0,   235,     0,     0,
       0,     0,     0,     0,    37,     0,     0,     0,    41,     0,
       0,     0,     0,     0,     0,     0,     0,   236,     0,    50,
       0,     0,   237,     0,   238,     0,     0,     0,     0,     0,
       0,    60,    61,    62,    63,    64,     0,     0,    66,    67,
      68,    69,    70,     0,     0,     0,    74,     0,     0,    77,
     528,   529,   530,   531,   532,   533,   534,   535,   536,   537,
     538,   539,   540,   664,   542,   543,   544,   545,     0,     0,
       0,     0,   546,     0,     0,     0,     0,  1989,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     239,     0,     0,     0,   240,   241,     0,     0,     0,   242,
     243,   244,     0,   245,   246,   247,     0,     0,     0,   108,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   248,   249,     0,     0,     0,
       0,     0,   250,     0,     0,     0,     0,   251,   189,     6,
       0,   252,     0,     0,   253,   190,   191,   192,     0,     0,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     222,   223,   224,   225,     0,     0,     0,     0,   226,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     227,   228,   229,     0,     0,     0,     0,     0,   230,    21,
       0,   231,     0,     0,     0,     0,   232,     0,     0,   233,
       0,     0,   234,     0,   235,     0,     0,     0,     0,     0,
       0,    37,     0,     0,     0,    41,     0,     0,     0,     0,
       0,     0,     0,     0,   236,     0,    50,     0,     0,   237,
       0,   238,     0,     0,     0,     0,     0,     0,    60,    61,
      62,    63,    64,     0,     0,    66,    67,    68,    69,    70,
       0,     0,     0,    74,     0,     0,    77,   528,   529,   530,
     531,   532,   533,   534,   535,   536,   537,   538,   539,   540,
     664,   542,   543,   544,   545,     0,     0,     0,     0,   546,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   239,     0,     0,
       0,   240,   241,     0,     0,     0,   242,   243,   244,     0,
     245,   246,   247,     0,     0,     0,   108,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   248,   249,     0,     0,     0,     0,     0,   250,
       0,     0,     0,     0,   331,   189,     6,     0,   252,     0,
       0,   253,   190,   191,   192,     0,     0,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   222,   223,   224,
     225,     0,     0,     0,     0,   226,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   227,   228,   229,
       0,     0,     7,     8,     0,   230,    21,     0,   231,     0,
       0,     0,     0,   232,     0,     0,   233,     0,     0,   234,
       0,   235,     0,     0,     0,     0,     0,     0,    37,     0,
       0,     0,    41,     0,     0,     0,     0,     0,     0,     0,
       0,   236,     0,    50,     0,     0,   237,     0,   238,     0,
       0,     0,     0,     0,     0,    60,    61,    62,    63,    64,
       0,     0,    66,    67,    68,    69,    70,     0,     0,     0,
      74,     0,     0,    77,     0,     0,     0,     0,     0,     0,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,     0,     0,     0,    38,    39,    40,    41,
       0,     0,    43,     0,     0,     0,     0,     0,   703,    49,
       0,     0,    51,   704,   239,    54,   705,     0,   240,   241,
       0,     0,     0,   242,   243,   244,     0,   245,   246,   247,
       0,     0,     0,   108,    71,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   248,
     462,     0,     0,     0,     0,     0,   250,     0,    85,    86,
      87,   331,   189,     6,     0,   516,     0,     0,   253,   190,
     191,   192,     0,     0,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   222,   223,   224,   225,     0,     0,
       0,     0,   226,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   878,   227,   228,   229,     0,     0,     7,
       8,     0,   230,    21,     0,   231,     0,     0,     0,     0,
     232,     0,     0,   233,     0,     0,   234,     0,   235,     0,
       0,     0,     0,     0,     0,    37,     0,     0,     0,    41,
       0,     0,     0,     0,     0,     0,     0,     0,   236,     0,
      50,     0,     0,   237,     0,   238,     0,     0,     0,     0,
       0,     0,    60,    61,    62,    63,    64,     0,     0,    66,
      67,    68,    69,    70,     0,     0,     0,    74,     0,     0,
      77,     0,     0,     0,     0,     0,     0,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
       0,     0,     0,    38,    39,    40,    41,     0,     0,    43,
       0,     0,     0,     0,     0,   703,    49,     0,     0,    51,
     704,   239,    54,   705,     0,   240,   241,     0,     0,     0,
     242,   243,   244,     0,   245,   246,   247,     0,     0,     0,
     108,    71,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   248,   462,     0,     0,
       0,     0,     0,   250,     0,    85,    86,    87,   331,   189,
       6,     0,     0,   521,     0,   253,   190,   191,   192,     0,
       0,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   222,   223,   224,   225,     0,     0,     0,     0,   226,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     900,   227,   228,   229,     0,     0,     7,     8,     0,   230,
      21,     0,   231,     0,     0,     0,     0,   232,     0,     0,
     233,     0,     0,   234,     0,   235,     0,     0,     0,     0,
       0,     0,    37,     0,     0,     0,    41,     0,     0,     0,
       0,     0,     0,     0,     0,   236,     0,    50,     0,     0,
     237,     0,   238,     0,     0,     0,     0,     0,     0,    60,
      61,    62,    63,    64,     0,     0,    66,    67,    68,    69,
      70,     0,     0,     0,    74,     0,     0,    77,     0,     0,
       0,     0,     0,     0,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,     0,     0,     0,
      38,    39,    40,    41,     0,     0,    43,     0,     0,     0,
       0,     0,   703,    49,     0,     0,    51,   704,   239,    54,
     705,     0,   240,   241,     0,     0,     0,   242,   243,   244,
       0,   245,   246,   247,     0,     0,     0,   108,    71,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   248,   249,     0,     0,     0,     0,     0,
     250,     0,    85,    86,    87,   557,   189,     6,     0,   252,
       0,     0,   253,   190,   191,   192,     0,     0,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   222,   223,
     224,   225,     0,     0,     0,     0,   226,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   945,   227,   228,
     229,     0,     0,     7,     8,     0,   230,    21,     0,   231,
       0,     0,     0,     0,   232,     0,     0,   233,     0,     0,
     234,     0,   235,     0,     0,     0,     0,     0,     0,    37,
       0,     0,     0,    41,     0,     0,     0,     0,     0,     0,
       0,     0,   236,     0,    50,     0,     0,   237,     0,   238,
       0,     0,     0,     0,     0,     0,    60,    61,    62,    63,
      64,     0,     0,    66,    67,    68,    69,    70,     0,     0,
       0,    74,     0,     0,    77,     0,     0,     0,     0,     0,
       0,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,     0,     0,     0,    38,    39,    40,
      41,     0,     0,    43,     0,     0,     0,     0,     0,   703,
      49,     0,     0,    51,   704,   239,    54,   705,     0,   240,
     241,     0,     0,     0,   242,   243,   244,     0,   245,   246,
     247,     0,     0,     0,   108,    71,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     248,   249,     0,     0,     0,     0,     0,   250,     0,    85,
      86,    87,   564,   189,     6,     0,   252,     0,     0,   253,
     190,   191,   192,     0,     0,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   222,   223,   224,   225,     0,
       0,     0,     0,   226,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   946,   227,   228,   229,     0,     0,
       7,     8,     0,   230,    21,     0,   231,     0,     0,     0,
       0,   232,     0,     0,   233,     0,     0,   234,     0,   235,
       0,     0,     0,     0,     0,     0,    37,     0,     0,     0,
      41,     0,     0,     0,     0,     0,     0,     0,     0,   236,
       0,    50,     0,     0,   237,     0,   238,     0,     0,     0,
       0,     0,     0,    60,    61,    62,    63,    64,     0,     0,
      66,    67,    68,    69,    70,     0,     0,     0,    74,     0,
       0,    77,     0,     0,     0,     0,     0,     0,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,     0,     0,     0,    38,    39,    40,    41,     0,     0,
      43,     0,     0,     0,     0,     0,   703,    49,     0,     0,
      51,   704,   239,    54,   705,     0,   240,   241,     0,     0,
       0,   242,   243,   244,     0,   245,   246,   247,     0,     0,
       0,   108,    71,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   248,   462,     0,
       0,     0,     0,     0,   250,     0,    85,    86,    87,   331,
     189,     6,     0,   832,     0,     0,   253,   190,   191,   192,
       0,     0,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   222,   223,   224,   225,     0,     0,     0,     0,
     226,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1129,   227,   228,   229,     0,     0,     7,     8,     0,
     230,    21,     0,   231,     0,     0,     0,     0,   232,     0,
       0,   233,     0,     0,   234,     0,   235,     0,     0,     0,
       0,     0,     0,    37,     0,     0,     0,    41,     0,     0,
       0,     0,     0,     0,     0,     0,   236,     0,    50,     0,
       0,   237,     0,   238,     0,     0,     0,     0,     0,     0,
      60,    61,    62,    63,    64,     0,     0,    66,    67,    68,
      69,    70,     0,     0,     0,    74,     0,     0,    77,     0,
       0,     0,     0,     0,     0,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,     0,     0,
       0,    38,    39,    40,    41,     0,     0,    43,     0,     0,
       0,     0,     0,   703,    49,     0,     0,    51,   704,   239,
      54,   705,     0,   240,   241,     0,     0,     0,   242,   243,
     244,     0,   245,   246,   247,     0,     0,     0,   108,    71,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   248,   249,     0,     0,     0,     0,
       0,   250,     0,    85,    86,    87,   331,   189,     6,     0,
    1580,     0,     0,   253,   190,   191,   192,     0,     0,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   222,
     223,   224,   225,     0,     0,     0,     0,   226,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1131,   227,
     228,   229,     0,     0,     7,     8,     0,   230,    21,     0,
     231,     0,     0,     0,     0,   232,     0,     0,   233,     0,
       0,   234,     0,   235,     0,     0,     0,     0,     0,     0,
      37,     0,     0,     0,    41,     0,     0,     0,     0,     0,
       0,     0,     0,   236,     0,    50,     0,     0,   237,     0,
     238,     0,     0,     0,     0,     0,     0,    60,    61,    62,
      63,    64,     0,     0,    66,    67,    68,    69,    70,     0,
       0,     0,    74,     0,     0,    77,     0,     0,     0,     0,
       0,     0,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,     0,     0,     0,    38,    39,
      40,    41,     0,     0,    43,  1782,   527,     0,     0,     0,
     703,    49,     0,     0,    51,   704,   239,    54,   705,     0,
     240,   241,     0,     0,     0,   242,   243,   244,     0,   245,
     246,   247,     0,     0,     0,   108,    71,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   585,  1718,     0,     0,     0,     0,     0,   250,     0,
      85,    86,    87,   587,   189,     6,     0,   293,     0,     0,
     253,   190,   191,   192,     0,     0,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   222,   223,   224,   225,
       0,     0,     0,     0,   226,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1132,   227,   228,   229,     0,
       0,     0,     0,     0,   230,    21,     0,   231,     0,     0,
       0,     0,   232,     0,     0,   233,     0,     0,   234,     0,
     235,     0,     0,     0,     0,     0,     0,    37,     0,     0,
       0,    41,     0,     0,     0,     0,     0,     0,     0,     0,
     236,     0,    50,     0,     0,   237,     0,   238,     0,     0,
       0,     0,     0,     0,    60,    61,    62,    63,    64,     0,
       0,    66,    67,    68,    69,    70,     0,     0,     0,    74,
       0,     0,    77,     0,   528,   529,   530,   531,   532,   533,
     534,   535,   536,   537,   538,   539,   540,   757,   542,   543,
     544,   545,     0,     0,     0,     0,   546,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   239,     0,     0,     0,   240,   241,     0,
       0,     0,   242,   243,   244,     0,   245,   246,   247,     0,
       0,     0,   108,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   248,   462,
       0,     0,     0,     0,     0,   250,   189,   152,   349,     0,
     331,     0,     0,   190,   191,   192,     0,   253,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   385,   211,   212,   213,   214,
     215,   216,  1915,     0,     0,     0,     0,     0,     0,   350,
     351,   352,   353,   354,   355,   356,   357,   358,   222,   223,
     224,   225,   359,   360,   361,   362,   226,     0,     0,     0,
     363,   364,   365,     0,     0,   366,     0,   367,   227,   228,
     229,     0,     0,     0,     0,     0,   230,    21,   368,   231,
       0,   369,   189,   152,   349,     0,     0,     0,     0,   190,
     191,   192,     0,     0,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   385,   211,   212,   213,   214,   215,   216,     0,     0,
       0,     0,     0,     0,     0,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   222,   223,   224,   225,   359,   360,
     361,   362,   226,     0,     0,     0,   363,   364,   365,     0,
       0,   366,     0,   367,   227,   228,   229,     0,     0,     0,
       0,     0,   230,    21,   368,   231,     0,   369,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   239,   370,   371,   372,   240,
       0,     0,     0,     0,   242,   243,   244,   373,   245,   246,
     247,   374,     0,   375,   108,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     248,   386,     0,     0,     0,     0,     0,   250,     0,     0,
       0,     0,   331,     0,     0,     0,  1479,     0,     0,   253,
       0,   528,   529,   530,   531,   532,   533,   534,   535,   536,
     537,   538,   539,   540,   664,   542,   543,   544,   545,     0,
       0,     0,     0,   546,     0,     0,     0,     0,     0,     0,
       0,   239,   370,   371,   372,   240,     0,     0,     0,     0,
     242,   243,   244,   373,   245,   246,   247,   374,     0,   375,
     108,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   248,   386,     0,     0,
       0,     0,     0,   250,     0,     0,     0,     0,   331,   189,
     152,   349,  1731,     0,     0,   253,   190,   191,   192,     0,
       0,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   385,   211,
     212,   213,   214,   215,   216,   527,     0,     0,     0,     0,
       0,     0,  1483,   351,   352,   353,   354,   355,   356,   357,
     358,   222,   223,   224,   225,   359,   360,   361,   362,   226,
       0,     0,     0,   363,   364,   365,     0,     0,   366,     0,
     367,   227,   228,   229,     0,     0,     0,     0,     0,   230,
      21,   368,   231,     0,   369,   189,   152,   349,     0,     0,
       0,     0,   190,   191,   192,     0,     0,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   385,   211,   212,   213,   214,   215,
     216,     0,     0,     0,     0,     0,     0,     0,   350,   351,
     352,   353,   354,   355,   356,   357,   358,   222,   223,   224,
     225,   359,   360,   361,   362,   226,     0,     0,     0,   363,
     364,   365,     0,     0,   366,     0,   367,   227,   228,   229,
       0,     0,     0,     0,     0,   230,    21,   368,   231,     0,
     369,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   239,   370,
     371,   372,   240,     0,     0,     0,     0,   242,   243,   244,
     373,   245,   246,   247,   374,     0,   375,   108,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   248,   386,     0,     0,     0,     0,     0,
     250,     0,     0,     0,     0,   331,     0,     0,     0,  1632,
       0,     0,   253,   528,   529,   530,   531,   532,   533,   534,
     535,   536,   537,   538,   539,   540,   541,   542,   543,   544,
     545,     0,     0,     0,     0,   546,     0,     0,     0,     0,
     527,     0,     0,     0,   239,   370,   371,   372,   240,     0,
       0,     0,     0,   242,   243,   244,   373,   245,   246,   247,
     374,     0,   375,   108,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   248,
     386,     0,     0,     0,     0,     0,   250,   189,   152,     0,
       0,   331,     0,     0,   190,   191,   192,     0,   253,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   385,   211,   212,   213,
     214,   215,   216,     0,   917,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   222,
     223,   224,   225,     0,     0,     0,     0,   226,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   227,
     228,   229,     0,     0,   189,   152,     0,   230,    21,     0,
     231,   190,   191,   192,     0,     0,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   385,   211,   212,   213,   214,   215,   216,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   222,   223,   224,   225,
       0,     0,     0,     0,   226,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   227,   228,   229,     0,
       0,     0,     0,     0,   230,    21,     0,   231,   528,   529,
     530,   531,   532,   533,   534,   535,   536,   537,   538,   539,
     540,   757,   542,   543,   544,   545,     0,     0,     0,     0,
     546,     0,     0,     0,     0,     0,   239,     0,     0,     0,
     240,     0,     0,     0,     0,   242,   243,   244,     0,   245,
     246,   247,     0,     0,     0,   108,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   248,   386,     0,     0,     0,     0,     0,   250,     0,
       0,     0,     0,   331,     0,     0,     0,   567,     0,     0,
     253,     0,   528,   529,   530,   531,   532,   533,   534,   535,
     536,   537,   538,   539,   540,   664,   542,   543,   544,   545,
       0,     0,     0,   239,   546,     0,     0,   240,     0,     0,
       0,  1099,   242,   243,   244,     0,   245,   246,   247,     0,
       0,     0,   108,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   585,   586,
       0,     0,     0,     0,     0,   250,     0,     0,     0,     0,
     587,   189,   152,     0,   293,     0,     0,   253,   190,   191,
     192,     0,     0,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     385,   211,   212,   213,   214,   215,   216,  1100,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   222,   223,   224,   225,     0,     0,     0,
       0,   226,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   227,   228,   229,     0,     0,     0,     0,
       0,   230,    21,     0,   231,   189,   152,     0,  1222,     0,
       0,     0,   190,   191,   192,     0,     0,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   385,   211,   212,   213,   214,   215,
     216,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   222,   223,   224,
     225,     0,     0,     0,     0,   226,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   227,   228,   229,
       0,     0,     0,     0,     0,   230,    21,     0,   231,   528,
     529,   530,   531,   532,   533,   534,   535,   536,   537,   538,
     539,   540,   664,   542,   543,   544,   545,     0,     0,     0,
     239,   546,     0,     0,   240,     0,     0,     0,     0,   242,
     243,   244,     0,   245,   246,   247,     0,     0,     0,   108,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   248,   386,     0,     0,     0,
       0,     0,   250,     0,     0,     0,     0,   331,  1008,     0,
       0,     0,     0,     0,   253,   528,   529,   530,   531,   532,
     533,   534,   535,   536,   537,   538,   539,   540,   664,   542,
     543,   544,   545,     0,     0,     0,     0,   546,     0,     0,
       0,     0,     0,     0,   239,     0,     0,  1404,   240,     0,
       0,     0,     0,   242,   243,   244,     0,   245,   246,   247,
       0,     0,     0,   108,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   248,
     386,     0,     0,     0,     0,     0,   250,   189,   152,     0,
    1366,   331,     0,     0,   190,   191,   192,     0,   253,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   385,   211,   212,   213,
     214,   215,   216,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   222,
     223,   224,   225,     0,     0,     0,     0,   226,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   227,
     228,   229,     0,     0,     0,     0,     0,   230,    21,     0,
     231,   189,   152,     0,  1426,     0,     0,     0,   190,   191,
     192,     0,     0,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     385,   211,   212,   213,   214,   215,   216,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   222,   223,   224,   225,     0,     0,     0,
       0,   226,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   227,   228,   229,     0,     0,     0,     0,
       0,   230,    21,     0,   231,   528,   529,   530,   531,   532,
     533,   534,   535,   536,   537,   538,   539,   540,   664,   542,
     543,   544,   545,     0,     0,     0,   239,   546,     0,     0,
     240,     0,     0,     0,     0,   242,   243,   244,     0,   245,
     246,   247,     0,     0,     0,   108,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   248,   386,     0,     0,     0,     0,     0,   250,     0,
       0,     0,     0,   331,     0,     0,     0,     0,     0,     0,
     253,   528,   529,   530,   531,   532,   533,   534,   535,   536,
     537,   538,   539,   540,   664,   542,   543,   544,   545,     0,
       0,     0,     0,   546,     0,   690,     0,   691,     0,     0,
     239,     0,     0,  1598,   240,     0,     0,     0,     0,   242,
     243,   244,     0,   245,   246,   247,     0,     0,     0,   108,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   248,   386,     0,     0,     0,
       0,     0,   250,   189,   152,     0,     0,   331,     0,     0,
     190,   191,   192,     0,   253,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   385,   211,   212,   213,   214,   215,   216,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   222,   223,   224,   225,     0,
       0,     0,     0,   226,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   227,   228,   229,     0,     0,
     189,   152,     0,   230,    21,     0,   231,   190,   191,   192,
       0,     0,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   385,
     211,   212,   213,   214,   215,   216,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   222,   223,   224,   225,     0,     0,     0,     0,
     226,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   227,   228,   229,     0,     0,     0,     0,     0,
     230,    21,     0,   231,     0,   528,   529,   530,   531,   532,
     533,   534,   535,   536,   537,   538,   539,   540,   664,   542,
     543,   544,   545,     0,     0,     0,     0,   546,     0,   909,
       0,     0,   239,     0,     0,     0,   240,   870,     0,     0,
       0,   242,   243,   244,     0,   245,   246,   247,     0,     0,
       0,   108,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   248,   386,     0,
       0,     0,     0,     0,   250,     0,     0,     0,     0,   331,
    1478,     0,     0,     0,     0,     0,   253,     0,     0,   528,
     529,   530,   531,   532,   533,   534,   535,   536,   537,   538,
     539,   540,   664,   542,   543,   544,   545,     0,     0,   239,
       0,   546,     0,   240,     0,     0,     0,  1699,   242,   243,
     244,  1700,   245,   246,   247,     0,     0,     0,   108,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   248,   386,     0,     0,     0,     0,
       0,   250,   189,   152,     0,     0,   331,  1775,     0,   190,
     191,   192,     0,   253,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   385,   211,   212,   213,   214,   215,   216,     0,     0,
       7,     8,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   222,   223,   224,   225,     0,     0,
       0,     0,   226,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   227,   228,   229,     0,     0,     7,
       8,     0,   230,    21,     0,   231,   528,   529,   530,   531,
     532,   533,   534,   535,   536,   537,   538,   539,   540,   664,
     542,   543,   544,   545,     0,     0,     0,     0,   546,     0,
       0,     0,     0,     0,   754,     0,     0,     0,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,     0,     0,     0,    38,    39,    40,    41,     0,     0,
      43,     0,     0,     0,     0,     0,   703,    49,     0,     0,
      51,   704,     0,    54,   705,     0,     0,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
       7,     8,    71,    38,    39,    40,    41,     0,     0,    43,
       0,     0,     0,     0,     0,   703,    49,     0,     0,    51,
     704,   239,    54,   705,     0,   240,    85,    86,    87,     0,
     242,   243,   244,     0,   245,   246,   247,     0,     0,     0,
     108,    71,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   248,   386,     0,     0,
       0,     0,     0,   250,     0,    85,    86,    87,   331,     0,
       0,     0,     0,     0,     0,   253,     0,     0,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,     7,     8,     0,    38,    39,    40,    41,     0,     0,
      43,  1151,     0,     0,     0,     0,   703,    49,     0,     0,
      51,   704,     0,    54,   705,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       7,     8,    71,     0,     0,     0,     0,     0,     0,     0,
    1181,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    85,    86,    87,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,     0,     0,     0,    38,    39,    40,    41,     0,
       0,    43,     0,     0,     0,     7,     8,   703,    49,     0,
       0,    51,   704,     0,    54,   705,     0,     0,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,     0,     0,    71,    38,    39,    40,    41,     0,     0,
      43,  1214,     0,     0,     0,     0,   703,    49,     0,     0,
      51,   704,     0,    54,   705,     0,     0,    85,    86,    87,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    71,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    85,    86,    87,    38,
      39,    40,    41,     0,     0,    43,     0,     0,     0,     0,
       0,   703,    49,     0,     0,    51,   704,     0,    54,   705,
       0,     0,    -4,     1,     0,     0,    -4,     0,     0,     0,
       0,     0,  1358,     0,     0,    -4,    -4,    71,     0,     0,
       0,     0,   528,   529,   530,   531,   532,   533,   534,   535,
     536,   537,   538,   539,   540,   664,   542,   543,   544,   545,
       0,    85,    86,    87,   546,     0,    -4,    -4,     0,     0,
    1726,  1934,     0,     0,  1727,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    -4,    -4,    -4,     0,
       0,     0,    -4,    -4,     0,    -4,     0,     0,     0,     0,
      -4,    -4,     0,    -4,    -4,     0,    -4,     0,     0,     0,
       0,    -4,    -4,    -4,    -4,    -4,    -4,    -4,    -4,    -4,
      -4,    -4,    -4,    -4,    -4,    -4,     0,     0,    -4,    -4,
      -4,    -4,    -4,    -4,     0,    -4,  1991,    -4,    -4,    -4,
      -4,    -4,    -4,    -4,     0,    -4,    -4,    -4,    -4,    -4,
      -4,     0,    -4,    -4,    -4,    -4,    -4,    -4,    -4,    -4,
      -4,     0,    -4,    -4,    -4,    -4,    -4,    -4,    -4,    -4,
      -4,    -4,    -4,    -4,    -4,    -4,     0,     6,     0,    -4,
      -4,    -4,     0,     0,     0,    -4,     7,     8,     0,     0,
      -4,    -4,    -4,    -4,     0,     0,    -4,     0,    -4,     0,
      -4,    -4,    -4,    -4,    -4,    -4,    -4,    -4,    -4,    -4,
      -4,    -4,    -4,    -4,     0,     0,     0,     9,    10,     0,
      -4,    -4,    -4,     0,     0,     0,     0,     0,     0,     0,
       0,    -4,     0,    -4,     0,     0,     0,    11,    12,    13,
       0,     0,     0,    14,    15,     0,    16,     0,     0,     0,
       0,    17,    18,     0,    19,    20,     0,    21,     0,     0,
       0,     0,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,     0,     0,    37,
      38,    39,    40,    41,    42,     0,    43,     0,    44,    45,
      46,    47,    48,    49,    50,     0,    51,    52,    53,    54,
      55,    56,     0,    57,    58,    59,    60,    61,    62,    63,
      64,    65,     0,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,     0,     0,     0,
      80,    81,    82,     0,     0,     0,    83,     0,     0,     0,
       0,    84,    85,    86,    87,   152,   349,    88,     0,    89,
       0,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,     0,     0,     0,     0,     0,
       0,   104,   105,   106,     0,   379,   349,     0,     0,     0,
       0,     0,   107,     0,   108,     7,     8,   350,   351,   352,
     353,   354,   355,   356,   357,   358,     0,     0,     0,     0,
     359,   360,   361,   362,     0,     0,     0,     0,   363,   364,
     365,     0,     0,   366,     0,   367,     0,   350,   351,   352,
     353,   354,   355,   356,   357,   358,   368,     0,     0,   369,
     359,   360,   361,   362,     0,     0,     0,     0,   363,   364,
     365,     0,     0,   366,     0,   367,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   368,     0,     0,   369,
       0,     0,     0,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,     0,     0,     0,    38,
      39,    40,    41,     0,     0,    43,     0,     0,     0,     0,
       0,   703,    49,     0,     0,    51,   704,     0,    54,   705,
       0,     0,     0,     0,   955,     7,     8,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    71,     0,     0,
       0,   956,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   370,   371,   372,     0,     0,     0,
       0,    85,    86,    87,     0,   373,     0,     0,     0,   374,
       0,   375,   108,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   370,   371,   372,     0,     0,     0,
       0,     0,     0,     0,     0,   373,     0,     0,     0,   374,
       0,   375,     0,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,     0,     0,     0,    38,
      39,    40,    41,     0,     0,    43,     0,     0,     0,     0,
       0,   703,    49,     0,     0,    51,   704,     0,    54,   705,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    71,   528,   529,
     530,   531,   532,   533,   534,   535,   536,   537,   538,   539,
     540,   664,   542,   543,   544,   545,     0,     0,     0,     0,
     546,    85,    86,    87,     0,     0,  1880,     0,     0,     0,
    1881,   528,   529,   530,   531,   532,   533,   534,   535,   536,
     537,   538,   539,   540,   664,   542,   543,   544,   545,     0,
       0,     0,     0,   546,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   718,   528,   529,   530,   531,   532,   533,
     534,   535,   536,   537,   538,   539,   540,   664,   542,   543,
     544,   545,     0,     0,     0,     0,   546,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   870,   528,   529,   530,
     531,   532,   533,   534,   535,   536,   537,   538,   539,   540,
     664,   542,   543,   544,   545,     0,     0,     0,     0,   546,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   871,
     528,   529,   530,   531,   532,   533,   534,   535,   536,   537,
     538,   539,   540,   664,   542,   543,   544,   545,     0,     0,
       0,     0,   546,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   914,   528,   529,   530,   531,   532,   533,   534,
     535,   536,   537,   538,   539,   540,   664,   542,   543,   544,
     545,     0,     0,     0,     0,   546,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1055,   528,   529,   530,   531,
     532,   533,   534,   535,   536,   537,   538,   539,   540,   664,
     542,   543,   544,   545,     0,     0,     0,     0,   546,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1065,   528,
     529,   530,   531,   532,   533,   534,   535,   536,   537,   538,
     539,   540,   664,   542,   543,   544,   545,     0,     0,     0,
       0,   546,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1066,   528,   529,   530,   531,   532,   533,   534,   535,
     536,   537,   538,   539,   540,   664,   542,   543,   544,   545,
       0,     0,     0,     0,   546,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1067,   528,   529,   530,   531,   532,
     533,   534,   535,   536,   537,   538,   539,   540,   664,   542,
     543,   544,   545,     0,     0,     0,     0,   546,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1072,   528,   529,
     530,   531,   532,   533,   534,   535,   536,   537,   538,   539,
     540,   664,   542,   543,   544,   545,     0,     0,     0,     0,
     546,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1073,   528,   529,   530,   531,   532,   533,   534,   535,   536,
     537,   538,   539,   540,   664,   542,   543,   544,   545,     0,
       0,     0,     0,   546,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1075,   528,   529,   530,   531,   532,   533,
     534,   535,   536,   537,   538,   539,   540,   664,   542,   543,
     544,   545,     0,     0,     0,     0,   546,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1175,   528,   529,   530,
     531,   532,   533,   534,   535,   536,   537,   538,   539,   540,
     664,   542,   543,   544,   545,     0,     0,     0,     0,   546,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1196,
     528,   529,   530,   531,   532,   533,   534,   535,   536,   537,
     538,   539,   540,   664,   542,   543,   544,   545,     0,     0,
       0,     0,   546,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1278,   528,   529,   530,   531,   532,   533,   534,
     535,   536,   537,   538,   539,   540,   664,   542,   543,   544,
     545,     0,     0,     0,     0,   546,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1360,   528,   529,   530,   531,
     532,   533,   534,   535,   536,   537,   538,   539,   540,   664,
     542,   543,   544,   545,     0,     0,     0,     0,   546,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1361,   528,
     529,   530,   531,   532,   533,   534,   535,   536,   537,   538,
     539,   540,   664,   542,   543,   544,   545,     0,     0,     0,
       0,   546,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1403,   528,   529,   530,   531,   532,   533,   534,   535,
     536,   537,   538,   539,   540,   664,   542,   543,   544,   545,
       0,     0,     0,     0,   546,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1519,   528,   529,   530,   531,   532,
     533,   534,   535,   536,   537,   538,   539,   540,   664,   542,
     543,   544,   545,     0,     0,     0,     0,   546,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1520,   528,   529,
     530,   531,   532,   533,   534,   535,   536,   537,   538,   539,
     540,   664,   542,   543,   544,   545,     0,     0,     0,     0,
     546,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1521,   528,   529,   530,   531,   532,   533,   534,   535,   536,
     537,   538,   539,   540,   664,   542,   543,   544,   545,     0,
       0,     0,     0,   546,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1533,   528,   529,   530,   531,   532,   533,
     534,   535,   536,   537,   538,   539,   540,   664,   542,   543,
     544,   545,     0,     0,     0,     0,   546,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1656,   528,   529,   530,
     531,   532,   533,   534,   535,   536,   537,   538,   539,   540,
     664,   542,   543,   544,   545,     0,     0,     0,     0,   546,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1765,
     528,   529,   530,   531,   532,   533,   534,   535,   536,   537,
     538,   539,   540,   664,   542,   543,   544,   545,     0,     0,
       0,     0,   546,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1766,   528,   529,   530,   531,   532,   533,   534,
     535,   536,   537,   538,   539,   540,   664,   542,   543,   544,
     545,     0,     0,     0,     0,   546,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1789,   528,   529,   530,   531,
     532,   533,   534,   535,   536,   537,   538,   539,   540,   664,
     542,   543,   544,   545,     0,     0,     0,     0,   546,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1790,   528,
     529,   530,   531,   532,   533,   534,   535,   536,   537,   538,
     539,   540,   664,   542,   543,   544,   545,     0,     0,     0,
       0,   546,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1856,   528,   529,   530,   531,   532,   533,   534,   535,
     536,   537,   538,   539,   540,   664,   542,   543,   544,   545,
       0,     0,     0,     0,   546,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1906,   528,   529,   530,   531,   532,
     533,   534,   535,   536,   537,   538,   539,   540,   664,   542,
     543,   544,   545,     0,     0,     0,     0,   546,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1907,   528,   529,
     530,   531,   532,   533,   534,   535,   536,   537,   538,   539,
     540,   664,   542,   543,   544,   545,     0,     0,     0,     0,
     546,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1919,   528,   529,   530,   531,   532,   533,   534,   535,   536,
     537,   538,   539,   540,   664,   542,   543,   544,   545,     0,
       0,     0,     0,   546,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1920,   528,   529,   530,   531,   532,   533,
     534,   535,   536,   537,   538,   539,   540,   664,   542,   543,
     544,   545,     0,     0,     0,     0,   546,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1952,   528,   529,   530,
     531,   532,   533,   534,   535,   536,   537,   538,   539,   540,
     664,   542,   543,   544,   545,     0,     0,     0,     0,   546,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1979,
     528,   529,   530,   531,   532,   533,   534,   535,   536,   537,
     538,   539,   540,   664,   542,   543,   544,   545,     0,     0,
       0,     0,   546,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1984,   528,   529,   530,   531,   532,   533,   534,
     535,   536,   537,   538,   539,   540,   664,   542,   543,   544,
     545,     0,     0,     0,     0,   546,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1985,   528,   529,   530,   531,
     532,   533,   534,   535,   536,   537,   538,   539,   540,   664,
     542,   543,   544,   545,     0,     0,     0,     0,   546,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1986,   528,
     529,   530,   531,   532,   533,   534,   535,   536,   537,   538,
     539,   540,   664,   542,   543,   544,   545,     0,     0,     0,
       0,   546,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2025,   528,   529,   530,   531,   532,   533,   534,   535,
     536,   537,   538,   539,   540,   664,   542,   543,   544,   545,
       0,     0,     0,     0,   546,     0,     0,     0,     0,     0,
     990,   528,   529,   530,   531,   532,   533,   534,   535,   536,
     537,   538,   539,   540,   664,   542,   543,   544,   545,     0,
       0,     0,     0,   546,     0,     0,     0,     0,     0,  1042,
     528,   529,   530,   531,   532,   533,   534,   535,   536,   537,
     538,   539,   540,   664,   542,   543,   544,   545,     0,     0,
       0,     0,   546,     0,     0,     0,     0,     0,  1083,   528,
     529,   530,   531,   532,   533,   534,   535,   536,   537,   538,
     539,   540,   664,   542,   543,   544,   545,     0,     0,     0,
       0,   546,     0,     0,     0,     0,     0,  1123,   528,   529,
     530,   531,   532,   533,   534,   535,   536,   537,   538,   539,
     540,   664,   542,   543,   544,   545,     0,     0,     0,     0,
     546,     0,     0,     0,     0,     0,  1154,   528,   529,   530,
     531,   532,   533,   534,   535,   536,   537,   538,   539,   540,
     664,   542,   543,   544,   545,     0,     0,     0,     0,   546,
       0,     0,     0,     0,     0,  1172,   528,   529,   530,   531,
     532,   533,   534,   535,   536,   537,   538,   539,   540,   664,
     542,   543,   544,   545,     0,     0,     0,     0,   546,     0,
       0,     0,     0,     0,  1228,   528,   529,   530,   531,   532,
     533,   534,   535,   536,   537,   538,   539,   540,   664,   542,
     543,   544,   545,     0,     0,     0,     0,   546,     0,     0,
       0,     0,     0,  1362,   528,   529,   530,   531,   532,   533,
     534,   535,   536,   537,   538,   539,   540,   664,   542,   543,
     544,   545,     0,     0,     0,     0,   546,     0,     0,     0,
       0,     0,  1432,   528,   529,   530,   531,   532,   533,   534,
     535,   536,   537,   538,   539,   540,   664,   542,   543,   544,
     545,     0,     0,     0,     0,   546,     0,     0,     0,     0,
       0,  1433,   528,   529,   530,   531,   532,   533,   534,   535,
     536,   537,   538,   539,   540,   664,   542,   543,   544,   545,
       0,     0,     0,     0,   546,     0,     0,     0,     0,     0,
    1434,   528,   529,   530,   531,   532,   533,   534,   535,   536,
     537,   538,   539,   540,   664,   542,   543,   544,   545,     0,
       0,     0,     0,   546,     0,     0,     0,     0,     0,  1435,
     528,   529,   530,   531,   532,   533,   534,   535,   536,   537,
     538,   539,   540,   664,   542,   543,   544,   545,     0,     0,
       0,     0,   546,     0,     0,     0,     0,     0,  1697,   528,
     529,   530,   531,   532,   533,   534,   535,   536,   537,   538,
     539,   540,   664,   542,   543,   544,   545,     0,     0,     0,
       0,   546,     0,     0,     0,     0,     0,  1708,   528,   529,
     530,   531,   532,   533,   534,   535,   536,   537,   538,   539,
     540,   664,   542,   543,   544,   545,     0,     0,     0,     0,
     546,     0,     0,     0,     0,     0,  1745,   528,   529,   530,
     531,   532,   533,   534,   535,   536,   537,   538,   539,   540,
     664,   542,   543,   544,   545,     0,     0,     0,     0,   546,
       0,     0,     0,     0,     0,  1806,   528,   529,   530,   531,
     532,   533,   534,   535,   536,   537,   538,   539,   540,   664,
     542,   543,   544,   545,     0,     0,     0,     0,   546,     0,
       0,     0,     0,     0,  1821,   528,   529,   530,   531,   532,
     533,   534,   535,   536,   537,   538,   539,   540,   664,   542,
     543,   544,   545,     0,     0,     0,     0,   546,     0,     0,
       0,     0,     0,  1833,   528,   529,   530,   531,   532,   533,
     534,   535,   536,   537,   538,   539,   540,   664,   542,   543,
     544,   545,     0,     0,     0,     0,   546,     0,     0,     0,
       0,     0,  1869,   528,   529,   530,   531,   532,   533,   534,
     535,   536,   537,   538,   539,   540,   664,   542,   543,   544,
     545,     0,     0,     0,     0,   546,     0,     0,     0,     0,
       0,  1886,   528,   529,   530,   531,   532,   533,   534,   535,
     536,   537,   538,   539,   540,   664,   542,   543,   544,   545,
       0,     0,     0,     0,   546,     0,     0,     0,     0,     0,
    1895,   528,   529,   530,   531,   532,   533,   534,   535,   536,
     537,   538,   539,   540,   664,   542,   543,   544,   545,     0,
       0,     0,     0,   546,     0,     0,     0,     0,     0,  1896,
     528,   529,   530,   531,   532,   533,   534,   535,   536,   537,
     538,   539,   540,   664,   542,   543,   544,   545,     0,     0,
       0,     0,   546,     0,     0,     0,     0,     0,  1917,   528,
     529,   530,   531,   532,   533,   534,   535,   536,   537,   538,
     539,   540,   664,   542,   543,   544,   545,     0,     0,     0,
       0,   546,     0,     0,     0,     0,     0,  1965,   528,   529,
     530,   531,   532,   533,   534,   535,   536,   537,   538,   539,
     540,   664,   542,   543,   544,   545,     0,     0,     0,     0,
     546,     0,     0,     0,     0,     0,  2004,   528,   529,   530,
     531,   532,   533,   534,   535,   536,   537,   538,   539,   540,
     664,   542,   543,   544,   545,     0,     0,     0,     0,   546,
       0,     0,     0,     0,     0,  2023,   528,   529,   530,   531,
     532,   533,   534,   535,   536,   537,   538,   539,   540,   664,
     542,   543,   544,   545,     0,     0,     0,     0,   546,     0,
       0,     0,     0,     0,  2043,   528,   529,   530,   531,   532,
     533,   534,   535,   536,   537,   538,   539,   540,   664,   542,
     543,   544,   545,     0,     0,     0,     0,   546,     0,     0,
       0,     0,     0,  2044,   528,   529,   530,   531,   532,   533,
     534,   535,   536,   537,   538,   539,   540,   664,   542,   543,
     544,   545,     0,     0,     0,     0,   546,     0,     0,     0,
       0,     0,  2045,   528,   529,   530,   531,   532,   533,   534,
     535,   536,   537,   538,   539,   540,   664,   542,   543,   544,
     545,     0,     0,     0,     0,   546,     0,     0,     0,     0,
     665,   528,   529,   530,   531,   532,   533,   534,   535,   536,
     537,   538,   539,   540,   664,   542,   543,   544,   545,     0,
       0,     0,     0,   546,     0,     0,     0,     0,   862,   528,
     529,   530,   531,   532,   533,   534,   535,   536,   537,   538,
     539,   540,   664,   542,   543,   544,   545,     0,     0,     0,
       0,   546,     0,     0,     0,     0,  1799,   528,   529,   530,
     531,   532,   533,   534,   535,   536,   537,   538,   539,   540,
     664,   542,   543,   544,   545,     0,     0,     0,     0,   546,
       0,   690,     0,   691,   528,   529,   530,   531,   532,   533,
     534,   535,   536,   537,   538,   539,   540,   664,   542,   543,
     544,   545,     0,     0,     0,     0,   546,     0,     0,     0,
     920,   528,   529,   530,   531,   532,   533,   534,   535,   536,
     537,   538,   539,   540,   664,   542,   543,   544,   545,     0,
       0,     0,     0,   546,     0,     0,     0,   969,   528,   529,
     530,   531,   532,   533,   534,   535,   536,   537,   538,   539,
     540,   664,   542,   543,   544,   545,     0,     0,     0,     0,
     546,     0,     0,     0,  1104,   528,   529,   530,   531,   532,
     533,   534,   535,   536,   537,   538,   539,   540,   664,   542,
     543,   544,   545,     0,     0,     0,     0,   546,     0,     0,
       0,  1167,   528,   529,   530,   531,   532,   533,   534,   535,
     536,   537,   538,   539,   540,   664,   542,   543,   544,   545,
       0,     0,     0,     0,   546,     0,     0,     0,  1168,   528,
     529,   530,   531,   532,   533,   534,   535,   536,   537,   538,
     539,   540,   664,   542,   543,   544,   545,     0,     0,     0,
       0,   546,     0,     0,     0,  1173,   528,   529,   530,   531,
     532,   533,   534,   535,   536,   537,   538,   539,   540,   664,
     542,   543,   544,   545,     0,     0,     0,     0,   546,     0,
       0,     0,  1174,   528,   529,   530,   531,   532,   533,   534,
     535,   536,   537,   538,   539,   540,   664,   542,   543,   544,
     545,     0,     0,     0,     0,   546,     0,     0,     0,  1264,
     528,   529,   530,   531,   532,   533,   534,   535,   536,   537,
     538,   539,   540,   664,   542,   543,   544,   545,     0,     0,
       0,     0,   546,     0,     0,     0,  1275,   528,   529,   530,
     531,   532,   533,   534,   535,   536,   537,   538,   539,   540,
     664,   542,   543,   544,   545,     0,     0,     0,     0,   546,
       0,     0,     0,  1464,   528,   529,   530,   531,   532,   533,
     534,   535,   536,   537,   538,   539,   540,   664,   542,   543,
     544,   545,     0,     0,     0,     0,   546,     0,     0,     0,
    1539,   528,   529,   530,   531,   532,   533,   534,   535,   536,
     537,   538,   539,   540,   664,   542,   543,   544,   545,     0,
       0,     0,     0,   546,     0,     0,     0,  1586,   528,   529,
     530,   531,   532,   533,   534,   535,   536,   537,   538,   539,
     540,   664,   542,   543,   544,   545,     0,     0,     0,     0,
     546,     0,     0,     0,  1757,   528,   529,   530,   531,   532,
     533,   534,   535,   536,   537,   538,   539,   540,   664,   542,
     543,   544,   545,     0,     0,     0,     0,   546,     0,     0,
       0,  1792,   528,   529,   530,   531,   532,   533,   534,   535,
     536,   537,   538,   539,   540,   664,   542,   543,   544,   545,
       0,     0,     0,     0,   546,     0,     0,     0,  1807,   528,
     529,   530,   531,   532,   533,   534,   535,   536,   537,   538,
     539,   540,   664,   542,   543,   544,   545,     0,     0,     0,
       0,   546,     0,   735,   528,   529,   530,   531,   532,   533,
     534,   535,   536,   537,   538,   539,   540,   664,   542,   543,
     544,   545,     0,     0,     0,     0,   546,     0,   736,   528,
     529,   530,   531,   532,   533,   534,   535,   536,   537,   538,
     539,   540,   664,   542,   543,   544,   545,     0,     0,     0,
       0,   546,     0,   737,   528,   529,   530,   531,   532,   533,
     534,   535,   536,   537,   538,   539,   540,   664,   542,   543,
     544,   545,     0,     0,     0,     0,   546,     0,   739,   528,
     529,   530,   531,   532,   533,   534,   535,   536,   537,   538,
     539,   540,   664,   542,   543,   544,   545,     0,     0,     0,
       0,   546,     0,   740,   528,   529,   530,   531,   532,   533,
     534,   535,   536,   537,   538,   539,   540,   664,   542,   543,
     544,   545,     0,     0,     0,     0,   546,     0,   741,   528,
     529,   530,   531,   532,   533,   534,   535,   536,   537,   538,
     539,   540,   664,   542,   543,   544,   545,     0,     0,     0,
       0,   546,     0,   743,   528,   529,   530,   531,   532,   533,
     534,   535,   536,   537,   538,   539,   540,   664,   542,   543,
     544,   545,     0,     0,     0,     0,   546,     0,   744,   528,
     529,   530,   531,   532,   533,   534,   535,   536,   537,   538,
     539,   540,   664,   542,   543,   544,   545,     0,     0,     0,
       0,   546,     0,   745,   528,   529,   530,   531,   532,   533,
     534,   535,   536,   537,   538,   539,   540,   664,   542,   543,
     544,   545,     0,     0,     0,     0,   546,     0,   746,   528,
     529,   530,   531,   532,   533,   534,   535,   536,   537,   538,
     539,   540,   664,   542,   543,   544,   545,     0,     0,     0,
       0,   546,     0,   747,   528,   529,   530,   531,   532,   533,
     534,   535,   536,   537,   538,   539,   540,   664,   542,   543,
     544,   545,     0,     0,     0,     0,   546,     0,   748,   528,
     529,   530,   531,   532,   533,   534,   535,   536,   537,   538,
     539,   540,   664,   542,   543,   544,   545,     0,     0,     0,
       0,   546,     0,   749,   528,   529,   530,   531,   532,   533,
     534,   535,   536,   537,   538,   539,   540,   664,   542,   543,
     544,   545,     0,     0,     0,     0,   546,     0,   751,   528,
     529,   530,   531,   532,   533,   534,   535,   536,   537,   538,
     539,   540,   664,   542,   543,   544,   545,     0,     0,     0,
       0,   546,     0,   752,   528,   529,   530,   531,   532,   533,
     534,   535,   536,   537,   538,   539,   540,   664,   542,   543,
     544,   545,     0,     0,     0,     0,   546,     0,   753,   528,
     529,   530,   531,   532,   533,   534,   535,   536,   537,   538,
     539,   540,   664,   542,   543,   544,   545,     0,     0,     0,
       0,   546,     0,   813,   528,   529,   530,   531,   532,   533,
     534,   535,   536,   537,   538,   539,   540,   664,   542,   543,
     544,   545,     0,     0,     0,     0,   546,     0,   847,   528,
     529,   530,   531,   532,   533,   534,   535,   536,   537,   538,
     539,   540,   664,   542,   543,   544,   545,     0,     0,     0,
       0,   546,     0,   891,   528,   529,   530,   531,   532,   533,
     534,   535,   536,   537,   538,   539,   540,   664,   542,   543,
     544,   545,     0,     0,     0,     0,   546,     0,   909,   528,
     529,   530,   531,   532,   533,   534,   535,   536,   537,   538,
     539,   540,   664,   542,   543,   544,   545,     0,     0,     0,
       0,   546,     0,   910,   528,   529,   530,   531,   532,   533,
     534,   535,   536,   537,   538,   539,   540,   664,   542,   543,
     544,   545,     0,     0,     0,     0,   546,     0,   911,   528,
     529,   530,   531,   532,   533,   534,   535,   536,   537,   538,
     539,   540,   664,   542,   543,   544,   545,     0,     0,     0,
       0,   546,     0,   912,   528,   529,   530,   531,   532,   533,
     534,   535,   536,   537,   538,   539,   540,   664,   542,   543,
     544,   545,     0,     0,     0,     0,   546,     0,   918,   528,
     529,   530,   531,   532,   533,   534,   535,   536,   537,   538,
     539,   540,   664,   542,   543,   544,   545,     0,     0,     0,
       0,   546,     0,   919,   528,   529,   530,   531,   532,   533,
     534,   535,   536,   537,   538,   539,   540,   664,   542,   543,
     544,   545,     0,     0,     0,     0,   546,     0,   954,   528,
     529,   530,   531,   532,   533,   534,   535,   536,   537,   538,
     539,   540,   664,   542,   543,   544,   545,     0,     0,     0,
       0,   546,     0,   968,   528,   529,   530,   531,   532,   533,
     534,   535,   536,   537,   538,   539,   540,   664,   542,   543,
     544,   545,     0,     0,     0,     0,   546,     0,  1022,   528,
     529,   530,   531,   532,   533,   534,   535,   536,   537,   538,
     539,   540,   664,   542,   543,   544,   545,     0,     0,     0,
       0,   546,     0,  1026,   528,   529,   530,   531,   532,   533,
     534,   535,   536,   537,   538,   539,   540,   664,   542,   543,
     544,   545,     0,     0,     0,     0,   546,     0,  1038,   528,
     529,   530,   531,   532,   533,   534,   535,   536,   537,   538,
     539,   540,   664,   542,   543,   544,   545,     0,     0,     0,
       0,   546,     0,  1103,   528,   529,   530,   531,   532,   533,
     534,   535,   536,   537,   538,   539,   540,   664,   542,   543,
     544,   545,     0,     0,     0,     0,   546,     0,  1112,   528,
     529,   530,   531,   532,   533,   534,   535,   536,   537,   538,
     539,   540,   664,   542,   543,   544,   545,     0,     0,     0,
       0,   546,     0,  1113,   528,   529,   530,   531,   532,   533,
     534,   535,   536,   537,   538,   539,   540,   664,   542,   543,
     544,   545,     0,     0,     0,     0,   546,     0,  1114,   528,
     529,   530,   531,   532,   533,   534,   535,   536,   537,   538,
     539,   540,   664,   542,   543,   544,   545,     0,     0,     0,
       0,   546,     0,  1124,   528,   529,   530,   531,   532,   533,
     534,   535,   536,   537,   538,   539,   540,   664,   542,   543,
     544,   545,     0,     0,     0,     0,   546,     0,  1153,   528,
     529,   530,   531,   532,   533,   534,   535,   536,   537,   538,
     539,   540,   664,   542,   543,   544,   545,     0,     0,     0,
       0,   546,     0,  1155,   528,   529,   530,   531,   532,   533,
     534,   535,   536,   537,   538,   539,   540,   664,   542,   543,
     544,   545,     0,     0,     0,     0,   546,     0,  1156,   528,
     529,   530,   531,   532,   533,   534,   535,   536,   537,   538,
     539,   540,   664,   542,   543,   544,   545,     0,     0,     0,
       0,   546,     0,  1157,   528,   529,   530,   531,   532,   533,
     534,   535,   536,   537,   538,   539,   540,   664,   542,   543,
     544,   545,     0,     0,     0,     0,   546,     0,  1158,   528,
     529,   530,   531,   532,   533,   534,   535,   536,   537,   538,
     539,   540,   664,   542,   543,   544,   545,     0,     0,     0,
       0,   546,     0,  1159,   528,   529,   530,   531,   532,   533,
     534,   535,   536,   537,   538,   539,   540,   664,   542,   543,
     544,   545,     0,     0,     0,     0,   546,     0,  1160,   528,
     529,   530,   531,   532,   533,   534,   535,   536,   537,   538,
     539,   540,   664,   542,   543,   544,   545,     0,     0,     0,
       0,   546,     0,  1161,   528,   529,   530,   531,   532,   533,
     534,   535,   536,   537,   538,   539,   540,   664,   542,   543,
     544,   545,     0,     0,     0,     0,   546,     0,  1166,   528,
     529,   530,   531,   532,   533,   534,   535,   536,   537,   538,
     539,   540,   664,   542,   543,   544,   545,     0,     0,     0,
       0,   546,     0,  1263,   528,   529,   530,   531,   532,   533,
     534,   535,   536,   537,   538,   539,   540,   664,   542,   543,
     544,   545,     0,     0,     0,     0,   546,     0,  1274,   528,
     529,   530,   531,   532,   533,   534,   535,   536,   537,   538,
     539,   540,   664,   542,   543,   544,   545,     0,     0,     0,
       0,   546,     0,  1465,   528,   529,   530,   531,   532,   533,
     534,   535,   536,   537,   538,   539,   540,   664,   542,   543,
     544,   545,     0,     0,     0,     0,   546,     0,  1527,   528,
     529,   530,   531,   532,   533,   534,   535,   536,   537,   538,
     539,   540,   664,   542,   543,   544,   545,     0,     0,     0,
       0,   546,     0,  1538,   528,   529,   530,   531,   532,   533,
     534,   535,   536,   537,   538,   539,   540,   664,   542,   543,
     544,   545,     0,     0,     0,     0,   546,     0,  1647,   528,
     529,   530,   531,   532,   533,   534,   535,   536,   537,   538,
     539,   540,   664,   542,   543,   544,   545,     0,     0,     0,
       0,   546,     0,  1649,   528,   529,   530,   531,   532,   533,
     534,   535,   536,   537,   538,   539,   540,   664,   542,   543,
     544,   545,     0,     0,     0,     0,   546,     0,  1650,   528,
     529,   530,   531,   532,   533,   534,   535,   536,   537,   538,
     539,   540,   664,   542,   543,   544,   545,     0,     0,     0,
       0,   546,     0,  1655,   528,   529,   530,   531,   532,   533,
     534,   535,   536,   537,   538,   539,   540,   664,   542,   543,
     544,   545,     0,     0,     0,     0,   546,     0,  1698,   528,
     529,   530,   531,   532,   533,   534,   535,   536,   537,   538,
     539,   540,   664,   542,   543,   544,   545,     0,     0,     0,
       0,   546,     0,  1707,   528,   529,   530,   531,   532,   533,
     534,   535,   536,   537,   538,   539,   540,   664,   542,   543,
     544,   545,     0,     0,     0,     0,   546,     0,  1730,   528,
     529,   530,   531,   532,   533,   534,   535,   536,   537,   538,
     539,   540,   664,   542,   543,   544,   545,     0,     0,     0,
       0,   546,     0,  1791,   528,   529,   530,   531,   532,   533,
     534,   535,   536,   537,   538,   539,   540,   664,   542,   543,
     544,   545,     0,     0,     0,     0,   546,     0,  1854,   528,
     529,   530,   531,   532,   533,   534,   535,   536,   537,   538,
     539,   540,   664,   542,   543,   544,   545,     0,     0,     0,
       0,   546,     0,  1855,   528,   529,   530,   531,   532,   533,
     534,   535,   536,   537,   538,   539,   540,   664,   542,   543,
     544,   545,     0,     0,     0,     0,   546,     0,  1978,   528,
     529,   530,   531,   532,   533,   534,   535,   536,   537,   538,
     539,   540,   664,   542,   543,   544,   545,     0,     0,     0,
       0,   546,     0,  2020,   528,   529,   530,   531,   532,   533,
     534,   535,   536,   537,   538,   539,   540,   664,   542,   543,
     544,   545,     0,     0,     0,     0,   546
};

static const yytype_int16 yycheck[] =
{
       3,  1152,     3,     3,   147,   286,   187,   582,   583,  1148,
     134,   298,     4,   685,  1574,  1615,     4,  1617,    21,     4,
      48,   693,     4,    21,     5,     5,     4,     6,     4,   316,
      99,     4,   101,     4,     6,     4,  1776,     7,     6,     5,
       0,     4,     4,  1602,   242,    48,     9,     4,    97,     6,
     248,     6,     6,    54,    97,   242,   227,   228,     6,   149,
       6,   248,     4,     4,     4,   134,     4,   227,   228,     4,
     119,   243,    75,   227,   228,   247,   119,   248,    14,   239,
      83,     9,     9,   243,   174,    88,     7,     7,   157,    97,
     271,   272,   273,   129,   248,   382,    99,   384,     9,    84,
     190,   191,  1661,    94,   239,   392,    97,     9,     9,   240,
     146,     6,   227,   228,  1674,     9,   239,   248,   154,   155,
     156,   227,   228,   245,   160,   161,   248,     6,   309,   310,
     311,   134,     6,   248,    91,   135,   139,   140,   240,     6,
     227,   228,   248,     6,   147,   326,   248,    61,    62,    91,
      64,   179,    97,    95,    99,   158,     7,   227,   228,   101,
     102,   248,   104,   105,   669,     7,   227,   228,   236,   237,
      94,   174,     6,    97,  1914,    99,   179,   245,   248,   182,
     239,   123,   241,   244,   187,   188,   164,   165,   166,   167,
     162,   236,   237,     7,   162,   700,   240,     7,   227,   228,
     185,   227,   228,     7,   248,   174,   175,   240,   236,   242,
     715,   177,   174,   175,   243,   248,   189,     6,   723,   211,
     227,   228,   248,     6,   240,   134,   211,   236,   237,   211,
     139,   140,   248,   236,   243,   211,  1796,   238,     6,  1378,
     211,   248,   270,   222,   223,   239,   249,   244,   211,   252,
     253,   248,   280,   241,   246,   253,   284,     6,   243,   247,
     243,   243,   243,   243,   267,   174,   244,   270,   271,   272,
     273,   211,   243,   236,   237,   245,   239,   280,   241,   188,
     243,   284,   245,   286,   571,   239,   573,   574,   243,   243,
    1850,   212,   213,   214,   215,   243,   968,   969,   239,     4,
     240,   239,   242,   590,   239,   239,   309,   310,   311,     8,
     815,   239,   239,   241,   241,   236,   237,   245,   245,   239,
     239,   241,   241,   326,   245,   236,   237,   508,   239,   398,
     241,   242,   227,   228,   245,   236,   237,   239,   239,   241,
     241,   628,   236,   237,   245,   239,  1946,   241,   227,   228,
     240,   245,   242,   227,   228,   222,   223,   240,   227,   228,
     503,   212,   213,   214,   215,   248,   394,   395,   227,   228,
     212,   213,   214,   215,    91,   289,   290,    94,   665,   248,
      97,   241,   410,   297,   298,   240,   389,   390,   241,   248,
     245,   394,   395,   110,   236,   237,   227,   228,   212,   213,
     214,   215,   212,   213,   214,   215,   239,   410,   212,   213,
     214,   215,   240,   416,   227,   228,   240,   248,   242,   420,
     248,  1981,   236,   237,   248,   129,   236,   237,   133,   134,
     135,   136,   240,   239,   437,   248,   129,   227,   228,   240,
     248,   242,   146,   148,   513,   239,   151,   248,   227,   228,
     154,   155,   156,   146,   227,   228,   160,   161,   248,   462,
     129,   154,   155,   156,   239,   227,   228,   160,   161,   248,
     239,   112,   500,  2033,   243,   248,   240,   146,   242,   507,
     389,   243,   485,   239,   248,   154,   155,   156,   239,   492,
     493,   160,   161,   636,   497,    97,   499,   500,   501,   502,
     503,   245,   505,   247,   507,   508,   509,   510,   511,   512,
     239,   514,   245,   516,   512,   248,   514,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   227,   228,   239,   541,   238,
     244,   129,   239,    94,   547,   244,    97,   243,   227,   228,
     239,   244,   241,   227,   228,   239,   248,   241,   146,   110,
       4,   685,     6,   566,   567,     6,   154,   155,   156,   248,
     227,   228,   160,   161,   248,   244,   239,   227,   228,   866,
     649,   239,   582,   583,  1089,     8,  1091,   588,   497,   243,
     499,   248,   501,   502,   227,   228,   239,  1102,   248,   239,
     509,   510,   227,   228,   227,   228,   227,   228,   609,   612,
     613,   614,   232,   233,    94,   248,   239,    97,   238,    99,
     243,    91,   243,   248,    94,   239,   239,    97,   241,    99,
     110,   634,   635,   636,   637,   638,   639,   640,   641,   642,
     110,   644,   645,   646,   647,   648,   239,   650,   651,   652,
     653,   654,   236,   237,   657,   653,   244,   239,   659,   243,
     661,   243,   239,   666,   241,   734,   580,   581,   133,   134,
      91,   585,   673,    94,   139,   239,    97,    97,    99,  1351,
     227,   228,   229,   230,   231,   232,   233,   133,   134,   692,
     239,   238,    94,   139,   697,   243,   229,   230,   231,   232,
     233,   239,   244,   244,  1209,   238,   248,   248,   711,   712,
    1215,    97,   244,   240,   717,   242,   248,   720,   721,   843,
     239,   248,   241,   726,   243,   728,   635,   243,   637,   638,
     639,   640,   641,   642,     4,   644,   645,   646,   647,     6,
       7,   650,   651,   652,   239,   244,   241,   244,   243,   248,
     240,   248,   242,   243,   757,   244,   759,  1262,   244,   248,
     244,   244,   248,   244,   248,   248,  1438,   248,  1273,   244,
      94,   244,   244,   248,  1279,   248,   248,   244,  1450,     6,
       7,   248,   244,    94,  1935,   244,   248,   856,   791,   248,
     227,   228,    97,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   720,   244,   244,   244,   238,   248,   248,   248,   728,
     244,   244,   244,     4,   248,   853,   248,   244,  1967,   832,
     244,   248,   244,   244,   248,   244,   248,   248,     4,   248,
       4,  1992,   845,   244,   968,   969,     6,   248,   244,   244,
     853,   244,   248,   248,   244,   248,   244,   244,   248,   862,
     248,   248,   239,     6,   865,   244,   867,   868,   244,   248,
     244,  2010,   248,   244,   248,   244,   241,   248,   244,   248,
     881,   244,   248,   244,   244,   248,   244,   248,   248,   244,
     248,   244,   182,   248,   240,   248,   242,   243,   239,   239,
     239,   970,   239,     8,   239,   241,     6,     6,   239,   243,
     243,     9,   239,   239,   915,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   247,   960,   247,   243,   238,   243,   239,   239,   239,
     119,   239,   239,   239,   239,     4,   239,   239,   949,   243,
       6,   979,   243,   239,   243,   869,   243,   960,   243,   243,
     239,   239,   876,  1244,   239,   239,   880,   239,   239,     6,
     239,   974,     6,   241,     6,   241,   979,   267,   243,  1103,
    1104,   243,   243,   243,  1559,  1560,   989,   241,   241,     6,
     177,   994,  1020,  1021,   243,  1023,  1024,  1025,   239,  1027,
    1028,  1029,  1030,  1031,  1032,  1033,  1034,  1035,  1036,   239,
     239,   239,     6,   239,   239,     6,     6,  1020,  1021,   241,
    1023,  1024,  1025,   243,  1027,  1028,  1029,  1030,  1031,  1032,
    1033,  1034,  1035,  1036,     6,   243,  1039,     7,     6,   243,
       6,   243,    87,   244,   240,   248,     7,     6,   248,  1077,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   240,   243,  1095,   238,   238,
       4,   245,    64,     6,  1077,  1078,  1079,     7,     7,   240,
     239,     6,  1110,     7,     6,   994,   243,     7,     6,     6,
     174,   243,  1095,   242,   240,     6,   243,   245,   243,   243,
     390,   243,     7,     6,   241,  1019,   239,  1110,  1111,   243,
       4,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,  1130,
       6,     6,     6,   238,  1162,   240,     6,   242,  1425,  1263,
    1264,     7,  1429,   240,     7,   241,     7,     7,  1176,  1177,
    1178,     7,     7,     7,     7,     7,     7,     7,     7,  1162,
       7,     7,     7,     7,  1445,   243,     6,   240,   242,  1078,
    1079,   248,   248,  1176,  1177,  1178,   248,   248,   240,     7,
     243,   245,     7,   243,  1187,     4,     6,   245,   129,  1192,
       5,   244,   244,  1196,     7,     6,   245,  1225,     7,     7,
       7,   240,  1205,     9,  1207,   240,   248,  1210,   248,   240,
     248,   247,  1281,   242,  1283,   245,     7,   177,  1219,   244,
     243,   149,  1225,     6,     6,     4,   516,  1802,    46,    46,
     245,    46,    47,    48,    49,    50,    51,    52,    53,    54,
     239,  1244,   239,   245,    59,    60,    61,    62,     4,   245,
     239,   239,    67,    68,    69,  1283,     7,    72,     7,    74,
       7,  1264,   248,   240,  1292,     7,     7,     7,  1296,     6,
      85,   240,   248,    88,     7,     7,   566,   567,     7,     4,
    1283,     4,   109,  1192,     6,   243,   239,  1196,     6,  1292,
       7,     7,     7,  1296,     7,     7,  1205,     7,  1207,     7,
       7,  1210,     6,   243,     6,     6,     6,    97,  1451,  1452,
       7,     6,     4,     4,  1438,     4,   248,  1345,  1346,  1347,
     246,   240,   612,   613,   614,  1353,     6,   248,   243,   243,
     243,     6,   244,     6,   241,     7,     6,     6,   239,   239,
    1368,   243,  1345,  1346,  1347,     6,     6,   245,  1629,     6,
    1353,  1379,  1421,   242,     6,  1264,   248,     6,   123,  1387,
       6,     6,     6,   177,     6,  1368,     6,   657,     6,     6,
       6,     6,     6,     6,     6,     5,  1379,   248,   193,   194,
     195,   240,   240,     6,  1387,     4,     6,  1390,     4,   204,
       7,     6,     6,   208,     6,   210,     6,     6,     6,   173,
     243,   243,   692,     6,   243,   243,   243,   241,   243,     6,
    1479,   243,   243,  1537,   243,   248,     7,   243,   248,   243,
     243,   711,   243,     4,   240,     4,   248,   717,     6,  1457,
       6,     6,    95,     7,   239,   245,   248,   239,   239,   243,
       6,     6,  1445,     6,     6,     6,     5,   243,  1451,  1452,
     243,  1479,   240,     6,  1457,     6,   248,     6,     6,     6,
       6,   248,   240,  1377,   248,     6,     4,     6,  1471,     6,
     243,   248,     6,   243,     7,   243,  1479,     5,   244,     6,
       6,  1484,   243,     6,   243,     6,  1555,   244,     7,  1632,
     243,     6,     6,   172,   240,     6,   244,     7,     6,   244,
     244,   791,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   245,     6,     6,     6,   238,
    1548,  1645,   243,     6,  1811,     6,  1595,     6,     6,   240,
     244,     6,   175,  1602,  1603,     6,     6,   243,   243,     6,
     239,   244,   832,     6,   129,  1548,  1574,   243,  1551,  1552,
     244,   244,  1621,   243,     6,   845,   243,   243,  1839,  1559,
    1560,  1589,  1471,     6,     6,   243,   240,     6,     6,     6,
       6,  1574,   862,   244,     6,     6,   244,  1580,     6,  1493,
       6,     6,     6,     6,   243,   243,  1589,     6,     6,   243,
    1618,     6,     6,     6,  1597,     6,     6,  1600,  1948,  1272,
    1321,  1489,  1777,  1631,  1742,  1544,  1291,     3,     3,     3,
     705,     3,   561,  1900,  1615,  1618,  1617,  1326,  1798,  1418,
       3,  1625,  1625,  1452,    -1,  1602,  1629,   720,  1631,  1632,
      -1,   434,    -1,    -1,    -1,    -1,    -1,     4,     5,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1674,    -1,    -1,  1936,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1661,    -1,
      -1,  1575,  1576,  1577,  1578,  1579,  1580,    -1,    -1,    -1,
      -1,  1674,    -1,    -1,    -1,  1744,    -1,    -1,  1706,    46,
      47,    48,    49,    50,    51,    52,    53,    54,  1597,    -1,
      -1,  1600,    59,    60,    61,    62,    -1,    -1,    -1,   989,
      67,    68,    69,  1706,    -1,    72,    -1,    74,    -1,    -1,
      -1,    -1,    -1,  1782,    -1,  1718,    -1,    -1,    85,    -1,
      -1,    88,    -1,    -1,    -1,    -1,    -1,    -1,  1731,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1768,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1039,
    1778,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   126,
      -1,    -1,    -1,    -1,    -1,  1768,    -1,    -1,  1796,    -1,
      -1,    -1,    -1,    -1,    -1,  1778,    -1,    -1,    -1,    -1,
    1783,    -1,  1810,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1796,    -1,    -1,  1799,    -1,    -1,    -1,
      -1,    -1,  1802,    -1,    -1,    -1,    -1,  1810,    -1,    -1,
      -1,  1814,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1111,  1850,    -1,    -1,    -1,   193,   194,   195,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1839,   204,    -1,    -1,
      -1,   208,    -1,   210,   211,  1873,  1915,  1850,    -1,    -1,
      -1,    -1,    -1,    -1,   107,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1873,    -1,    -1,   240,    -1,   242,   243,    -1,    -1,    -1,
      -1,   134,    -1,    -1,  1885,   138,    -1,    -1,    -1,   142,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1187,    -1,    -1,
      -1,  1815,  1816,  1817,  1818,  1819,   159,   160,   161,    -1,
     163,   164,   165,    -1,   167,   168,   169,   170,   171,   172,
     173,    -1,   175,   176,   177,   178,    -1,    -1,    -1,   182,
      -1,    -1,    -1,    -1,    -1,  1938,  1939,  1940,  1941,  1942,
      -1,    -1,    -1,    -1,    -1,  1946,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1981,    -1,    -1,    -1,    -1,  1872,    -1,
      -1,    -1,  1876,    -1,    -1,    -1,    -1,  1968,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1981,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1997,   248,   249,   250,   251,   252,
      -1,    -1,    -1,    -1,    -1,  2033,    -1,    -1,  1922,    -1,
      -1,    -1,  1926,   266,   267,    -1,  2019,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   129,    -1,    -1,  1942,   282,
    2033,    -1,    -1,    -1,    -1,    -1,    -1,  2040,  2041,   292,
     293,    -1,    -1,    -1,    -1,   298,    -1,    -1,    -1,    -1,
      -1,  2054,    -1,    -1,    -1,   308,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1987,  1988,    -1,    -1,    -1,   331,    -1,
      -1,    -1,   335,   336,   337,    -1,   339,    -1,    -1,    -1,
     343,   344,   345,    -1,    -1,   348,    -1,   182,    -1,    -1,
    1390,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2019,    -1,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
      -1,  2040,  2041,   386,   238,    -1,    -1,   390,   391,    -1,
      -1,    -1,    -1,    -1,    -1,  2054,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   407,   408,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   249,    -1,    -1,   252,   421,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   267,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     443,    -1,    -1,    -1,   447,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   461,   462,
      -1,    -1,    -1,   466,    -1,    -1,   469,   470,   471,   472,
     473,   474,   475,   476,   477,   478,   479,   480,   481,   482,
     483,   484,   485,   486,   487,   488,   489,   490,   491,   492,
     493,    -1,   495,   496,    -1,   498,    -1,    -1,    -1,    -1,
      -1,   504,    -1,   506,    -1,    -1,    -1,    -1,   511,    -1,
      -1,  1551,  1552,   516,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     6,   527,   528,   529,   530,   531,   532,
     533,   534,   535,   536,   537,   538,   539,   540,   541,   542,
     543,   544,   545,   546,    -1,   548,   549,    -1,    -1,    -1,
      -1,    -1,   555,   556,   557,   390,    -1,    -1,    -1,    -1,
     563,   564,    -1,   566,   567,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     8,   585,   586,   587,    -1,    -1,    -1,   591,   592,
     593,   594,   595,   596,   597,   598,   599,    -1,    -1,    -1,
      -1,   604,    -1,   606,    -1,   608,    -1,    -1,    -1,   612,
     613,   614,   615,    -1,   617,   618,   619,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   462,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     643,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     485,    -1,    -1,    -1,   657,    -1,    -1,   492,   493,   662,
      -1,   664,    -1,    -1,   667,   668,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   676,    -1,    -1,   511,    -1,    -1,   682,
      -1,   516,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   692,
      -1,  1731,    -1,    -1,    -1,   698,   699,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   541,    -1,   711,    -1,
     713,   714,    -1,    -1,   717,   718,    -1,    -1,    -1,   722,
      -1,    -1,    -1,     6,    -1,    -1,   729,    -1,    -1,    -1,
     733,   566,   567,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,    -1,   755,    -1,   757,   238,   759,    -1,    -1,  1799,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1814,    -1,    -1,   612,   613,   614,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   791,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,    -1,    -1,    -1,
      -1,   238,    -1,   240,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   657,    -1,    -1,    -1,    -1,    -1,    -1,   832,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   845,    -1,    -1,    -1,    -1,    -1,    -1,   852,
      -1,    -1,    -1,   856,    -1,    -1,    -1,   692,    -1,   862,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   870,   871,    -1,
      -1,    -1,    -1,   876,    -1,    -1,   711,    -1,    -1,    -1,
      -1,    -1,   717,    -1,    -1,    -1,    -1,    -1,    -1,   892,
      -1,    -1,   895,    -1,    -1,    -1,    -1,    -1,  1938,  1939,
    1940,  1941,  1942,     6,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   914,    -1,   916,   917,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   757,    -1,   759,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   935,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,    -1,    -1,   956,    -1,   238,   791,  1997,     4,     5,
     963,   964,   965,   966,    -1,    -1,    -1,    -1,   971,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   985,   986,    -1,    -1,   989,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   832,    -1,    -1,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    -1,
     845,    -1,    -1,    59,    60,    61,    62,    -1,    -1,    -1,
      -1,    67,    68,    69,    -1,    -1,    72,   862,    74,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1039,    -1,    -1,    85,
      -1,    -1,    88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1055,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1065,  1066,  1067,    -1,    -1,    -1,    -1,  1072,
    1073,     6,  1075,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     126,  1084,  1085,    -1,    -1,    -1,    -1,    -1,    -1,  1092,
      -1,    -1,    -1,    -1,    -1,  1098,  1099,  1100,    -1,    -1,
      -1,    -1,    -1,  1106,  1107,    -1,    -1,    -1,  1111,    -1,
      -1,    -1,    -1,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,    -1,    -1,    -1,    -1,   238,    22,    23,    -1,  1142,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   193,   194,   195,
      -1,    -1,    -1,    -1,   989,    -1,    -1,    -1,   204,    -1,
      -1,    -1,   208,    -1,   210,   211,    -1,    -1,    -1,    -1,
      -1,    -1,  1175,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1187,    -1,    -1,    -1,    -1,    -1,
     236,   237,  1195,    -1,    -1,    -1,    -1,   243,    -1,   245,
      -1,    -1,    -1,    -1,  1039,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1216,  1217,    -1,    -1,    -1,  1221,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1235,    -1,    -1,  1238,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   134,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1265,    -1,    -1,  1268,  1269,    -1,    -1,    -1,
      -1,    -1,    -1,  1276,    -1,  1278,  1111,  1280,  1281,    -1,
      -1,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,    -1,
      -1,    -1,    -1,   238,    -1,   412,    -1,    -1,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,    -1,   224,   225,
      -1,    -1,    -1,    -1,   230,   231,    -1,    -1,    -1,  1352,
      -1,    -1,  1187,    -1,   240,   241,  1359,  1360,  1361,    -1,
      -1,    -1,    -1,    -1,    -1,  1368,    -1,  1370,    -1,    -1,
      -1,    -1,    -1,    -1,  1377,    -1,    -1,    -1,    -1,     4,
       5,    -1,    -1,    -1,    -1,    -1,    -1,  1390,    -1,    -1,
      -1,    -1,  1395,    -1,    -1,    -1,    -1,    -1,   505,    -1,
    1403,  1404,  1405,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1413,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1423,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      -1,    -1,    -1,    -1,    59,    60,    61,    62,    -1,    -1,
      -1,    -1,    67,    68,    69,   552,  1449,    72,    -1,    74,
      -1,    -1,  1455,  1456,    -1,    -1,    -1,    -1,    -1,    -1,
      85,    -1,    -1,    88,   350,   351,   352,    -1,    -1,    -1,
     356,   357,   358,   359,   360,   361,   362,    -1,   364,    -1,
      -1,  1484,   368,   369,    -1,    -1,   372,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   385,
      -1,   126,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1519,  1520,  1521,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1533,  1534,  1535,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1546,    -1,    -1,    -1,    -1,  1551,  1552,
    1553,    -1,  1555,    -1,    -1,  1390,    -1,    -1,  1561,  1562,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   193,   194,
     195,    -1,    -1,    -1,    -1,    -1,    -1,  1580,    -1,   204,
      -1,  1584,    -1,   208,    -1,   210,   211,    -1,    -1,    -1,
      -1,    -1,  1595,    -1,    -1,  1598,    -1,    -1,    -1,  1602,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1611,  1612,
      -1,  1614,    -1,    -1,    -1,    -1,    -1,    -1,   243,  1622,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1638,    -1,    -1,   524,    -1,
    1643,  1644,    -1,    -1,     6,    -1,    -1,    -1,    -1,  1484,
    1653,    -1,    -1,  1656,  1657,    -1,   763,   764,   765,   766,
     767,   768,   769,   770,   771,   772,   773,    -1,   775,   776,
     777,   778,    -1,   780,   781,   782,   783,    -1,    -1,    -1,
      -1,  1684,    -1,    -1,    -1,    -1,    -1,   794,    -1,   796,
      -1,     4,     5,    -1,    -1,    -1,   803,  1700,    -1,    -1,
     807,   808,    -1,    -1,    -1,    -1,  1709,    -1,    -1,   816,
      -1,    -1,    -1,    -1,    -1,  1718,  1551,  1552,    -1,    -1,
      -1,    -1,    -1,    -1,  1727,  1728,    -1,    -1,  1731,    -1,
      -1,    -1,    -1,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    -1,    -1,    -1,  1580,    59,    60,    61,    62,
      -1,    -1,    -1,    -1,    67,    68,    69,    -1,    -1,    72,
      -1,    74,  1765,  1766,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    85,    -1,    -1,    88,    -1,    -1,  1781,    -1,
      -1,  1784,    -1,    -1,    -1,    -1,  1789,  1790,    -1,    -1,
      -1,    -1,    -1,     6,    -1,    -1,  1799,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1814,    -1,   126,   921,   922,   923,    -1,    -1,  1822,
     927,   928,    -1,    -1,   931,   932,   933,   934,    -1,   936,
      -1,    -1,    -1,    -1,   941,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1847,    -1,    -1,    -1,    -1,    -1,
    1853,    -1,    -1,  1856,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,    -1,    -1,    -1,    -1,   238,    -1,  1881,    -1,
     193,   194,   195,  1718,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   204,    -1,    -1,    -1,   208,  1731,   210,   211,    -1,
      -1,    -1,    -1,  1906,  1907,    -1,    -1,    -1,    -1,    -1,
    1017,  1018,    -1,    -1,    -1,  1918,  1919,  1920,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1933,    -1,    -1,    -1,    -1,  1938,  1939,  1940,  1941,  1942,
      -1,    -1,    -1,    -1,    -1,  1948,    -1,    -1,    -1,  1952,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   844,    -1,
      -1,    -1,    -1,    -1,  1799,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1979,    -1,    -1,  1814,
      -1,  1984,  1985,  1986,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1997,    -1,    -1,    -1,    -1,    -1,
      -1,  1108,    -1,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,    -1,  2025,  2026,  2027,   238,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,    -1,    -1,    -1,    -1,    10,    11,    12,
      -1,    -1,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    55,    56,    57,    58,    -1,    -1,    -1,    -1,
      63,     6,    -1,  1938,  1939,  1940,  1941,  1942,    -1,    -1,
      -1,    -1,    75,    76,    77,    -1,    -1,    -1,    -1,    -1,
      83,    84,    -1,    86,    -1,  1011,    -1,    -1,    91,    -1,
      -1,    94,    -1,    -1,    97,    -1,    99,    -1,    -1,    -1,
    1247,    -1,    -1,   106,    -1,    -1,    -1,   110,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   119,    -1,   121,    -1,
      -1,   124,  1997,   126,    -1,    -1,    -1,    -1,    -1,    -1,
     133,   134,   135,   136,   137,  1282,    -1,   140,   141,   142,
     143,   144,    -1,    -1,    -1,   148,    -1,    -1,   151,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1310,  1311,  1312,  1313,  1314,    -1,    -1,
    1096,    -1,  1319,  1320,    -1,  1322,    -1,  1324,    -1,    -1,
      -1,    -1,    -1,  1330,    -1,    -1,    -1,    -1,    -1,   192,
      -1,    -1,    -1,   196,   197,  1342,    -1,    -1,   201,   202,
     203,    -1,   205,   206,   207,    -1,    -1,    -1,   211,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   227,   228,    -1,    -1,    -1,    -1,
      -1,   234,    -1,    -1,    -1,    -1,   239,    -1,    -1,    -1,
     243,    -1,    -1,   246,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     6,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1409,    -1,  1411,    -1,    -1,    -1,  1415,    -1,
    1417,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,    -1,
      -1,    -1,    -1,   238,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1451,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,    -1,    -1,    -1,    -1,    10,
      11,    12,  1248,  1249,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,     6,    -1,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    -1,    -1,    -1,    67,    68,    69,    -1,
      -1,    72,    -1,    74,    75,    76,    77,    -1,    -1,  1536,
      -1,    -1,    83,    84,    85,    86,    -1,    88,    -1,    -1,
      91,    -1,    -1,    94,    -1,    -1,    97,    -1,    99,  1335,
      -1,    -1,    -1,    -1,    -1,   106,    -1,    -1,    -1,   110,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   119,    -1,
     121,    -1,    -1,   124,    -1,   126,    -1,    -1,    -1,    -1,
      -1,    -1,   133,   134,   135,   136,   137,    -1,    -1,   140,
     141,   142,   143,   144,    -1,    -1,    -1,   148,    -1,    -1,
     151,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,    -1,
      -1,    -1,    -1,   238,    -1,    -1,    -1,  1634,    -1,    -1,
    1637,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   192,   193,   194,   195,   196,   197,    -1,    -1,    -1,
     201,   202,   203,   204,   205,   206,   207,   208,    -1,   210,
     211,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1675,  1676,
       6,    -1,    -1,    -1,    -1,    -1,   227,   228,    -1,    -1,
      -1,    -1,    -1,   234,    -1,    -1,    -1,    -1,   239,    -1,
      -1,    -1,   243,    -1,    -1,   246,    -1,  1483,    -1,    -1,
      -1,    -1,    -1,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,    -1,    -1,    -1,    -1,   238,    -1,    -1,  1735,  1736,
       3,     4,     5,    -1,    -1,    -1,    -1,    10,    11,    12,
      -1,    -1,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    -1,  1779,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    -1,    -1,    -1,    67,    68,    69,    -1,    -1,    72,
      -1,    74,    75,    76,    77,    -1,    -1,    -1,    -1,    -1,
      83,    84,    85,    86,    -1,    88,    -1,    -1,    91,    -1,
      -1,    94,    -1,    -1,    97,    -1,    99,    -1,    -1,    -1,
      -1,    -1,    -1,   106,    -1,    -1,    -1,   110,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   119,    -1,   121,    -1,
      -1,   124,    -1,   126,    -1,    -1,    -1,    -1,    -1,    -1,
     133,   134,   135,   136,   137,     6,    -1,   140,   141,   142,
     143,   144,    -1,    -1,    -1,   148,    -1,    -1,   151,    -1,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,    -1,    -1,
      -1,    -1,   238,     6,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   192,
     193,   194,   195,   196,   197,    -1,     6,    -1,   201,   202,
     203,   204,   205,   206,   207,   208,    -1,   210,   211,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   227,   228,    -1,    -1,    -1,    -1,
      -1,   234,    -1,    -1,    -1,    -1,   239,    -1,    -1,    -1,
     243,    -1,    -1,   246,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,    -1,     7,    -1,    -1,    10,    11,    12,    -1,  2006,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    -1,
      -1,    -1,    67,    68,    69,    -1,    -1,    72,    -1,    74,
      75,    76,    77,    -1,    -1,    -1,    -1,    -1,    83,    84,
      85,    86,    -1,    88,    -1,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,    -1,    -1,    -1,    -1,   238,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   126,    -1,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,    -1,    -1,    -1,    -1,   238,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,    -1,    -1,    -1,    -1,   238,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     6,    -1,    -1,    -1,
     185,    -1,    -1,    -1,    -1,    -1,    -1,   192,   193,   194,
     195,   196,    -1,    -1,    -1,    -1,   201,   202,   203,   204,
     205,   206,   207,   208,    -1,   210,   211,   212,   213,   214,
     215,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   227,   228,    -1,    -1,    -1,    -1,    -1,   234,
      -1,   236,   237,    -1,   239,    -1,   241,     3,     4,     5,
     245,   246,    -1,    -1,    10,    11,    12,    -1,    -1,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,
      56,    57,    58,    -1,    -1,    -1,    -1,    63,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,
      76,    77,    -1,    -1,    -1,    -1,    -1,    83,    84,    -1,
      86,    -1,    -1,    -1,    -1,    91,    -1,    -1,    94,    -1,
      -1,    97,    -1,    99,    -1,    -1,    -1,    -1,    -1,    -1,
     106,    -1,    -1,    -1,   110,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   119,    -1,   121,    -1,    -1,   124,    -1,
     126,    -1,    -1,    -1,    -1,    -1,    -1,   133,   134,   135,
     136,   137,    -1,    -1,   140,   141,   142,   143,   144,    -1,
      -1,    -1,   148,    -1,    -1,   151,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,    -1,    -1,    -1,    -1,   238,    -1,
      -1,    -1,    -1,     6,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   192,    -1,    -1,    -1,
     196,   197,    -1,    -1,    -1,   201,   202,   203,    -1,   205,
     206,   207,    -1,    -1,    -1,   211,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   227,   228,    -1,    -1,    -1,    -1,    -1,   234,    -1,
      -1,    -1,    -1,   239,     3,     4,    -1,   243,    -1,    -1,
     246,    10,    11,    12,    -1,    -1,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    55,    56,    57,    58,
      -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    75,    76,    77,    -1,
      -1,    -1,    -1,    -1,    83,    84,    -1,    86,    -1,    -1,
      -1,    -1,    91,    -1,    -1,    94,    -1,    -1,    97,    -1,
      99,    -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,    -1,
      -1,   110,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     119,    -1,   121,    -1,    -1,   124,    -1,   126,    -1,    -1,
      -1,    -1,    -1,    -1,   133,   134,   135,   136,   137,    -1,
      -1,   140,   141,   142,   143,   144,    -1,    -1,    -1,   148,
      -1,    -1,   151,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,    -1,    -1,    -1,    -1,   238,    -1,    -1,    -1,    -1,
       6,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   192,    -1,    -1,    -1,   196,   197,    -1,
      -1,    -1,   201,   202,   203,    -1,   205,   206,   207,    -1,
      -1,    -1,   211,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   227,   228,
      -1,    -1,    -1,    -1,    -1,   234,    -1,    -1,    -1,    -1,
     239,     3,     4,    -1,   243,   244,    -1,   246,    10,    11,
      12,    -1,    -1,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    55,    56,    57,    58,    -1,    -1,    -1,
      -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    75,    76,    77,    -1,    -1,    -1,    -1,
      -1,    83,    84,    -1,    86,    -1,    -1,    -1,    -1,    91,
      -1,    -1,    94,    -1,    -1,    97,    -1,    99,    -1,    -1,
      -1,    -1,    -1,    -1,   106,    -1,    -1,    -1,   110,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   119,    -1,   121,
      -1,    -1,   124,    -1,   126,    -1,    -1,    -1,    -1,    -1,
      -1,   133,   134,   135,   136,   137,    -1,    -1,   140,   141,
     142,   143,   144,    -1,    -1,    -1,   148,    -1,    -1,   151,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,    -1,    -1,
      -1,    -1,   238,    -1,    -1,    -1,    -1,     6,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     192,    -1,    -1,    -1,   196,   197,    -1,    -1,    -1,   201,
     202,   203,    -1,   205,   206,   207,    -1,    -1,    -1,   211,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   227,   228,    -1,    -1,    -1,
      -1,    -1,   234,    -1,    -1,    -1,    -1,   239,     3,     4,
      -1,   243,    -1,    -1,   246,    10,    11,    12,    -1,    -1,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      55,    56,    57,    58,    -1,    -1,    -1,    -1,    63,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      75,    76,    77,    -1,    -1,    -1,    -1,    -1,    83,    84,
      -1,    86,    -1,    -1,    -1,    -1,    91,    -1,    -1,    94,
      -1,    -1,    97,    -1,    99,    -1,    -1,    -1,    -1,    -1,
      -1,   106,    -1,    -1,    -1,   110,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   119,    -1,   121,    -1,    -1,   124,
      -1,   126,    -1,    -1,    -1,    -1,    -1,    -1,   133,   134,
     135,   136,   137,    -1,    -1,   140,   141,   142,   143,   144,
      -1,    -1,    -1,   148,    -1,    -1,   151,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,    -1,    -1,    -1,    -1,   238,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   192,    -1,    -1,
      -1,   196,   197,    -1,    -1,    -1,   201,   202,   203,    -1,
     205,   206,   207,    -1,    -1,    -1,   211,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   227,   228,    -1,    -1,    -1,    -1,    -1,   234,
      -1,    -1,    -1,    -1,   239,     3,     4,    -1,   243,    -1,
      -1,   246,    10,    11,    12,    -1,    -1,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    56,    57,
      58,    -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,    76,    77,
      -1,    -1,    13,    14,    -1,    83,    84,    -1,    86,    -1,
      -1,    -1,    -1,    91,    -1,    -1,    94,    -1,    -1,    97,
      -1,    99,    -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,
      -1,    -1,   110,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   119,    -1,   121,    -1,    -1,   124,    -1,   126,    -1,
      -1,    -1,    -1,    -1,    -1,   133,   134,   135,   136,   137,
      -1,    -1,   140,   141,   142,   143,   144,    -1,    -1,    -1,
     148,    -1,    -1,   151,    -1,    -1,    -1,    -1,    -1,    -1,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,    -1,    -1,    -1,   107,   108,   109,   110,
      -1,    -1,   113,    -1,    -1,    -1,    -1,    -1,   119,   120,
      -1,    -1,   123,   124,   192,   126,   127,    -1,   196,   197,
      -1,    -1,    -1,   201,   202,   203,    -1,   205,   206,   207,
      -1,    -1,    -1,   211,   145,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   227,
     228,    -1,    -1,    -1,    -1,    -1,   234,    -1,   169,   170,
     171,   239,     3,     4,    -1,   243,    -1,    -1,   246,    10,
      11,    12,    -1,    -1,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    55,    56,    57,    58,    -1,    -1,
      -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   244,    75,    76,    77,    -1,    -1,    13,
      14,    -1,    83,    84,    -1,    86,    -1,    -1,    -1,    -1,
      91,    -1,    -1,    94,    -1,    -1,    97,    -1,    99,    -1,
      -1,    -1,    -1,    -1,    -1,   106,    -1,    -1,    -1,   110,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   119,    -1,
     121,    -1,    -1,   124,    -1,   126,    -1,    -1,    -1,    -1,
      -1,    -1,   133,   134,   135,   136,   137,    -1,    -1,   140,
     141,   142,   143,   144,    -1,    -1,    -1,   148,    -1,    -1,
     151,    -1,    -1,    -1,    -1,    -1,    -1,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
      -1,    -1,    -1,   107,   108,   109,   110,    -1,    -1,   113,
      -1,    -1,    -1,    -1,    -1,   119,   120,    -1,    -1,   123,
     124,   192,   126,   127,    -1,   196,   197,    -1,    -1,    -1,
     201,   202,   203,    -1,   205,   206,   207,    -1,    -1,    -1,
     211,   145,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   227,   228,    -1,    -1,
      -1,    -1,    -1,   234,    -1,   169,   170,   171,   239,     3,
       4,    -1,    -1,   244,    -1,   246,    10,    11,    12,    -1,
      -1,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    55,    56,    57,    58,    -1,    -1,    -1,    -1,    63,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     244,    75,    76,    77,    -1,    -1,    13,    14,    -1,    83,
      84,    -1,    86,    -1,    -1,    -1,    -1,    91,    -1,    -1,
      94,    -1,    -1,    97,    -1,    99,    -1,    -1,    -1,    -1,
      -1,    -1,   106,    -1,    -1,    -1,   110,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   119,    -1,   121,    -1,    -1,
     124,    -1,   126,    -1,    -1,    -1,    -1,    -1,    -1,   133,
     134,   135,   136,   137,    -1,    -1,   140,   141,   142,   143,
     144,    -1,    -1,    -1,   148,    -1,    -1,   151,    -1,    -1,
      -1,    -1,    -1,    -1,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,    -1,    -1,    -1,
     107,   108,   109,   110,    -1,    -1,   113,    -1,    -1,    -1,
      -1,    -1,   119,   120,    -1,    -1,   123,   124,   192,   126,
     127,    -1,   196,   197,    -1,    -1,    -1,   201,   202,   203,
      -1,   205,   206,   207,    -1,    -1,    -1,   211,   145,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   227,   228,    -1,    -1,    -1,    -1,    -1,
     234,    -1,   169,   170,   171,   239,     3,     4,    -1,   243,
      -1,    -1,   246,    10,    11,    12,    -1,    -1,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    56,
      57,    58,    -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   244,    75,    76,
      77,    -1,    -1,    13,    14,    -1,    83,    84,    -1,    86,
      -1,    -1,    -1,    -1,    91,    -1,    -1,    94,    -1,    -1,
      97,    -1,    99,    -1,    -1,    -1,    -1,    -1,    -1,   106,
      -1,    -1,    -1,   110,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   119,    -1,   121,    -1,    -1,   124,    -1,   126,
      -1,    -1,    -1,    -1,    -1,    -1,   133,   134,   135,   136,
     137,    -1,    -1,   140,   141,   142,   143,   144,    -1,    -1,
      -1,   148,    -1,    -1,   151,    -1,    -1,    -1,    -1,    -1,
      -1,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,    -1,    -1,    -1,   107,   108,   109,
     110,    -1,    -1,   113,    -1,    -1,    -1,    -1,    -1,   119,
     120,    -1,    -1,   123,   124,   192,   126,   127,    -1,   196,
     197,    -1,    -1,    -1,   201,   202,   203,    -1,   205,   206,
     207,    -1,    -1,    -1,   211,   145,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     227,   228,    -1,    -1,    -1,    -1,    -1,   234,    -1,   169,
     170,   171,   239,     3,     4,    -1,   243,    -1,    -1,   246,
      10,    11,    12,    -1,    -1,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    55,    56,    57,    58,    -1,
      -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   244,    75,    76,    77,    -1,    -1,
      13,    14,    -1,    83,    84,    -1,    86,    -1,    -1,    -1,
      -1,    91,    -1,    -1,    94,    -1,    -1,    97,    -1,    99,
      -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,    -1,    -1,
     110,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   119,
      -1,   121,    -1,    -1,   124,    -1,   126,    -1,    -1,    -1,
      -1,    -1,    -1,   133,   134,   135,   136,   137,    -1,    -1,
     140,   141,   142,   143,   144,    -1,    -1,    -1,   148,    -1,
      -1,   151,    -1,    -1,    -1,    -1,    -1,    -1,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,    -1,    -1,    -1,   107,   108,   109,   110,    -1,    -1,
     113,    -1,    -1,    -1,    -1,    -1,   119,   120,    -1,    -1,
     123,   124,   192,   126,   127,    -1,   196,   197,    -1,    -1,
      -1,   201,   202,   203,    -1,   205,   206,   207,    -1,    -1,
      -1,   211,   145,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   227,   228,    -1,
      -1,    -1,    -1,    -1,   234,    -1,   169,   170,   171,   239,
       3,     4,    -1,   243,    -1,    -1,   246,    10,    11,    12,
      -1,    -1,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    55,    56,    57,    58,    -1,    -1,    -1,    -1,
      63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   244,    75,    76,    77,    -1,    -1,    13,    14,    -1,
      83,    84,    -1,    86,    -1,    -1,    -1,    -1,    91,    -1,
      -1,    94,    -1,    -1,    97,    -1,    99,    -1,    -1,    -1,
      -1,    -1,    -1,   106,    -1,    -1,    -1,   110,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   119,    -1,   121,    -1,
      -1,   124,    -1,   126,    -1,    -1,    -1,    -1,    -1,    -1,
     133,   134,   135,   136,   137,    -1,    -1,   140,   141,   142,
     143,   144,    -1,    -1,    -1,   148,    -1,    -1,   151,    -1,
      -1,    -1,    -1,    -1,    -1,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,    -1,    -1,
      -1,   107,   108,   109,   110,    -1,    -1,   113,    -1,    -1,
      -1,    -1,    -1,   119,   120,    -1,    -1,   123,   124,   192,
     126,   127,    -1,   196,   197,    -1,    -1,    -1,   201,   202,
     203,    -1,   205,   206,   207,    -1,    -1,    -1,   211,   145,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   227,   228,    -1,    -1,    -1,    -1,
      -1,   234,    -1,   169,   170,   171,   239,     3,     4,    -1,
     243,    -1,    -1,   246,    10,    11,    12,    -1,    -1,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,
      56,    57,    58,    -1,    -1,    -1,    -1,    63,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   244,    75,
      76,    77,    -1,    -1,    13,    14,    -1,    83,    84,    -1,
      86,    -1,    -1,    -1,    -1,    91,    -1,    -1,    94,    -1,
      -1,    97,    -1,    99,    -1,    -1,    -1,    -1,    -1,    -1,
     106,    -1,    -1,    -1,   110,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   119,    -1,   121,    -1,    -1,   124,    -1,
     126,    -1,    -1,    -1,    -1,    -1,    -1,   133,   134,   135,
     136,   137,    -1,    -1,   140,   141,   142,   143,   144,    -1,
      -1,    -1,   148,    -1,    -1,   151,    -1,    -1,    -1,    -1,
      -1,    -1,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,    -1,    -1,    -1,   107,   108,
     109,   110,    -1,    -1,   113,     7,     8,    -1,    -1,    -1,
     119,   120,    -1,    -1,   123,   124,   192,   126,   127,    -1,
     196,   197,    -1,    -1,    -1,   201,   202,   203,    -1,   205,
     206,   207,    -1,    -1,    -1,   211,   145,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   227,   228,    -1,    -1,    -1,    -1,    -1,   234,    -1,
     169,   170,   171,   239,     3,     4,    -1,   243,    -1,    -1,
     246,    10,    11,    12,    -1,    -1,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    55,    56,    57,    58,
      -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   244,    75,    76,    77,    -1,
      -1,    -1,    -1,    -1,    83,    84,    -1,    86,    -1,    -1,
      -1,    -1,    91,    -1,    -1,    94,    -1,    -1,    97,    -1,
      99,    -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,    -1,
      -1,   110,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     119,    -1,   121,    -1,    -1,   124,    -1,   126,    -1,    -1,
      -1,    -1,    -1,    -1,   133,   134,   135,   136,   137,    -1,
      -1,   140,   141,   142,   143,   144,    -1,    -1,    -1,   148,
      -1,    -1,   151,    -1,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,    -1,    -1,    -1,    -1,   238,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   192,    -1,    -1,    -1,   196,   197,    -1,
      -1,    -1,   201,   202,   203,    -1,   205,   206,   207,    -1,
      -1,    -1,   211,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   227,   228,
      -1,    -1,    -1,    -1,    -1,   234,     3,     4,     5,    -1,
     239,    -1,    -1,    10,    11,    12,    -1,   246,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,     7,    -1,    -1,    -1,    -1,    -1,    -1,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    -1,    -1,    -1,
      67,    68,    69,    -1,    -1,    72,    -1,    74,    75,    76,
      77,    -1,    -1,    -1,    -1,    -1,    83,    84,    85,    86,
      -1,    88,     3,     4,     5,    -1,    -1,    -1,    -1,    10,
      11,    12,    -1,    -1,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    -1,    -1,    -1,    67,    68,    69,    -1,
      -1,    72,    -1,    74,    75,    76,    77,    -1,    -1,    -1,
      -1,    -1,    83,    84,    85,    86,    -1,    88,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   192,   193,   194,   195,   196,
      -1,    -1,    -1,    -1,   201,   202,   203,   204,   205,   206,
     207,   208,    -1,   210,   211,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     227,   228,    -1,    -1,    -1,    -1,    -1,   234,    -1,    -1,
      -1,    -1,   239,    -1,    -1,    -1,   243,    -1,    -1,   246,
      -1,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,    -1,
      -1,    -1,    -1,   238,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   192,   193,   194,   195,   196,    -1,    -1,    -1,    -1,
     201,   202,   203,   204,   205,   206,   207,   208,    -1,   210,
     211,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   227,   228,    -1,    -1,
      -1,    -1,    -1,   234,    -1,    -1,    -1,    -1,   239,     3,
       4,     5,   243,    -1,    -1,   246,    10,    11,    12,    -1,
      -1,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,     8,    -1,    -1,    -1,    -1,
      -1,    -1,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      -1,    -1,    -1,    67,    68,    69,    -1,    -1,    72,    -1,
      74,    75,    76,    77,    -1,    -1,    -1,    -1,    -1,    83,
      84,    85,    86,    -1,    88,     3,     4,     5,    -1,    -1,
      -1,    -1,    10,    11,    12,    -1,    -1,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    -1,    -1,    -1,    67,
      68,    69,    -1,    -1,    72,    -1,    74,    75,    76,    77,
      -1,    -1,    -1,    -1,    -1,    83,    84,    85,    86,    -1,
      88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   192,   193,
     194,   195,   196,    -1,    -1,    -1,    -1,   201,   202,   203,
     204,   205,   206,   207,   208,    -1,   210,   211,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   227,   228,    -1,    -1,    -1,    -1,    -1,
     234,    -1,    -1,    -1,    -1,   239,    -1,    -1,    -1,   243,
      -1,    -1,   246,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,    -1,    -1,    -1,    -1,   238,    -1,    -1,    -1,    -1,
       8,    -1,    -1,    -1,   192,   193,   194,   195,   196,    -1,
      -1,    -1,    -1,   201,   202,   203,   204,   205,   206,   207,
     208,    -1,   210,   211,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   227,
     228,    -1,    -1,    -1,    -1,    -1,   234,     3,     4,    -1,
      -1,   239,    -1,    -1,    10,    11,    12,    -1,   246,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    -1,     8,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,
      56,    57,    58,    -1,    -1,    -1,    -1,    63,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,
      76,    77,    -1,    -1,     3,     4,    -1,    83,    84,    -1,
      86,    10,    11,    12,    -1,    -1,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    55,    56,    57,    58,
      -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    75,    76,    77,    -1,
      -1,    -1,    -1,    -1,    83,    84,    -1,    86,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,    -1,    -1,    -1,    -1,
     238,    -1,    -1,    -1,    -1,    -1,   192,    -1,    -1,    -1,
     196,    -1,    -1,    -1,    -1,   201,   202,   203,    -1,   205,
     206,   207,    -1,    -1,    -1,   211,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   227,   228,    -1,    -1,    -1,    -1,    -1,   234,    -1,
      -1,    -1,    -1,   239,    -1,    -1,    -1,   243,    -1,    -1,
     246,    -1,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
      -1,    -1,    -1,   192,   238,    -1,    -1,   196,    -1,    -1,
      -1,     8,   201,   202,   203,    -1,   205,   206,   207,    -1,
      -1,    -1,   211,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   227,   228,
      -1,    -1,    -1,    -1,    -1,   234,    -1,    -1,    -1,    -1,
     239,     3,     4,    -1,   243,    -1,    -1,   246,    10,    11,
      12,    -1,    -1,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,     8,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    55,    56,    57,    58,    -1,    -1,    -1,
      -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    75,    76,    77,    -1,    -1,    -1,    -1,
      -1,    83,    84,    -1,    86,     3,     4,    -1,     6,    -1,
      -1,    -1,    10,    11,    12,    -1,    -1,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    56,    57,
      58,    -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,    76,    77,
      -1,    -1,    -1,    -1,    -1,    83,    84,    -1,    86,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,    -1,    -1,    -1,
     192,   238,    -1,    -1,   196,    -1,    -1,    -1,    -1,   201,
     202,   203,    -1,   205,   206,   207,    -1,    -1,    -1,   211,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   227,   228,    -1,    -1,    -1,
      -1,    -1,   234,    -1,    -1,    -1,    -1,   239,   240,    -1,
      -1,    -1,    -1,    -1,   246,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,    -1,    -1,    -1,    -1,   238,    -1,    -1,
      -1,    -1,    -1,    -1,   192,    -1,    -1,     8,   196,    -1,
      -1,    -1,    -1,   201,   202,   203,    -1,   205,   206,   207,
      -1,    -1,    -1,   211,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   227,
     228,    -1,    -1,    -1,    -1,    -1,   234,     3,     4,    -1,
       6,   239,    -1,    -1,    10,    11,    12,    -1,   246,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,
      56,    57,    58,    -1,    -1,    -1,    -1,    63,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,
      76,    77,    -1,    -1,    -1,    -1,    -1,    83,    84,    -1,
      86,     3,     4,    -1,     6,    -1,    -1,    -1,    10,    11,
      12,    -1,    -1,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    55,    56,    57,    58,    -1,    -1,    -1,
      -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    75,    76,    77,    -1,    -1,    -1,    -1,
      -1,    83,    84,    -1,    86,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,    -1,    -1,    -1,   192,   238,    -1,    -1,
     196,    -1,    -1,    -1,    -1,   201,   202,   203,    -1,   205,
     206,   207,    -1,    -1,    -1,   211,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   227,   228,    -1,    -1,    -1,    -1,    -1,   234,    -1,
      -1,    -1,    -1,   239,    -1,    -1,    -1,    -1,    -1,    -1,
     246,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,    -1,
      -1,    -1,    -1,   238,    -1,   240,    -1,   242,    -1,    -1,
     192,    -1,    -1,   248,   196,    -1,    -1,    -1,    -1,   201,
     202,   203,    -1,   205,   206,   207,    -1,    -1,    -1,   211,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   227,   228,    -1,    -1,    -1,
      -1,    -1,   234,     3,     4,    -1,    -1,   239,    -1,    -1,
      10,    11,    12,    -1,   246,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    55,    56,    57,    58,    -1,
      -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    75,    76,    77,    -1,    -1,
       3,     4,    -1,    83,    84,    -1,    86,    10,    11,    12,
      -1,    -1,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    55,    56,    57,    58,    -1,    -1,    -1,    -1,
      63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    75,    76,    77,    -1,    -1,    -1,    -1,    -1,
      83,    84,    -1,    86,    -1,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,    -1,    -1,    -1,    -1,   238,    -1,   240,
      -1,    -1,   192,    -1,    -1,    -1,   196,   248,    -1,    -1,
      -1,   201,   202,   203,    -1,   205,   206,   207,    -1,    -1,
      -1,   211,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   227,   228,    -1,
      -1,    -1,    -1,    -1,   234,    -1,    -1,    -1,    -1,   239,
     240,    -1,    -1,    -1,    -1,    -1,   246,    -1,    -1,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,    -1,    -1,   192,
      -1,   238,    -1,   196,    -1,    -1,    -1,   244,   201,   202,
     203,   248,   205,   206,   207,    -1,    -1,    -1,   211,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   227,   228,    -1,    -1,    -1,    -1,
      -1,   234,     3,     4,    -1,    -1,   239,   240,    -1,    10,
      11,    12,    -1,   246,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    -1,    -1,
      13,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    55,    56,    57,    58,    -1,    -1,
      -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    75,    76,    77,    -1,    -1,    13,
      14,    -1,    83,    84,    -1,    86,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,    -1,    -1,    -1,    -1,   238,    -1,
      -1,    -1,    -1,    -1,   244,    -1,    -1,    -1,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,    -1,    -1,    -1,   107,   108,   109,   110,    -1,    -1,
     113,    -1,    -1,    -1,    -1,    -1,   119,   120,    -1,    -1,
     123,   124,    -1,   126,   127,    -1,    -1,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
      13,    14,   145,   107,   108,   109,   110,    -1,    -1,   113,
      -1,    -1,    -1,    -1,    -1,   119,   120,    -1,    -1,   123,
     124,   192,   126,   127,    -1,   196,   169,   170,   171,    -1,
     201,   202,   203,    -1,   205,   206,   207,    -1,    -1,    -1,
     211,   145,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   227,   228,    -1,    -1,
      -1,    -1,    -1,   234,    -1,   169,   170,   171,   239,    -1,
      -1,    -1,    -1,    -1,    -1,   246,    -1,    -1,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,    13,    14,    -1,   107,   108,   109,   110,    -1,    -1,
     113,   244,    -1,    -1,    -1,    -1,   119,   120,    -1,    -1,
     123,   124,    -1,   126,   127,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      13,    14,   145,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     244,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   169,   170,   171,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,    -1,    -1,    -1,   107,   108,   109,   110,    -1,
      -1,   113,    -1,    -1,    -1,    13,    14,   119,   120,    -1,
      -1,   123,   124,    -1,   126,   127,    -1,    -1,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,    -1,    -1,   145,   107,   108,   109,   110,    -1,    -1,
     113,   244,    -1,    -1,    -1,    -1,   119,   120,    -1,    -1,
     123,   124,    -1,   126,   127,    -1,    -1,   169,   170,   171,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   145,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   169,   170,   171,   107,
     108,   109,   110,    -1,    -1,   113,    -1,    -1,    -1,    -1,
      -1,   119,   120,    -1,    -1,   123,   124,    -1,   126,   127,
      -1,    -1,     0,     1,    -1,    -1,     4,    -1,    -1,    -1,
      -1,    -1,   244,    -1,    -1,    13,    14,   145,    -1,    -1,
      -1,    -1,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
      -1,   169,   170,   171,   238,    -1,    44,    45,    -1,    -1,
     244,   244,    -1,    -1,   248,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    64,    65,    66,    -1,
      -1,    -1,    70,    71,    -1,    73,    -1,    -1,    -1,    -1,
      78,    79,    -1,    81,    82,    -1,    84,    -1,    -1,    -1,
      -1,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,    -1,    -1,   106,   107,
     108,   109,   110,   111,    -1,   113,   244,   115,   116,   117,
     118,   119,   120,   121,    -1,   123,   124,   125,   126,   127,
     128,    -1,   130,   131,   132,   133,   134,   135,   136,   137,
     138,    -1,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,    -1,     4,    -1,   157,
     158,   159,    -1,    -1,    -1,   163,    13,    14,    -1,    -1,
     168,   169,   170,   171,    -1,    -1,   174,    -1,   176,    -1,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,    -1,    -1,    -1,    44,    45,    -1,
     198,   199,   200,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   209,    -1,   211,    -1,    -1,    -1,    64,    65,    66,
      -1,    -1,    -1,    70,    71,    -1,    73,    -1,    -1,    -1,
      -1,    78,    79,    -1,    81,    82,    -1,    84,    -1,    -1,
      -1,    -1,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,    -1,    -1,   106,
     107,   108,   109,   110,   111,    -1,   113,    -1,   115,   116,
     117,   118,   119,   120,   121,    -1,   123,   124,   125,   126,
     127,   128,    -1,   130,   131,   132,   133,   134,   135,   136,
     137,   138,    -1,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,    -1,    -1,    -1,
     157,   158,   159,    -1,    -1,    -1,   163,    -1,    -1,    -1,
      -1,   168,   169,   170,   171,     4,     5,   174,    -1,   176,
      -1,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,    -1,    -1,    -1,    -1,    -1,
      -1,   198,   199,   200,    -1,     4,     5,    -1,    -1,    -1,
      -1,    -1,   209,    -1,   211,    13,    14,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    -1,    -1,    -1,    -1,
      59,    60,    61,    62,    -1,    -1,    -1,    -1,    67,    68,
      69,    -1,    -1,    72,    -1,    74,    -1,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    85,    -1,    -1,    88,
      59,    60,    61,    62,    -1,    -1,    -1,    -1,    67,    68,
      69,    -1,    -1,    72,    -1,    74,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    85,    -1,    -1,    88,
      -1,    -1,    -1,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,    -1,    -1,    -1,   107,
     108,   109,   110,    -1,    -1,   113,    -1,    -1,    -1,    -1,
      -1,   119,   120,    -1,    -1,   123,   124,    -1,   126,   127,
      -1,    -1,    -1,    -1,   132,    13,    14,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   145,    -1,    -1,
      -1,   149,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   193,   194,   195,    -1,    -1,    -1,
      -1,   169,   170,   171,    -1,   204,    -1,    -1,    -1,   208,
      -1,   210,   211,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   193,   194,   195,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   204,    -1,    -1,    -1,   208,
      -1,   210,    -1,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,    -1,    -1,    -1,   107,
     108,   109,   110,    -1,    -1,   113,    -1,    -1,    -1,    -1,
      -1,   119,   120,    -1,    -1,   123,   124,    -1,   126,   127,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   145,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,    -1,    -1,    -1,    -1,
     238,   169,   170,   171,    -1,    -1,   244,    -1,    -1,    -1,
     248,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,    -1,
      -1,    -1,    -1,   238,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   248,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,    -1,    -1,    -1,    -1,   238,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   248,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,    -1,    -1,    -1,    -1,   238,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   248,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,    -1,    -1,
      -1,    -1,   238,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   248,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,    -1,    -1,    -1,    -1,   238,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   248,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,    -1,    -1,    -1,    -1,   238,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   248,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,    -1,    -1,    -1,
      -1,   238,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   248,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
      -1,    -1,    -1,    -1,   238,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   248,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,    -1,    -1,    -1,    -1,   238,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   248,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,    -1,    -1,    -1,    -1,
     238,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     248,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,    -1,
      -1,    -1,    -1,   238,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   248,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,    -1,    -1,    -1,    -1,   238,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   248,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,    -1,    -1,    -1,    -1,   238,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   248,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,    -1,    -1,
      -1,    -1,   238,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   248,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,    -1,    -1,    -1,    -1,   238,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   248,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,    -1,    -1,    -1,    -1,   238,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   248,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,    -1,    -1,    -1,
      -1,   238,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   248,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
      -1,    -1,    -1,    -1,   238,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   248,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,    -1,    -1,    -1,    -1,   238,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   248,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,    -1,    -1,    -1,    -1,
     238,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     248,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,    -1,
      -1,    -1,    -1,   238,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   248,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,    -1,    -1,    -1,    -1,   238,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   248,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,    -1,    -1,    -1,    -1,   238,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   248,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,    -1,    -1,
      -1,    -1,   238,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   248,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,    -1,    -1,    -1,    -1,   238,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   248,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,    -1,    -1,    -1,    -1,   238,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   248,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,    -1,    -1,    -1,
      -1,   238,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   248,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
      -1,    -1,    -1,    -1,   238,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   248,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,    -1,    -1,    -1,    -1,   238,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   248,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,    -1,    -1,    -1,    -1,
     238,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     248,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,    -1,
      -1,    -1,    -1,   238,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   248,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,    -1,    -1,    -1,    -1,   238,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   248,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,    -1,    -1,    -1,    -1,   238,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   248,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,    -1,    -1,
      -1,    -1,   238,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   248,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,    -1,    -1,    -1,    -1,   238,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   248,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,    -1,    -1,    -1,    -1,   238,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   248,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,    -1,    -1,    -1,
      -1,   238,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   248,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
      -1,    -1,    -1,    -1,   238,    -1,    -1,    -1,    -1,    -1,
     244,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,    -1,
      -1,    -1,    -1,   238,    -1,    -1,    -1,    -1,    -1,   244,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,    -1,    -1,
      -1,    -1,   238,    -1,    -1,    -1,    -1,    -1,   244,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,    -1,    -1,    -1,
      -1,   238,    -1,    -1,    -1,    -1,    -1,   244,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,    -1,    -1,    -1,    -1,
     238,    -1,    -1,    -1,    -1,    -1,   244,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,    -1,    -1,    -1,    -1,   238,
      -1,    -1,    -1,    -1,    -1,   244,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,    -1,    -1,    -1,    -1,   238,    -1,
      -1,    -1,    -1,    -1,   244,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,    -1,    -1,    -1,    -1,   238,    -1,    -1,
      -1,    -1,    -1,   244,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,    -1,    -1,    -1,    -1,   238,    -1,    -1,    -1,
      -1,    -1,   244,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,    -1,    -1,    -1,    -1,   238,    -1,    -1,    -1,    -1,
      -1,   244,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
      -1,    -1,    -1,    -1,   238,    -1,    -1,    -1,    -1,    -1,
     244,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,    -1,
      -1,    -1,    -1,   238,    -1,    -1,    -1,    -1,    -1,   244,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,    -1,    -1,
      -1,    -1,   238,    -1,    -1,    -1,    -1,    -1,   244,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,    -1,    -1,    -1,
      -1,   238,    -1,    -1,    -1,    -1,    -1,   244,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,    -1,    -1,    -1,    -1,
     238,    -1,    -1,    -1,    -1,    -1,   244,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,    -1,    -1,    -1,    -1,   238,
      -1,    -1,    -1,    -1,    -1,   244,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,    -1,    -1,    -1,    -1,   238,    -1,
      -1,    -1,    -1,    -1,   244,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,    -1,    -1,    -1,    -1,   238,    -1,    -1,
      -1,    -1,    -1,   244,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,    -1,    -1,    -1,    -1,   238,    -1,    -1,    -1,
      -1,    -1,   244,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,    -1,    -1,    -1,    -1,   238,    -1,    -1,    -1,    -1,
      -1,   244,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
      -1,    -1,    -1,    -1,   238,    -1,    -1,    -1,    -1,    -1,
     244,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,    -1,
      -1,    -1,    -1,   238,    -1,    -1,    -1,    -1,    -1,   244,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,    -1,    -1,
      -1,    -1,   238,    -1,    -1,    -1,    -1,    -1,   244,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,    -1,    -1,    -1,
      -1,   238,    -1,    -1,    -1,    -1,    -1,   244,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,    -1,    -1,    -1,    -1,
     238,    -1,    -1,    -1,    -1,    -1,   244,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,    -1,    -1,    -1,    -1,   238,
      -1,    -1,    -1,    -1,    -1,   244,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,    -1,    -1,    -1,    -1,   238,    -1,
      -1,    -1,    -1,    -1,   244,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,    -1,    -1,    -1,    -1,   238,    -1,    -1,
      -1,    -1,    -1,   244,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,    -1,    -1,    -1,    -1,   238,    -1,    -1,    -1,
      -1,    -1,   244,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,    -1,    -1,    -1,    -1,   238,    -1,    -1,    -1,    -1,
     243,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,    -1,
      -1,    -1,    -1,   238,    -1,    -1,    -1,    -1,   243,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,    -1,    -1,    -1,
      -1,   238,    -1,    -1,    -1,    -1,   243,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,    -1,    -1,    -1,    -1,   238,
      -1,   240,    -1,   242,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,    -1,    -1,    -1,    -1,   238,    -1,    -1,    -1,
     242,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,    -1,
      -1,    -1,    -1,   238,    -1,    -1,    -1,   242,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,    -1,    -1,    -1,    -1,
     238,    -1,    -1,    -1,   242,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,    -1,    -1,    -1,    -1,   238,    -1,    -1,
      -1,   242,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
      -1,    -1,    -1,    -1,   238,    -1,    -1,    -1,   242,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,    -1,    -1,    -1,
      -1,   238,    -1,    -1,    -1,   242,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,    -1,    -1,    -1,    -1,   238,    -1,
      -1,    -1,   242,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,    -1,    -1,    -1,    -1,   238,    -1,    -1,    -1,   242,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,    -1,    -1,
      -1,    -1,   238,    -1,    -1,    -1,   242,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,    -1,    -1,    -1,    -1,   238,
      -1,    -1,    -1,   242,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,    -1,    -1,    -1,    -1,   238,    -1,    -1,    -1,
     242,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,    -1,
      -1,    -1,    -1,   238,    -1,    -1,    -1,   242,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,    -1,    -1,    -1,    -1,
     238,    -1,    -1,    -1,   242,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,    -1,    -1,    -1,    -1,   238,    -1,    -1,
      -1,   242,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
      -1,    -1,    -1,    -1,   238,    -1,    -1,    -1,   242,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,    -1,    -1,    -1,
      -1,   238,    -1,   240,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,    -1,    -1,    -1,    -1,   238,    -1,   240,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,    -1,    -1,    -1,
      -1,   238,    -1,   240,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,    -1,    -1,    -1,    -1,   238,    -1,   240,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,    -1,    -1,    -1,
      -1,   238,    -1,   240,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,    -1,    -1,    -1,    -1,   238,    -1,   240,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,    -1,    -1,    -1,
      -1,   238,    -1,   240,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,    -1,    -1,    -1,    -1,   238,    -1,   240,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,    -1,    -1,    -1,
      -1,   238,    -1,   240,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,    -1,    -1,    -1,    -1,   238,    -1,   240,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,    -1,    -1,    -1,
      -1,   238,    -1,   240,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,    -1,    -1,    -1,    -1,   238,    -1,   240,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,    -1,    -1,    -1,
      -1,   238,    -1,   240,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,    -1,    -1,    -1,    -1,   238,    -1,   240,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,    -1,    -1,    -1,
      -1,   238,    -1,   240,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,    -1,    -1,    -1,    -1,   238,    -1,   240,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,    -1,    -1,    -1,
      -1,   238,    -1,   240,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,    -1,    -1,    -1,    -1,   238,    -1,   240,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,    -1,    -1,    -1,
      -1,   238,    -1,   240,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,    -1,    -1,    -1,    -1,   238,    -1,   240,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,    -1,    -1,    -1,
      -1,   238,    -1,   240,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,    -1,    -1,    -1,    -1,   238,    -1,   240,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,    -1,    -1,    -1,
      -1,   238,    -1,   240,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,    -1,    -1,    -1,    -1,   238,    -1,   240,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,    -1,    -1,    -1,
      -1,   238,    -1,   240,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,    -1,    -1,    -1,    -1,   238,    -1,   240,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,    -1,    -1,    -1,
      -1,   238,    -1,   240,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,    -1,    -1,    -1,    -1,   238,    -1,   240,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,    -1,    -1,    -1,
      -1,   238,    -1,   240,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,    -1,    -1,    -1,    -1,   238,    -1,   240,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,    -1,    -1,    -1,
      -1,   238,    -1,   240,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,    -1,    -1,    -1,    -1,   238,    -1,   240,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,    -1,    -1,    -1,
      -1,   238,    -1,   240,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,    -1,    -1,    -1,    -1,   238,    -1,   240,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,    -1,    -1,    -1,
      -1,   238,    -1,   240,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,    -1,    -1,    -1,    -1,   238,    -1,   240,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,    -1,    -1,    -1,
      -1,   238,    -1,   240,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,    -1,    -1,    -1,    -1,   238,    -1,   240,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,    -1,    -1,    -1,
      -1,   238,    -1,   240,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,    -1,    -1,    -1,    -1,   238,    -1,   240,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,    -1,    -1,    -1,
      -1,   238,    -1,   240,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,    -1,    -1,    -1,    -1,   238,    -1,   240,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,    -1,    -1,    -1,
      -1,   238,    -1,   240,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,    -1,    -1,    -1,    -1,   238,    -1,   240,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,    -1,    -1,    -1,
      -1,   238,    -1,   240,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,    -1,    -1,    -1,    -1,   238,    -1,   240,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,    -1,    -1,    -1,
      -1,   238,    -1,   240,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,    -1,    -1,    -1,    -1,   238,    -1,   240,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,    -1,    -1,    -1,
      -1,   238,    -1,   240,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,    -1,    -1,    -1,    -1,   238,    -1,   240,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,    -1,    -1,    -1,
      -1,   238,    -1,   240,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,    -1,    -1,    -1,    -1,   238,    -1,   240,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,    -1,    -1,    -1,
      -1,   238,    -1,   240,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,    -1,    -1,    -1,    -1,   238,    -1,   240,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,    -1,    -1,    -1,
      -1,   238,    -1,   240,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,    -1,    -1,    -1,    -1,   238,    -1,   240,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,    -1,    -1,    -1,
      -1,   238,    -1,   240,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,    -1,    -1,    -1,    -1,   238,    -1,   240,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,    -1,    -1,    -1,
      -1,   238,    -1,   240,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,    -1,    -1,    -1,    -1,   238,    -1,   240,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,    -1,    -1,    -1,
      -1,   238,    -1,   240,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,    -1,    -1,    -1,    -1,   238
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     1,   250,   251,     6,     0,     4,    13,    14,    44,
      45,    64,    65,    66,    70,    71,    73,    78,    79,    81,
      82,    84,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   106,   107,   108,
     109,   110,   111,   113,   115,   116,   117,   118,   119,   120,
     121,   123,   124,   125,   126,   127,   128,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     157,   158,   159,   163,   168,   169,   170,   171,   174,   176,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   198,   199,   200,   209,   211,   252,
     254,   255,   275,   293,   295,   299,   302,   303,   304,   305,
     306,   307,   308,   309,   310,   317,   319,   320,   326,   327,
     328,   329,   335,   360,   361,   243,   247,    14,    97,   239,
     239,     6,   243,     6,     6,     6,     6,   239,     6,     6,
     241,   241,     4,   337,   361,   239,   241,   273,   273,   239,
     239,   239,     4,   239,   239,   239,     4,   239,   239,   239,
     239,   239,   239,   239,   239,   239,   239,   239,   243,   112,
      97,     6,   243,    91,    94,    97,   110,   298,   239,     3,
      10,    11,    12,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    55,    56,    57,    58,    63,    75,    76,    77,
      83,    86,    91,    94,    97,    99,   119,   124,   126,   192,
     196,   197,   201,   202,   203,   205,   206,   207,   227,   228,
     234,   239,   243,   246,   295,   299,   310,   317,   319,   330,
     331,   335,   337,   344,   346,   361,   239,   243,    97,    97,
     119,    94,    97,    99,    91,   295,    94,    97,    99,   110,
     296,    94,    97,   239,    94,   149,   174,   190,   191,   243,
     227,   228,   239,   243,   341,   342,   341,   243,   243,   341,
       4,    91,    95,   101,   102,   104,   105,   123,   239,    97,
      99,    97,    94,     4,    84,   185,   243,   361,     4,     6,
      91,    94,    97,    94,    97,   110,   297,     4,     4,     4,
       5,   239,   344,   345,     4,   239,   239,   239,     4,   243,
     348,   361,     4,   239,   239,   239,     6,     6,   241,     5,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    59,
      60,    61,    62,    67,    68,    69,    72,    74,    85,    88,
     193,   194,   195,   204,   208,   210,   352,   361,   239,     4,
     352,     5,   243,     5,   243,    32,   228,   330,   361,   241,
     243,   239,   243,     6,   239,   243,     6,   247,     7,   126,
     185,   212,   213,   214,   215,   236,   237,   239,   241,   245,
     271,   272,   273,   330,   351,   352,   361,     4,   299,   300,
     301,   243,     6,   330,   351,   352,   361,   351,   330,   351,
     358,   359,   361,   277,   281,   239,   340,     9,   352,   361,
     330,   330,   330,   239,   330,   330,   330,   239,   330,   330,
     330,   330,   330,   330,   330,   351,   330,   330,   330,   330,
     344,   239,   228,   330,   346,   347,   243,   345,   351,   273,
     273,   273,   273,   273,   273,   273,   273,   273,   273,   273,
     273,   273,   273,   273,   273,   273,   273,   273,   273,   273,
     273,   273,   239,   241,   273,   273,   273,   273,   273,   273,
     239,   273,   273,   239,   273,   273,   243,   119,   295,   239,
     273,   273,   239,   239,   239,   330,   243,   330,   346,   330,
     330,   244,   347,   337,   361,     5,   177,     8,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   238,     9,   239,   241,
     245,   272,   273,   330,   347,   239,   239,   239,   344,   345,
     345,   345,   294,   243,   239,   344,   243,   243,   330,     4,
     344,   243,   348,   243,   243,   341,   341,   341,   330,   330,
     227,   228,   243,   243,   341,   227,   228,   239,   301,   341,
     243,   239,   243,   239,   239,   239,   239,   239,   239,   239,
     330,   345,   345,   345,   239,     4,   241,     6,   241,   301,
       6,     6,   243,   243,   243,   243,   345,   241,   241,   241,
     330,     6,     6,   330,   330,   330,   245,   330,   243,   177,
     330,   330,   330,   330,   273,   273,   273,   239,   239,   239,
     273,   273,   273,   273,   273,   273,   273,   273,   273,   273,
     239,   239,   273,   239,   241,     6,     6,   243,     6,   301,
       6,   301,   273,   330,   229,   243,     9,   239,   241,   245,
     351,   347,   330,   301,   344,   344,   243,   352,    91,    94,
      97,    99,     7,   330,   330,     4,   174,   175,   344,     6,
     240,   242,   243,   274,     6,   243,     6,     9,   239,   241,
     245,   361,   244,   119,   124,   127,   293,   295,   330,     6,
     240,   248,     9,   239,   241,   245,   240,   248,   248,   240,
     248,     9,   239,   245,   242,   248,   276,   242,   276,    87,
     339,   336,   361,   248,   248,   240,   240,   240,   330,   240,
     240,   240,   330,   240,   240,   240,   240,   240,   240,   240,
     240,   240,   240,   240,   244,     7,   330,   229,   244,   248,
     330,     6,   240,   330,   330,   330,   330,   330,   330,   330,
     330,   330,   330,   330,   330,   330,   330,   330,   330,   330,
     346,   330,   330,   330,   330,   330,   330,   330,   346,   346,
     361,   243,   330,   330,   351,   330,   351,   344,   351,   351,
     358,   330,   274,   361,   330,   345,   351,   351,   346,   337,
     352,   337,   347,   240,   244,   245,   273,    64,   330,   330,
     330,   330,   330,   330,   330,   330,   330,   330,   330,   330,
     330,   330,   243,   330,   346,   330,   330,   330,   330,   330,
     361,   330,   330,     4,   338,   243,   274,   240,   244,   330,
     330,   330,     7,     7,   323,   323,   239,   330,   330,     6,
     347,   347,   243,   240,     6,   301,   243,   301,   301,   248,
     248,   248,   341,   341,   300,   300,   248,   330,   244,   314,
     248,   301,   330,   330,   330,   330,   330,   330,   330,   330,
     330,   240,     7,   324,     6,     7,   330,     6,   330,   330,
     244,   347,   347,   347,   330,     6,   330,   330,   330,   240,
     240,   240,   240,   174,   248,   301,   243,     8,   240,   240,
     242,   358,   351,   358,   351,   351,   351,   351,   351,   351,
     330,   351,   351,   351,   351,   246,   354,   361,   352,   351,
     351,   351,   337,   361,   347,   244,   244,   330,   330,   301,
     361,   338,   242,   244,   240,   132,   149,   318,   240,   244,
     248,   330,     6,   243,   243,   243,   243,   330,   240,   242,
       7,   271,   272,   245,     7,     6,   347,     7,   215,   271,
     256,   361,   330,   330,   338,   241,   239,   119,   296,   243,
     244,     6,   222,   223,   253,   347,   361,   330,   330,     4,
     338,     6,   347,   330,     6,   351,   359,   361,   240,   338,
       6,   361,     6,   351,   330,   240,   241,   330,   352,     7,
       7,     7,   240,     7,     7,     7,   240,     7,     7,     7,
       7,     7,     7,     7,     7,     7,     7,   330,   240,   243,
     330,   346,   244,     6,   274,   274,   274,   274,   274,   274,
     274,   274,   274,   274,   274,   248,   274,   274,   274,   274,
     274,   274,   274,   274,   274,   248,   248,   248,   240,   242,
     242,   347,   248,   248,   274,   248,   274,   248,   248,   248,
     240,   332,   274,   244,   248,   248,   274,   274,   240,   245,
     240,   245,   248,   333,   244,     7,   338,   274,   243,     8,
       8,   347,   245,   240,   242,   272,   239,   241,   273,   347,
       7,   243,   240,   240,   240,   330,   344,     4,   322,     6,
     290,   330,   352,   244,   240,   244,   244,   347,   245,   244,
     301,   244,   244,   341,   330,   330,   244,   244,   330,   341,
     129,   129,   146,   154,   155,   156,   160,   161,   315,   316,
     341,   244,   311,   240,   244,   240,   240,   240,   240,   240,
     240,   240,     7,   330,     6,   330,   240,   242,   242,   244,
     244,   244,   244,   242,   242,   248,     7,     7,     7,   245,
     330,   244,   330,   330,     7,   245,   274,   248,   274,   274,
     240,   240,   248,   274,   274,   248,   248,   274,   274,   274,
     274,   330,   274,     9,   353,   248,   240,   248,   274,   245,
     248,   334,   242,   244,   244,   245,   239,   241,   247,   177,
       7,   149,     6,   330,   244,   243,     6,   344,   244,   330,
     330,   330,   330,     6,     7,   271,   272,   245,   271,   272,
     352,   330,     6,     4,   243,   349,   361,   244,    46,    46,
     344,     4,   164,   165,   166,   167,   244,   259,   263,   266,
     268,   269,   245,   240,   242,   239,   330,   330,   239,   239,
     347,   351,   240,   245,   240,   242,   239,   240,   248,   245,
     239,     7,   273,     4,   284,   285,   286,   274,   274,   341,
     344,   344,     7,   344,   344,   344,     7,   344,   344,   344,
     344,   344,   344,   344,   344,   344,   344,     6,     7,   347,
     330,   330,   330,   330,   244,   330,   330,   330,   344,   351,
     351,   248,   283,   330,   330,   338,   338,   330,   240,   344,
     273,   330,   330,   330,   244,   338,   272,   245,   272,   330,
     330,   274,   244,   344,   347,     7,     7,     7,   129,   321,
       6,   240,   248,     7,     7,     7,   244,     4,   244,   248,
     248,   248,   244,   244,   109,     4,     6,   330,   243,     6,
     239,     6,   162,     6,   162,   244,   316,   248,   315,     7,
       6,     7,     7,     7,     7,     7,     7,     7,   344,     6,
     243,     6,     6,     6,    97,     7,     6,     6,   330,   344,
     344,   344,     4,   248,     8,     8,   240,     4,     4,   347,
     351,   330,   351,   246,   248,   287,   351,   351,   338,   351,
     240,   248,   338,   243,   295,   243,     6,   330,     6,   243,
     344,   244,   244,   244,   244,   244,   330,     6,     4,   174,
     175,   330,     6,     6,     6,     7,   348,   350,     6,   241,
     274,   273,   273,     6,   260,   239,   239,   243,   270,     6,
     338,   245,   351,   330,   242,   240,   330,   330,   244,     6,
       6,   253,   338,   245,   330,     6,   330,   338,   240,   243,
     330,   352,   274,    46,   243,   344,   352,   355,   242,   248,
       6,     6,     6,   123,   292,   292,   344,     6,     6,     6,
     344,   177,   291,     6,     6,     6,     6,     6,     6,     6,
       6,     6,     5,   244,   274,   274,   274,   274,   274,   248,
     248,   248,   240,   274,   274,   285,   274,   240,   274,   240,
     333,     6,   274,   248,   239,   241,   273,     4,   240,   242,
     274,     6,   244,   344,   344,   344,     4,     6,   271,   330,
     344,   243,   243,     7,     6,     7,   330,   330,   330,   243,
     243,   243,   241,     6,   330,   344,   330,     6,     6,   330,
     341,   244,     5,   344,   243,   243,   243,   243,   243,   243,
     243,   344,     6,   347,   243,   330,   242,     6,     6,   173,
     330,   330,   330,     6,     6,     7,   274,   248,   248,   274,
     248,   330,     4,   189,   288,   289,   274,   240,   274,   334,
     352,   239,   241,   330,   243,   301,     6,   301,   248,     6,
       6,     7,   271,   272,   245,     7,     6,   348,   244,   248,
     330,   271,   243,   274,   356,   357,   358,   356,   239,   330,
     330,   343,   344,   243,   239,     4,     6,   240,     6,   240,
     240,     6,   351,   239,     4,   240,   248,   239,   344,   352,
       7,   273,   282,   330,   346,   286,   341,     6,     6,     6,
       6,    95,     6,     5,   243,   330,   330,   330,   240,   330,
     330,   330,   274,   272,   243,     6,   291,     6,   330,   344,
       4,     6,   347,   347,   330,   330,   352,   244,   240,   244,
     248,   300,   300,   330,   330,   244,   248,   240,   244,   248,
       6,     6,   343,   341,   341,   341,   341,   341,   228,   341,
       6,   244,   330,     6,     6,   344,   244,   248,     8,   244,
     240,   243,   330,   352,   351,   330,   351,   330,   352,   355,
     357,   352,   248,   240,   248,   244,   330,   318,   318,   344,
     352,   330,     6,     4,   349,     6,   348,   242,   344,   358,
       6,   274,   274,   257,   330,   248,   248,   244,   248,   258,
     330,   330,     6,   330,   330,   240,   278,   280,   243,   357,
     244,   248,     7,     7,   243,     5,   343,   274,   274,   248,
     248,   240,   242,   330,     6,     6,   243,   244,   244,   243,
       6,     6,   243,   330,   244,   244,   244,   242,     6,   344,
       7,   243,   330,   244,   248,   248,   248,   248,   248,   248,
       6,   244,   172,   330,   330,   347,     6,     6,   240,   274,
     274,   289,   352,   244,   244,   244,   244,     6,     6,     7,
       6,   245,     6,   244,     6,     6,   240,   248,   330,   330,
     243,   344,   244,   248,   240,   240,   248,   283,   287,   344,
     274,   330,   352,   361,   330,     6,   244,   330,   330,   244,
     343,   133,   134,   139,   325,   133,   134,   325,   347,   300,
     244,   248,     6,   244,   344,   301,   244,     6,   347,   341,
     341,   341,   341,   341,   330,   244,   244,   244,   240,     6,
     243,     6,   348,   175,   261,   330,   248,   248,   343,     6,
     330,   330,   244,   244,   279,     7,   239,   244,   243,   248,
     248,   244,   243,   341,   344,     6,   243,   341,     6,   244,
     244,   330,     6,   129,   244,   312,   243,   244,   248,   248,
     248,   248,   248,     6,     6,     6,   301,     6,   243,   330,
     330,   244,   248,   283,   352,   240,   330,   330,   330,     6,
     341,     6,   341,     6,     6,   244,   330,   315,   301,     6,
     347,   347,   347,   347,   341,   347,   318,   258,   240,   248,
       6,   243,   330,   244,   248,   248,   248,   248,   248,     6,
     244,   244,   313,   244,   244,   244,   244,   248,   244,   244,
     244,   264,   330,   343,   244,   330,   330,   330,   341,   341,
     315,     6,     6,     6,     6,   347,     6,     6,     6,   243,
     240,   244,     6,   244,   274,   248,   248,   248,   244,   244,
     262,   351,   267,   243,     6,   330,   330,   330,     6,   244,
     248,   243,   343,   244,   244,   244,     6,   351,   265,   351,
     244,     6,     6,   244,   248,     6,     6,   351
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 3:
#line 267 "Gmsh.y"
    { yyerrok; return 1; ;}
    break;

  case 6:
#line 278 "Gmsh.y"
    { return 1; ;}
    break;

  case 7:
#line 279 "Gmsh.y"
    { return 1; ;}
    break;

  case 8:
#line 280 "Gmsh.y"
    { return 1; ;}
    break;

  case 9:
#line 282 "Gmsh.y"
    {
      gmsh_yyfactory = (yyvsp[(3) - (5)].c);
      if(gmsh_yyfactory == "OpenCASCADE"){
        if(!GModel::current()->getOCCInternals())
          GModel::current()->createOCCInternals();
        for(int dim = -2; dim <= 3; dim++)
          GModel::current()->getOCCInternals()->setMaxTag
            (dim, std::max(GModel::current()->getOCCInternals()->getMaxTag(dim),
                           GModel::current()->getGEOInternals()->getMaxTag(dim)));
      }
      else if(GModel::current()->getOCCInternals()){
        for(int dim = -2; dim <= 3; dim++)
          GModel::current()->getGEOInternals()->setMaxTag
            (dim, std::max(GModel::current()->getGEOInternals()->getMaxTag(dim),
                           GModel::current()->getOCCInternals()->getMaxTag(dim)));
      }
      Free((yyvsp[(3) - (5)].c));
    ;}
    break;

  case 10:
#line 300 "Gmsh.y"
    { return 1; ;}
    break;

  case 11:
#line 301 "Gmsh.y"
    { List_Delete((yyvsp[(1) - (1)].l)); return 1; ;}
    break;

  case 12:
#line 302 "Gmsh.y"
    { return 1; ;}
    break;

  case 13:
#line 303 "Gmsh.y"
    { return 1; ;}
    break;

  case 14:
#line 304 "Gmsh.y"
    { return 1; ;}
    break;

  case 15:
#line 305 "Gmsh.y"
    { return 1; ;}
    break;

  case 16:
#line 306 "Gmsh.y"
    { List_Delete((yyvsp[(1) - (1)].l)); return 1; ;}
    break;

  case 17:
#line 307 "Gmsh.y"
    { List_Delete((yyvsp[(1) - (1)].l)); return 1; ;}
    break;

  case 18:
#line 308 "Gmsh.y"
    { return 1; ;}
    break;

  case 19:
#line 309 "Gmsh.y"
    { return 1; ;}
    break;

  case 20:
#line 310 "Gmsh.y"
    { return 1; ;}
    break;

  case 21:
#line 311 "Gmsh.y"
    { return 1; ;}
    break;

  case 22:
#line 312 "Gmsh.y"
    { return 1; ;}
    break;

  case 23:
#line 313 "Gmsh.y"
    { return 1; ;}
    break;

  case 24:
#line 314 "Gmsh.y"
    { return 1; ;}
    break;

  case 25:
#line 315 "Gmsh.y"
    { return 1; ;}
    break;

  case 26:
#line 320 "Gmsh.y"
    {
      (yyval.c) = (char*)"w";
    ;}
    break;

  case 27:
#line 324 "Gmsh.y"
    {
      (yyval.c) = (char*)"a";
    ;}
    break;

  case 28:
#line 331 "Gmsh.y"
    {
      Msg::Direct((yyvsp[(3) - (5)].c));
      Free((yyvsp[(3) - (5)].c));
    ;}
    break;

  case 29:
#line 336 "Gmsh.y"
    {
      Msg::Error((yyvsp[(3) - (5)].c));
      Free((yyvsp[(3) - (5)].c));
    ;}
    break;

  case 30:
#line 341 "Gmsh.y"
    {
      std::string tmp = FixRelativePath(gmsh_yyname, (yyvsp[(6) - (7)].c));
      FILE *fp = Fopen(tmp.c_str(), (yyvsp[(5) - (7)].c));
      if(!fp){
	yymsg(0, "Unable to open file '%s'", tmp.c_str());
      }
      else{
	fprintf(fp, "%s\n", (yyvsp[(3) - (7)].c));
	fclose(fp);
      }
      Free((yyvsp[(3) - (7)].c));
      Free((yyvsp[(6) - (7)].c));
    ;}
    break;

  case 31:
#line 355 "Gmsh.y"
    {
      char tmpstring[5000];
      int i = printListOfDouble((yyvsp[(3) - (7)].c), (yyvsp[(5) - (7)].l), tmpstring);
      if(i < 0)
	yymsg(0, "Too few arguments in Printf");
      else if(i > 0)
	yymsg(0, "%d extra argument%s in Printf", i, (i > 1) ? "s" : "");
      else
	Msg::Direct(tmpstring);
      Free((yyvsp[(3) - (7)].c));
      List_Delete((yyvsp[(5) - (7)].l));
    ;}
    break;

  case 32:
#line 368 "Gmsh.y"
    {
      char tmpstring[5000];
      int i = printListOfDouble((yyvsp[(3) - (7)].c), (yyvsp[(5) - (7)].l), tmpstring);
      if(i < 0)
	yymsg(0, "Too few arguments in Error");
      else if(i > 0)
	yymsg(0, "%d extra argument%s in Error", i, (i > 1) ? "s" : "");
      else
	Msg::Error(tmpstring);
      Free((yyvsp[(3) - (7)].c));
      List_Delete((yyvsp[(5) - (7)].l));
    ;}
    break;

  case 33:
#line 381 "Gmsh.y"
    {
      char tmpstring[5000];
      int i = printListOfDouble((yyvsp[(3) - (9)].c), (yyvsp[(5) - (9)].l), tmpstring);
      if(i < 0)
	yymsg(0, "Too few arguments in Printf");
      else if(i > 0)
	yymsg(0, "%d extra argument%s in Printf", i, (i > 1) ? "s" : "");
      else{
        std::string tmp = FixRelativePath(gmsh_yyname, (yyvsp[(8) - (9)].c));
	FILE *fp = Fopen(tmp.c_str(), (yyvsp[(7) - (9)].c));
	if(!fp){
	  yymsg(0, "Unable to open file '%s'", tmp.c_str());
	}
	else{
	  fprintf(fp, "%s\n", tmpstring);
	  fclose(fp);
	}
      }
      Free((yyvsp[(3) - (9)].c));
      Free((yyvsp[(8) - (9)].c));
      List_Delete((yyvsp[(5) - (9)].l));
    ;}
    break;

  case 34:
#line 409 "Gmsh.y"
    {
#if defined(HAVE_POST)
      if(!strcmp((yyvsp[(1) - (6)].c), "View") && ViewData->finalize()){
	ViewData->setName((yyvsp[(2) - (6)].c));
	ViewData->setFileName(gmsh_yyname);
	ViewData->setFileIndex(gmsh_yyviewindex++);
	new PView(ViewData);
      }
      else
	delete ViewData;
#endif
      Free((yyvsp[(1) - (6)].c)); Free((yyvsp[(2) - (6)].c));
    ;}
    break;

  case 35:
#line 423 "Gmsh.y"
    {
#if defined(HAVE_POST)
      if(!strcmp((yyvsp[(2) - (6)].c), "View")){
	int index = (int)(yyvsp[(4) - (6)].d);
	if(index >= 0 && index < (int)PView::list.size())
	  new PView(PView::list[index], false);
        else
	  yymsg(0, "Unknown view %d", index);
      }
#endif
      Free((yyvsp[(2) - (6)].c));
    ;}
    break;

  case 36:
#line 436 "Gmsh.y"
    {
#if defined(HAVE_POST)
      if(!strcmp((yyvsp[(2) - (6)].c), "View")){
	int index = (int)(yyvsp[(4) - (6)].d);
	if(index >= 0 && index < (int)PView::list.size())
	  new PView(PView::list[index], true);
        else
	  yymsg(0, "Unknown view %d", index);
      }
#endif
      Free((yyvsp[(2) - (6)].c));
    ;}
    break;

  case 37:
#line 449 "Gmsh.y"
    {
#if defined(HAVE_POST)
      if(!strcmp((yyvsp[(2) - (8)].c), "View")){
	int index = (int)(yyvsp[(4) - (8)].d), index2 = (int)(yyvsp[(6) - (8)].d);
	if(index >= 0 && index < (int)PView::list.size() &&
           index2 >= 0 && index2 < (int)PView::list.size()){
          PView::list[index2]->setOptions(PView::list[index]->getOptions());
        }
        else
	  yymsg(0, "Unknown view %d or %d", index, index2);
      }
#endif
      Free((yyvsp[(2) - (8)].c));
    ;}
    break;

  case 38:
#line 467 "Gmsh.y"
    {
#if defined(HAVE_POST)
      ViewData = new PViewDataList();
#endif
    ;}
    break;

  case 44:
#line 481 "Gmsh.y"
    { ViewCoord.push_back((yyvsp[(1) - (1)].d)); ;}
    break;

  case 45:
#line 483 "Gmsh.y"
    { ViewCoord.push_back((yyvsp[(3) - (3)].d)); ;}
    break;

  case 46:
#line 488 "Gmsh.y"
    { if(ViewValueList) ViewValueList->push_back((yyvsp[(1) - (1)].d)); ;}
    break;

  case 47:
#line 490 "Gmsh.y"
    { if(ViewValueList) ViewValueList->push_back((yyvsp[(3) - (3)].d)); ;}
    break;

  case 48:
#line 495 "Gmsh.y"
    {
#if defined(HAVE_POST)
      if(!strncmp((yyvsp[(1) - (1)].c), "SP", 2)){
	ViewValueList = &ViewData->SP; ViewNumList = &ViewData->NbSP;
      }
      else if(!strncmp((yyvsp[(1) - (1)].c), "VP", 2)){
	ViewValueList = &ViewData->VP; ViewNumList = &ViewData->NbVP;
      }
      else if(!strncmp((yyvsp[(1) - (1)].c), "TP", 2)){
	ViewValueList = &ViewData->TP; ViewNumList = &ViewData->NbTP;
      }
      else if(!strncmp((yyvsp[(1) - (1)].c), "SL", 2)){
	ViewValueList = &ViewData->SL; ViewNumList = &ViewData->NbSL;
        if(strlen((yyvsp[(1) - (1)].c)) > 2) ViewData->setOrder2(TYPE_LIN);
      }
      else if(!strncmp((yyvsp[(1) - (1)].c), "VL", 2)){
	ViewValueList = &ViewData->VL; ViewNumList = &ViewData->NbVL;
        if(strlen((yyvsp[(1) - (1)].c)) > 2) ViewData->setOrder2(TYPE_LIN);
      }
      else if(!strncmp((yyvsp[(1) - (1)].c), "TL", 2)){
	ViewValueList = &ViewData->TL; ViewNumList = &ViewData->NbTL;
        if(strlen((yyvsp[(1) - (1)].c)) > 2) ViewData->setOrder2(TYPE_LIN);
      }
      else if(!strncmp((yyvsp[(1) - (1)].c), "ST", 2)){
	ViewValueList = &ViewData->ST; ViewNumList = &ViewData->NbST;
        if(strlen((yyvsp[(1) - (1)].c)) > 2) ViewData->setOrder2(TYPE_TRI);
      }
      else if(!strncmp((yyvsp[(1) - (1)].c), "VT", 2)){
	ViewValueList = &ViewData->VT; ViewNumList = &ViewData->NbVT;
        if(strlen((yyvsp[(1) - (1)].c)) > 2) ViewData->setOrder2(TYPE_TRI);
      }
      else if(!strncmp((yyvsp[(1) - (1)].c), "TT", 2)){
	ViewValueList = &ViewData->TT; ViewNumList = &ViewData->NbTT;
        if(strlen((yyvsp[(1) - (1)].c)) > 2) ViewData->setOrder2(TYPE_TRI);
      }
      else if(!strncmp((yyvsp[(1) - (1)].c), "SQ", 2)){
	ViewValueList = &ViewData->SQ; ViewNumList = &ViewData->NbSQ;
        if(strlen((yyvsp[(1) - (1)].c)) > 2) ViewData->setOrder2(TYPE_QUA);
      }
      else if(!strncmp((yyvsp[(1) - (1)].c), "VQ", 2)){
	ViewValueList = &ViewData->VQ; ViewNumList = &ViewData->NbVQ;
        if(strlen((yyvsp[(1) - (1)].c)) > 2) ViewData->setOrder2(TYPE_QUA);
      }
      else if(!strncmp((yyvsp[(1) - (1)].c), "TQ", 2)){
	ViewValueList = &ViewData->TQ; ViewNumList = &ViewData->NbTQ;
        if(strlen((yyvsp[(1) - (1)].c)) > 2) ViewData->setOrder2(TYPE_QUA);
      }
      else if(!strncmp((yyvsp[(1) - (1)].c), "SS", 2)){
	ViewValueList = &ViewData->SS; ViewNumList = &ViewData->NbSS;
        if(strlen((yyvsp[(1) - (1)].c)) > 2) ViewData->setOrder2(TYPE_TET);
      }
      else if(!strncmp((yyvsp[(1) - (1)].c), "VS", 2)){
	ViewValueList = &ViewData->VS; ViewNumList = &ViewData->NbVS;
        if(strlen((yyvsp[(1) - (1)].c)) > 2) ViewData->setOrder2(TYPE_TET);
      }
      else if(!strncmp((yyvsp[(1) - (1)].c), "TS", 2)){
	ViewValueList = &ViewData->TS; ViewNumList = &ViewData->NbTS;
        if(strlen((yyvsp[(1) - (1)].c)) > 2) ViewData->setOrder2(TYPE_TET);
      }
      else if(!strncmp((yyvsp[(1) - (1)].c), "SH", 2)){
	ViewValueList = &ViewData->SH; ViewNumList = &ViewData->NbSH;
        if(strlen((yyvsp[(1) - (1)].c)) > 2) ViewData->setOrder2(TYPE_HEX);
      }
      else if(!strncmp((yyvsp[(1) - (1)].c), "VH", 2)){
	ViewValueList = &ViewData->VH; ViewNumList = &ViewData->NbVH;
        if(strlen((yyvsp[(1) - (1)].c)) > 2) ViewData->setOrder2(TYPE_HEX);
      }
      else if(!strncmp((yyvsp[(1) - (1)].c), "TH", 2)){
	ViewValueList = &ViewData->TH; ViewNumList = &ViewData->NbTH;
        if(strlen((yyvsp[(1) - (1)].c)) > 2) ViewData->setOrder2(TYPE_HEX);
      }
      else if(!strncmp((yyvsp[(1) - (1)].c), "SI", 2)){
	ViewValueList = &ViewData->SI; ViewNumList = &ViewData->NbSI;
        if(strlen((yyvsp[(1) - (1)].c)) > 2) ViewData->setOrder2(TYPE_PRI);
      }
      else if(!strncmp((yyvsp[(1) - (1)].c), "VI", 2)){
	ViewValueList = &ViewData->VI; ViewNumList = &ViewData->NbVI;
        if(strlen((yyvsp[(1) - (1)].c)) > 2) ViewData->setOrder2(TYPE_PRI);
      }
      else if(!strncmp((yyvsp[(1) - (1)].c), "TI", 2)){
	ViewValueList = &ViewData->TI; ViewNumList = &ViewData->NbTI;
        if(strlen((yyvsp[(1) - (1)].c)) > 2) ViewData->setOrder2(TYPE_PRI);
      }
      else if(!strncmp((yyvsp[(1) - (1)].c), "SY", 2)){
	ViewValueList = &ViewData->SY; ViewNumList = &ViewData->NbSY;
        if(strlen((yyvsp[(1) - (1)].c)) > 2) ViewData->setOrder2(TYPE_PYR);
      }
      else if(!strncmp((yyvsp[(1) - (1)].c), "VY", 2)){
	ViewValueList = &ViewData->VY; ViewNumList = &ViewData->NbVY;
        if(strlen((yyvsp[(1) - (1)].c)) > 2) ViewData->setOrder2(TYPE_PYR);
      }
      else if(!strncmp((yyvsp[(1) - (1)].c), "TY", 2)){
	ViewValueList = &ViewData->TY; ViewNumList = &ViewData->NbTY;
        if(strlen((yyvsp[(1) - (1)].c)) > 2) ViewData->setOrder2(TYPE_PYR);
      }
      else{
	yymsg(0, "Unknown element type '%s'", (yyvsp[(1) - (1)].c));
	ViewValueList = 0; ViewNumList = 0;
      }
#endif
      ViewCoord.clear();
      Free((yyvsp[(1) - (1)].c));
    ;}
    break;

  case 49:
#line 599 "Gmsh.y"
    {
#if defined(HAVE_POST)
      if(ViewValueList){
	for(int i = 0; i < 3; i++)
	  for(unsigned int j = 0; j < ViewCoord.size() / 3; j++)
	    ViewValueList->push_back(ViewCoord[3 * j + i]);
      }
#endif
    ;}
    break;

  case 50:
#line 609 "Gmsh.y"
    {
#if defined(HAVE_POST)
      if(ViewValueList) (*ViewNumList)++;
#endif
    ;}
    break;

  case 51:
#line 618 "Gmsh.y"
    {
#if defined(HAVE_POST)
      for(int i = 0; i < (int)strlen((yyvsp[(1) - (1)].c)) + 1; i++) ViewData->T2C.push_back((yyvsp[(1) - (1)].c)[i]);
#endif
      Free((yyvsp[(1) - (1)].c));
    ;}
    break;

  case 52:
#line 625 "Gmsh.y"
    {
#if defined(HAVE_POST)
      for(int i = 0; i < (int)strlen((yyvsp[(3) - (3)].c)) + 1; i++) ViewData->T2C.push_back((yyvsp[(3) - (3)].c)[i]);
#endif
      Free((yyvsp[(3) - (3)].c));
    ;}
    break;

  case 53:
#line 635 "Gmsh.y"
    {
#if defined(HAVE_POST)
      ViewData->T2D.push_back((yyvsp[(3) - (8)].d));
      ViewData->T2D.push_back((yyvsp[(5) - (8)].d));
      ViewData->T2D.push_back((yyvsp[(7) - (8)].d));
      ViewData->T2D.push_back(ViewData->T2C.size());
#endif
    ;}
    break;

  case 54:
#line 644 "Gmsh.y"
    {
#if defined(HAVE_POST)
      ViewData->NbT2++;
#endif
    ;}
    break;

  case 55:
#line 653 "Gmsh.y"
    {
#if defined(HAVE_POST)
      for(int i = 0; i < (int)strlen((yyvsp[(1) - (1)].c)) + 1; i++) ViewData->T3C.push_back((yyvsp[(1) - (1)].c)[i]);
#endif
      Free((yyvsp[(1) - (1)].c));
    ;}
    break;

  case 56:
#line 660 "Gmsh.y"
    {
#if defined(HAVE_POST)
      for(int i = 0; i < (int)strlen((yyvsp[(3) - (3)].c)) + 1; i++) ViewData->T3C.push_back((yyvsp[(3) - (3)].c)[i]);
#endif
      Free((yyvsp[(3) - (3)].c));
    ;}
    break;

  case 57:
#line 670 "Gmsh.y"
    {
#if defined(HAVE_POST)
      ViewData->T3D.push_back((yyvsp[(3) - (10)].d)); ViewData->T3D.push_back((yyvsp[(5) - (10)].d));
      ViewData->T3D.push_back((yyvsp[(7) - (10)].d)); ViewData->T3D.push_back((yyvsp[(9) - (10)].d));
      ViewData->T3D.push_back(ViewData->T3C.size());
#endif
    ;}
    break;

  case 58:
#line 678 "Gmsh.y"
    {
#if defined(HAVE_POST)
      ViewData->NbT3++;
#endif
    ;}
    break;

  case 59:
#line 688 "Gmsh.y"
    {
#if defined(HAVE_POST)
      int type =
	(ViewData->NbSL || ViewData->NbVL) ? TYPE_LIN :
	(ViewData->NbST || ViewData->NbVT) ? TYPE_TRI :
	(ViewData->NbSQ || ViewData->NbVQ) ? TYPE_QUA :
	(ViewData->NbSS || ViewData->NbVS) ? TYPE_TET :
	(ViewData->NbSY || ViewData->NbVY) ? TYPE_PYR :
	(ViewData->NbSI || ViewData->NbVI) ? TYPE_PRI :
      	(ViewData->NbSH || ViewData->NbVH) ? TYPE_HEX :
	0;
      ViewData->setInterpolationMatrices(type, ListOfListOfDouble2Matrix((yyvsp[(3) - (8)].l)),
                                         ListOfListOfDouble2Matrix((yyvsp[(6) - (8)].l)));
#endif
    ;}
    break;

  case 60:
#line 707 "Gmsh.y"
    {
#if defined(HAVE_POST)
      int type =
	(ViewData->NbSL || ViewData->NbVL) ? TYPE_LIN :
	(ViewData->NbST || ViewData->NbVT) ? TYPE_TRI :
	(ViewData->NbSQ || ViewData->NbVQ) ? TYPE_QUA :
	(ViewData->NbSS || ViewData->NbVS) ? TYPE_TET :
      	(ViewData->NbSH || ViewData->NbVH) ? TYPE_HEX :
	0;
      ViewData->setInterpolationMatrices(type, ListOfListOfDouble2Matrix((yyvsp[(3) - (14)].l)),
                                         ListOfListOfDouble2Matrix((yyvsp[(6) - (14)].l)),
                                         ListOfListOfDouble2Matrix((yyvsp[(9) - (14)].l)),
                                         ListOfListOfDouble2Matrix((yyvsp[(12) - (14)].l)));
#endif
    ;}
    break;

  case 61:
#line 726 "Gmsh.y"
    {
#if defined(HAVE_POST)
      ViewValueList = &ViewData->Time;
#endif
    ;}
    break;

  case 62:
#line 732 "Gmsh.y"
    {
    ;}
    break;

  case 63:
#line 739 "Gmsh.y"
    { (yyval.i) = 0; ;}
    break;

  case 64:
#line 740 "Gmsh.y"
    { (yyval.i) = 1; ;}
    break;

  case 65:
#line 741 "Gmsh.y"
    { (yyval.i) = 2; ;}
    break;

  case 66:
#line 742 "Gmsh.y"
    { (yyval.i) = 3; ;}
    break;

  case 67:
#line 743 "Gmsh.y"
    { (yyval.i) = 4; ;}
    break;

  case 68:
#line 747 "Gmsh.y"
    { (yyval.i) = 1; ;}
    break;

  case 69:
#line 748 "Gmsh.y"
    { (yyval.i) = -1; ;}
    break;

  case 70:
#line 754 "Gmsh.y"
    { (yyval.c) = (char*)"("; ;}
    break;

  case 71:
#line 754 "Gmsh.y"
    { (yyval.c) = (char*)"["; ;}
    break;

  case 72:
#line 755 "Gmsh.y"
    { (yyval.c) = (char*)")"; ;}
    break;

  case 73:
#line 755 "Gmsh.y"
    { (yyval.c) = (char*)"]"; ;}
    break;

  case 77:
#line 765 "Gmsh.y"
    {
      Msg::SetOnelabNumber((yyvsp[(3) - (7)].c), (yyvsp[(5) - (7)].d));
      Free((yyvsp[(3) - (7)].c));
    ;}
    break;

  case 78:
#line 770 "Gmsh.y"
    {
      Msg::SetOnelabString((yyvsp[(3) - (7)].c), (yyvsp[(5) - (7)].c));
      Free((yyvsp[(3) - (7)].c));
      Free((yyvsp[(5) - (7)].c));
    ;}
    break;

  case 79:
#line 776 "Gmsh.y"
    {
      if(!gmsh_yysymbols.count((yyvsp[(1) - (4)].c)) && (yyvsp[(2) - (4)].i) && List_Nbr((yyvsp[(3) - (4)].l)) == 1){
        yymsg(0, "Unknown variable '%s'", (yyvsp[(1) - (4)].c));
      }
      else{
        gmsh_yysymbol &s(gmsh_yysymbols[(yyvsp[(1) - (4)].c)]);
        if(!(yyvsp[(2) - (4)].i)) s.list = (List_Nbr((yyvsp[(3) - (4)].l)) != 1); // list if 0 or > 1 elements
        if(!s.list){ // single expression
          if(List_Nbr((yyvsp[(3) - (4)].l)) != 1){
            yymsg(0, "Cannot assign list to variable '%s'", (yyvsp[(1) - (4)].c));
          }
          else{
            double d;
            List_Read((yyvsp[(3) - (4)].l), 0, &d);
            if(s.value.empty()){
              if((yyvsp[(2) - (4)].i)) yymsg(1, "Uninitialized variable '%s'", (yyvsp[(1) - (4)].c));
              s.value.resize(1, 0.);
            }
            switch((yyvsp[(2) - (4)].i)){
            case 0 : s.value[0] = d; break;
            case 1 : s.value[0] += d; break;
            case 2 : s.value[0] -= d; break;
            case 3 : s.value[0] *= d; break;
            case 4 :
              if(d) s.value[0] /= d;
              else yymsg(0, "Division by zero in '%s /= %g'", (yyvsp[(1) - (4)].c), d);
              break;
            }
          }
        }
        else{
          // list of expressions; this is not recommended (should use [] or ()
          // notation instead)
          switch((yyvsp[(2) - (4)].i)){
          case 0: // affect
            s.value.clear(); // fall-through
          case 1: // append
            for(int i = 0; i < List_Nbr((yyvsp[(3) - (4)].l)); i++){
              double d;
              List_Read((yyvsp[(3) - (4)].l), i, &d);
              s.value.push_back(d);
            }
            break;
          case 2: // remove
            for(int i = 0; i < List_Nbr((yyvsp[(3) - (4)].l)); i++){
              double d;
              List_Read((yyvsp[(3) - (4)].l), i, &d);
              std::vector<double>::iterator it = std::find(s.value.begin(),
                                                           s.value.end(), d);
              if(it != s.value.end()) s.value.erase(it);
            }
            break;
          default:
            yymsg(0, "Operators *= and /= not available for lists");
            break;
          }
        }
      }
      Free((yyvsp[(1) - (4)].c));
      List_Delete((yyvsp[(3) - (4)].l));
    ;}
    break;

  case 80:
#line 838 "Gmsh.y"
    {
      if(!gmsh_yysymbols.count((yyvsp[(1) - (3)].c)))
	yymsg(0, "Unknown variable '%s'", (yyvsp[(1) - (3)].c));
      else{
        gmsh_yysymbol &s(gmsh_yysymbols[(yyvsp[(1) - (3)].c)]);
        if(!s.list && s.value.empty())
          yymsg(0, "Uninitialized variable '%s'", (yyvsp[(1) - (3)].c));
        else if(!s.list)
          s.value[0] += (yyvsp[(2) - (3)].i);
        else
          yymsg(0, "Variable '%s' is a list", (yyvsp[(1) - (3)].c));
      }
      Free((yyvsp[(1) - (3)].c));
    ;}
    break;

  case 81:
#line 853 "Gmsh.y"
    {
      gmsh_yysymbol &s(gmsh_yysymbols[(yyvsp[(1) - (6)].c)]);
      s.list = true;
      double d;
      switch((yyvsp[(4) - (6)].i)){
      case 0: // affect
        s.value.clear(); // fall-through
      case 1: // append
        for(int i = 0; i < List_Nbr((yyvsp[(5) - (6)].l)); i++){
          List_Read((yyvsp[(5) - (6)].l), i, &d);
          s.value.push_back(d);
        }
        break;
      case 2: // remove
        for(int i = 0; i < List_Nbr((yyvsp[(5) - (6)].l)); i++){
          List_Read((yyvsp[(5) - (6)].l), i, &d);
          std::vector<double>::iterator it = std::find(s.value.begin(),
                                                       s.value.end(), d);
          if(it != s.value.end()) s.value.erase(it);
        }
        break;
      default:
        yymsg(0, "Operators *= and /= not available for lists");
        break;
      }
      Free((yyvsp[(1) - (6)].c));
      List_Delete((yyvsp[(5) - (6)].l));
    ;}
    break;

  case 82:
#line 882 "Gmsh.y"
    {
      assignVariables((yyvsp[(1) - (9)].c), (yyvsp[(4) - (9)].l), (yyvsp[(7) - (9)].i), (yyvsp[(8) - (9)].l));
      Free((yyvsp[(1) - (9)].c));
      List_Delete((yyvsp[(4) - (9)].l));
      List_Delete((yyvsp[(8) - (9)].l));
    ;}
    break;

  case 83:
#line 892 "Gmsh.y"
    {
      assignVariable((yyvsp[(1) - (7)].c), (int)(yyvsp[(3) - (7)].d), (yyvsp[(5) - (7)].i), (yyvsp[(6) - (7)].d));
      Free((yyvsp[(1) - (7)].c));
    ;}
    break;

  case 84:
#line 897 "Gmsh.y"
    {
      incrementVariable((yyvsp[(1) - (6)].c), (yyvsp[(3) - (6)].d), (yyvsp[(5) - (6)].i));
      Free((yyvsp[(1) - (6)].c));
    ;}
    break;

  case 85:
#line 905 "Gmsh.y"
    {
      assignVariable((yyvsp[(1) - (7)].c), (int)(yyvsp[(3) - (7)].d), (yyvsp[(5) - (7)].i), (yyvsp[(6) - (7)].d));
      Free((yyvsp[(1) - (7)].c));
    ;}
    break;

  case 86:
#line 910 "Gmsh.y"
    {
      incrementVariable((yyvsp[(1) - (6)].c), (yyvsp[(3) - (6)].d), (yyvsp[(5) - (6)].i));
      Free((yyvsp[(1) - (6)].c));
    ;}
    break;

  case 87:
#line 918 "Gmsh.y"
    {
      gmsh_yystringsymbols[(yyvsp[(1) - (4)].c)] = std::vector<std::string>(1, (yyvsp[(3) - (4)].c));
      Free((yyvsp[(1) - (4)].c));
      Free((yyvsp[(3) - (4)].c));
    ;}
    break;

  case 88:
#line 927 "Gmsh.y"
    {
      gmsh_yystringsymbols[(yyvsp[(1) - (8)].c)] = std::vector<std::string>();
      Free((yyvsp[(1) - (8)].c));
    ;}
    break;

  case 89:
#line 932 "Gmsh.y"
    {
      std::vector<std::string> s;
      for(int i = 0; i < List_Nbr((yyvsp[(7) - (9)].l)); i++){
        char **c = (char**)List_Pointer((yyvsp[(7) - (9)].l), i);
        s.push_back(*c);
        Free(*c);
      }
      gmsh_yystringsymbols[(yyvsp[(1) - (9)].c)] = s;
      Free((yyvsp[(1) - (9)].c));
      List_Delete((yyvsp[(7) - (9)].l));
    ;}
    break;

  case 90:
#line 944 "Gmsh.y"
    {
      if(gmsh_yystringsymbols.count((yyvsp[(1) - (9)].c))){
        for(int i = 0; i < List_Nbr((yyvsp[(7) - (9)].l)); i++){
          char **c = (char**)List_Pointer((yyvsp[(7) - (9)].l), i);
          gmsh_yystringsymbols[(yyvsp[(1) - (9)].c)].push_back(*c);
          Free(*c);
        }
      }
      else
        yymsg(0, "Uninitialized variable '%s'", (yyvsp[(1) - (9)].c));
      Free((yyvsp[(1) - (9)].c));
      List_Delete((yyvsp[(7) - (9)].l));
    ;}
    break;

  case 91:
#line 961 "Gmsh.y"
    {
      std::string tmp((yyvsp[(5) - (6)].c));
      StringOption(GMSH_SET|GMSH_GUI, (yyvsp[(1) - (6)].c), 0, (yyvsp[(3) - (6)].c), tmp);
      Free((yyvsp[(1) - (6)].c)); Free((yyvsp[(3) - (6)].c)); Free((yyvsp[(5) - (6)].c));
    ;}
    break;

  case 92:
#line 967 "Gmsh.y"
    {
      std::string tmp((yyvsp[(8) - (9)].c));
      StringOption(GMSH_SET|GMSH_GUI, (yyvsp[(1) - (9)].c), (int)(yyvsp[(3) - (9)].d), (yyvsp[(6) - (9)].c), tmp);
      Free((yyvsp[(1) - (9)].c)); Free((yyvsp[(6) - (9)].c)); Free((yyvsp[(8) - (9)].c));
    ;}
    break;

  case 93:
#line 976 "Gmsh.y"
    {
      double d = 0.;
      if(NumberOption(GMSH_GET, (yyvsp[(1) - (6)].c), 0, (yyvsp[(3) - (6)].c), d)){
	switch((yyvsp[(4) - (6)].i)){
	case 0 : d = (yyvsp[(5) - (6)].d); break;
	case 1 : d += (yyvsp[(5) - (6)].d); break;
	case 2 : d -= (yyvsp[(5) - (6)].d); break;
	case 3 : d *= (yyvsp[(5) - (6)].d); break;
	case 4 :
	  if((yyvsp[(5) - (6)].d)) d /= (yyvsp[(5) - (6)].d);
	  else yymsg(0, "Division by zero in '%s.%s /= %g'", (yyvsp[(1) - (6)].c), (yyvsp[(3) - (6)].c), (yyvsp[(5) - (6)].d));
	  break;
	}
	NumberOption(GMSH_SET|GMSH_GUI, (yyvsp[(1) - (6)].c), 0, (yyvsp[(3) - (6)].c), d);
      }
      Free((yyvsp[(1) - (6)].c)); Free((yyvsp[(3) - (6)].c));
    ;}
    break;

  case 94:
#line 994 "Gmsh.y"
    {
      double d = 0.;
      if(NumberOption(GMSH_GET, (yyvsp[(1) - (9)].c), (int)(yyvsp[(3) - (9)].d), (yyvsp[(6) - (9)].c), d)){
	switch((yyvsp[(7) - (9)].i)){
	case 0 : d = (yyvsp[(8) - (9)].d); break;
	case 1 : d += (yyvsp[(8) - (9)].d); break;
	case 2 : d -= (yyvsp[(8) - (9)].d); break;
	case 3 : d *= (yyvsp[(8) - (9)].d); break;
	case 4 :
	  if((yyvsp[(8) - (9)].d)) d /= (yyvsp[(8) - (9)].d);
	  else yymsg(0, "Division by zero in '%s[%d].%s /= %g'", (yyvsp[(1) - (9)].c), (int)(yyvsp[(3) - (9)].d), (yyvsp[(6) - (9)].c), (yyvsp[(8) - (9)].d));
	  break;
	}
	NumberOption(GMSH_SET|GMSH_GUI, (yyvsp[(1) - (9)].c), (int)(yyvsp[(3) - (9)].d), (yyvsp[(6) - (9)].c), d);
      }
      Free((yyvsp[(1) - (9)].c)); Free((yyvsp[(6) - (9)].c));
    ;}
    break;

  case 95:
#line 1012 "Gmsh.y"
    {
      double d = 0.;
      if(NumberOption(GMSH_GET, (yyvsp[(1) - (5)].c), 0, (yyvsp[(3) - (5)].c), d)){
	d += (yyvsp[(4) - (5)].i);
	NumberOption(GMSH_SET|GMSH_GUI, (yyvsp[(1) - (5)].c), 0, (yyvsp[(3) - (5)].c), d);
      }
      Free((yyvsp[(1) - (5)].c)); Free((yyvsp[(3) - (5)].c));
    ;}
    break;

  case 96:
#line 1021 "Gmsh.y"
    {
      double d = 0.;
      if(NumberOption(GMSH_GET, (yyvsp[(1) - (8)].c), (int)(yyvsp[(3) - (8)].d), (yyvsp[(6) - (8)].c), d)){
	d += (yyvsp[(7) - (8)].i);
	NumberOption(GMSH_SET|GMSH_GUI, (yyvsp[(1) - (8)].c), (int)(yyvsp[(3) - (8)].d), (yyvsp[(6) - (8)].c), d);
      }
      Free((yyvsp[(1) - (8)].c)); Free((yyvsp[(6) - (8)].c));
    ;}
    break;

  case 97:
#line 1033 "Gmsh.y"
    {
      ColorOption(GMSH_SET|GMSH_GUI, (yyvsp[(1) - (8)].c), 0, (yyvsp[(5) - (8)].c), (yyvsp[(7) - (8)].u));
      Free((yyvsp[(1) - (8)].c)); Free((yyvsp[(5) - (8)].c));
    ;}
    break;

  case 98:
#line 1038 "Gmsh.y"
    {
      ColorOption(GMSH_SET|GMSH_GUI, (yyvsp[(1) - (11)].c), (int)(yyvsp[(3) - (11)].d), (yyvsp[(8) - (11)].c), (yyvsp[(10) - (11)].u));
      Free((yyvsp[(1) - (11)].c)); Free((yyvsp[(8) - (11)].c));
    ;}
    break;

  case 99:
#line 1046 "Gmsh.y"
    {
      GmshColorTable *ct = GetColorTable(0);
      if(!ct)
	yymsg(0, "View[%d] does not exist", 0);
      else{
	ct->size = List_Nbr((yyvsp[(5) - (6)].l));
	if(ct->size > COLORTABLE_NBMAX_COLOR)
	  yymsg(0, "Too many (%d>%d) colors in View[%d].ColorTable",
		ct->size, COLORTABLE_NBMAX_COLOR, 0);
	else
	  for(int i = 0; i < ct->size; i++) List_Read((yyvsp[(5) - (6)].l), i, &ct->table[i]);
	if(ct->size == 1){
	  ct->size = 2;
	  ct->table[1] = ct->table[0];
	}
      }
      Free((yyvsp[(1) - (6)].c));
      List_Delete((yyvsp[(5) - (6)].l));
    ;}
    break;

  case 100:
#line 1066 "Gmsh.y"
    {
      GmshColorTable *ct = GetColorTable((int)(yyvsp[(3) - (9)].d));
      if(!ct)
	yymsg(0, "View[%d] does not exist", (int)(yyvsp[(3) - (9)].d));
      else{
	ct->size = List_Nbr((yyvsp[(8) - (9)].l));
	if(ct->size > COLORTABLE_NBMAX_COLOR)
	  yymsg(0, "Too many (%d>%d) colors in View[%d].ColorTable",
		   ct->size, COLORTABLE_NBMAX_COLOR, (int)(yyvsp[(3) - (9)].d));
	else
	  for(int i = 0; i < ct->size; i++) List_Read((yyvsp[(8) - (9)].l), i, &ct->table[i]);
	if(ct->size == 1){
	  ct->size = 2;
	  ct->table[1] = ct->table[0];
	}
      }
      Free((yyvsp[(1) - (9)].c));
      List_Delete((yyvsp[(8) - (9)].l));
    ;}
    break;

  case 101:
#line 1089 "Gmsh.y"
    {
#if defined(HAVE_MESH)
      if(!strcmp((yyvsp[(1) - (5)].c),"Background"))
	GModel::current()->getFields()->setBackgroundFieldId((int)(yyvsp[(4) - (5)].d));
      else if(!strcmp((yyvsp[(1) - (5)].c),"BoundaryLayer"))
	GModel::current()->getFields()->setBoundaryLayerFieldId((int)(yyvsp[(4) - (5)].d));
      else
	yymsg(0, "Unknown command '%s Field'", (yyvsp[(1) - (5)].c));
#endif
    ;}
    break;

  case 102:
#line 1100 "Gmsh.y"
    {
#if defined(HAVE_MESH)
      if(!GModel::current()->getFields()->newField((int)(yyvsp[(3) - (7)].d), (yyvsp[(6) - (7)].c)))
	yymsg(0, "Cannot create field %i of type '%s'", (int)(yyvsp[(3) - (7)].d), (yyvsp[(6) - (7)].c));
#endif
      Free((yyvsp[(6) - (7)].c));
    ;}
    break;

  case 103:
#line 1108 "Gmsh.y"
    {
#if defined(HAVE_MESH)
      Field *field = GModel::current()->getFields()->get((int)(yyvsp[(3) - (9)].d));
      if(field){
	FieldOption *option = field->options[(yyvsp[(6) - (9)].c)];
	if(option){
	  try { option->numericalValue((yyvsp[(8) - (9)].d)); }
	  catch(...){
	    yymsg(0, "Cannot assign a numerical value to option '%s' "
		  "in field %i of type '%s'", (yyvsp[(6) - (9)].c), (int)(yyvsp[(3) - (9)].d), field->getName());
	  }
	}
	else
	  yymsg(0, "Unknown option '%s' in field %i of type '%s'",
		(yyvsp[(6) - (9)].c), (int)(yyvsp[(3) - (9)].d), field->getName());
      }
      else
	yymsg(0, "No field with id %i", (int)(yyvsp[(3) - (9)].d));
#endif
      Free((yyvsp[(6) - (9)].c));
    ;}
    break;

  case 104:
#line 1130 "Gmsh.y"
    {
#if defined(HAVE_MESH)
      Field *field = GModel::current()->getFields()->get((int)(yyvsp[(3) - (9)].d));
      if(field){
	FieldOption *option = field->options[(yyvsp[(6) - (9)].c)];
	if(option){
	  try { option->string((yyvsp[(8) - (9)].c)); }
	  catch (...){
	    yymsg(0, "Cannot assign a string value to  option '%s' "
		  "in field %i of type '%s'", (yyvsp[(6) - (9)].c), (int)(yyvsp[(3) - (9)].d), field->getName());
	  }
	}
	else
	  yymsg(0, "Unknown option '%s' in field %i of type '%s'",
		(yyvsp[(6) - (9)].c), (int)(yyvsp[(3) - (9)].d), field->getName());
      }
      else
	yymsg(0, "No field with id %i", (int)(yyvsp[(3) - (9)].d));
#endif
      Free((yyvsp[(6) - (9)].c));
      Free((yyvsp[(8) - (9)].c));
    ;}
    break;

  case 105:
#line 1153 "Gmsh.y"
    {
#if defined(HAVE_MESH)
      Field *field = GModel::current()->getFields()->get((int)(yyvsp[(3) - (11)].d));
      if(field){
	FieldOption *option = field->options[(yyvsp[(6) - (11)].c)];
	if(option){
	  if (option->getType() == FIELD_OPTION_LIST) {
	    std::list<int> vl = option->list();
	    vl.clear();
	    for(int i = 0; i < List_Nbr((yyvsp[(9) - (11)].l)); i++){
	      double id;
	      List_Read((yyvsp[(9) - (11)].l), i, &id);
	      vl.push_back((int)id);
	    }
	    option->list(vl);
	  }
	  else {
	    std::list<double> vl = option->listdouble();
	    vl.clear();
	    for(int i = 0; i < List_Nbr((yyvsp[(9) - (11)].l)); i++){
	      double id;
	      List_Read((yyvsp[(9) - (11)].l), i, &id);
	      vl.push_back(id);
	    }
	    option->listdouble(vl);
	  }
	}
	else
	  yymsg(0, "Unknown option '%s' in field %i of type '%s'",
		(yyvsp[(6) - (11)].c), (int)(yyvsp[(3) - (11)].d), field->getName());
      }
      else
	yymsg(0, "No field with id %i", (int)(yyvsp[(3) - (11)].d));
#endif
      Free((yyvsp[(6) - (11)].c));
      List_Delete((yyvsp[(9) - (11)].l));
    ;}
    break;

  case 106:
#line 1191 "Gmsh.y"
    {
#if defined(HAVE_MESH)
      Field *field = GModel::current()->getFields()->get((int)(yyvsp[(3) - (7)].d));
      if(field){
        FieldCallback *callback = field->callbacks[(yyvsp[(6) - (7)].c)];
        if(callback) {
          callback->run();
        }
        else
          yymsg(0, "Unknown callback '%s' in field %i of type '%s'",
              (yyvsp[(6) - (7)].c), (int)(yyvsp[(3) - (7)].d), field->getName());
      }
      else
	yymsg(0, "No field with id %i", (int)(yyvsp[(3) - (7)].d));
#endif
      Free((yyvsp[(6) - (7)].c));
    ;}
    break;

  case 107:
#line 1212 "Gmsh.y"
    {
#if defined(HAVE_PLUGINS)
      try {
	PluginManager::instance()->setPluginOption((yyvsp[(3) - (9)].c), (yyvsp[(6) - (9)].c), (yyvsp[(8) - (9)].d));
      }
      catch (...) {
	yymsg(0, "Unknown option '%s' or plugin '%s'", (yyvsp[(6) - (9)].c), (yyvsp[(3) - (9)].c));
      }
#endif
      Free((yyvsp[(3) - (9)].c)); Free((yyvsp[(6) - (9)].c));
    ;}
    break;

  case 108:
#line 1224 "Gmsh.y"
    {
#if defined(HAVE_PLUGINS)
      try {
	PluginManager::instance()->setPluginOption((yyvsp[(3) - (9)].c), (yyvsp[(6) - (9)].c), (yyvsp[(8) - (9)].c));
      }
      catch (...) {
	yymsg(0, "Unknown option '%s' or plugin '%s'", (yyvsp[(6) - (9)].c), (yyvsp[(3) - (9)].c));
      }
#endif
      Free((yyvsp[(3) - (9)].c)); Free((yyvsp[(6) - (9)].c)); Free((yyvsp[(8) - (9)].c));
    ;}
    break;

  case 112:
#line 1242 "Gmsh.y"
    {
      std::string key((yyvsp[(3) - (3)].c));
      std::vector<double> val(1, 0.);
      if(!gmsh_yysymbols.count(key)){
        gmsh_yysymbols[key].value = val;
      }
      Free((yyvsp[(3) - (3)].c));
    ;}
    break;

  case 113:
#line 1251 "Gmsh.y"
    {
      std::string key((yyvsp[(3) - (5)].c));
      std::vector<double> val(1, (yyvsp[(5) - (5)].d));
      if(!gmsh_yysymbols.count(key)){
        gmsh_yysymbols[key].value = val;
      }
      Free((yyvsp[(3) - (5)].c));
    ;}
    break;

  case 114:
#line 1260 "Gmsh.y"
    { init_options(); ;}
    break;

  case 115:
#line 1262 "Gmsh.y"
    {
      if(List_Nbr((yyvsp[(6) - (9)].l)) != 1)
	yymsg(1, "List notation should be used to define list '%s[]'", (yyvsp[(3) - (9)].c));
      std::string key((yyvsp[(3) - (9)].c));
      std::vector<double> val;
      for(int i = 0; i < List_Nbr((yyvsp[(6) - (9)].l)); i++){
        double d;
        List_Read((yyvsp[(6) - (9)].l), i, &d);
        val.push_back(d);
      }
      if(!gmsh_yysymbols.count(key)){
        Msg::ExchangeOnelabParameter(key, val, floatOptions, charOptions);
        gmsh_yysymbols[key].value = val;
      }
      Free((yyvsp[(3) - (9)].c));
      Free((yyvsp[(6) - (9)].l));
    ;}
    break;

  case 116:
#line 1280 "Gmsh.y"
    { init_options(); ;}
    break;

  case 117:
#line 1282 "Gmsh.y"
    {
      std::string key((yyvsp[(3) - (11)].c));
      std::vector<double> val;
      for(int i = 0; i < List_Nbr((yyvsp[(8) - (11)].l)); i++){
        double d;
        List_Read((yyvsp[(8) - (11)].l), i, &d);
        val.push_back(d);
      }
      if(!gmsh_yysymbols.count(key)){
        Msg::ExchangeOnelabParameter(key, val, floatOptions, charOptions);
        gmsh_yysymbols[key].value = val;
      }
      Free((yyvsp[(3) - (11)].c));
      Free((yyvsp[(8) - (11)].l));
    ;}
    break;

  case 118:
#line 1298 "Gmsh.y"
    {
      std::string key((yyvsp[(3) - (5)].c)), val((yyvsp[(5) - (5)].c));
      if(!gmsh_yystringsymbols.count(key)){
        gmsh_yystringsymbols[key] = std::vector<std::string>(1, val);
      }
      Free((yyvsp[(3) - (5)].c));
      Free((yyvsp[(5) - (5)].c));
    ;}
    break;

  case 119:
#line 1307 "Gmsh.y"
    { init_options(); ;}
    break;

  case 120:
#line 1309 "Gmsh.y"
    {
      std::string key((yyvsp[(3) - (9)].c)), val((yyvsp[(6) - (9)].c));
      if(!gmsh_yysymbols.count(key)){
        Msg::ExchangeOnelabParameter(key, val, floatOptions, charOptions);
        gmsh_yystringsymbols[key] = std::vector<std::string>(1, val);
      }
      Free((yyvsp[(3) - (9)].c));
      Free((yyvsp[(6) - (9)].c));
    ;}
    break;

  case 122:
#line 1323 "Gmsh.y"
    {
      std::string name((yyvsp[(3) - (3)].c));
      Msg::UndefineOnelabParameter(name);
      Free((yyvsp[(3) - (3)].c));
    ;}
    break;

  case 123:
#line 1331 "Gmsh.y"
    {
      (yyval.l) = List_Create(20,20,sizeof(doubleXstring));
      doubleXstring v = {(yyvsp[(1) - (3)].d), (yyvsp[(3) - (3)].c)};
      List_Add((yyval.l), &v);
    ;}
    break;

  case 124:
#line 1337 "Gmsh.y"
    {
      doubleXstring v = {(yyvsp[(3) - (5)].d), (yyvsp[(5) - (5)].c)};
      List_Add((yyval.l), &v);
    ;}
    break;

  case 125:
#line 1342 "Gmsh.y"
    {
      (yyval.l) = List_Create(20,20,sizeof(doubleXstring));
      int n = List_Nbr((yyvsp[(1) - (5)].l));
      if(!gmsh_yystringsymbols.count((yyvsp[(3) - (5)].c))){
	yymsg(0, "Unknown string variable '%s'", (yyvsp[(3) - (5)].c));
      }
      else{
        std::vector<std::string> &s(gmsh_yystringsymbols[(yyvsp[(3) - (5)].c)]);
        int m = s.size();
        if(n == m){
          for(int i = 0; i < n; i++){
            double d;
            List_Read((yyvsp[(1) - (5)].l), i, &d);
            doubleXstring v = {d, strsave((char*)s[i].c_str())};
            List_Add((yyval.l), &v);
          }
        }
        else{
          yymsg(0, "Size mismatch in enumeration: %d != %d", n, m);
        }
      }
      List_Delete((yyvsp[(1) - (5)].l));
    ;}
    break;

  case 132:
#line 1384 "Gmsh.y"
    {
      std::string key((yyvsp[(1) - (2)].c));
      for(int i = 0; i < List_Nbr((yyvsp[(2) - (2)].l)); i++){
        double v;
        List_Read((yyvsp[(2) - (2)].l), i, &v);
        floatOptions[key].push_back(v);
        if (flag_Enum && !i) { member_ValMax = (int)v; }
      }
      Free((yyvsp[(1) - (2)].c));
      List_Delete((yyvsp[(2) - (2)].l));
    ;}
    break;

  case 133:
#line 1396 "Gmsh.y"
    {
      std::string key((yyvsp[(1) - (1)].c));
      double v;
      if (!flag_Enum) {
        v = 1.;
        if (key == "Enum") flag_Enum = 1;
      }
      else
        v = (double)++member_ValMax;
      floatOptions[key].push_back(v);
      Free((yyvsp[(1) - (1)].c));
    ;}
    break;

  case 134:
#line 1409 "Gmsh.y"
    {
      std::string key((yyvsp[(1) - (4)].c));
      for(int i = 0; i < List_Nbr((yyvsp[(3) - (4)].l)); i++){
        doubleXstring v;
        List_Read((yyvsp[(3) - (4)].l), i, &v);
        floatOptions[key].push_back(v.d);
        charOptions[key].push_back(v.s);
      }
      Free((yyvsp[(1) - (4)].c));
      for(int i = 0; i < List_Nbr((yyvsp[(3) - (4)].l)); i++)
        Free(((doubleXstring*)List_Pointer((yyvsp[(3) - (4)].l), i))->s);
      List_Delete((yyvsp[(3) - (4)].l));
    ;}
    break;

  case 135:
#line 1424 "Gmsh.y"
    {
      std::string key((yyvsp[(1) - (2)].c));
      std::string val((yyvsp[(2) - (2)].c));
      charOptions[key].push_back(val);
      Free((yyvsp[(1) - (2)].c));
      Free((yyvsp[(2) - (2)].c));
    ;}
    break;

  case 136:
#line 1433 "Gmsh.y"
    {
      std::string key((yyvsp[(1) - (2)].c));
      for(int i = 0; i < List_Nbr((yyvsp[(2) - (2)].l)); i++){
        char *v;
        List_Read((yyvsp[(2) - (2)].l), i, &v);
        charOptions[key].push_back(v);
      }
      Free((yyvsp[(1) - (2)].c));
      List_Delete((yyvsp[(2) - (2)].l));
    ;}
    break;

  case 141:
#line 1458 "Gmsh.y"
    {
      std::string key((yyvsp[(1) - (2)].c));
      double val = (yyvsp[(2) - (2)].d);
      floatOptions[key].push_back(val);
      Free((yyvsp[(1) - (2)].c));
    ;}
    break;

  case 142:
#line 1466 "Gmsh.y"
    {
      std::string key((yyvsp[(1) - (2)].c));
      std::string val((yyvsp[(2) - (2)].c));
      charOptions[key].push_back(val);
      Free((yyvsp[(1) - (2)].c));
      Free((yyvsp[(2) - (2)].c));
    ;}
    break;

  case 143:
#line 1475 "Gmsh.y"
    {
      std::string key("Macro");
      std::string val((yyvsp[(2) - (2)].c));
      charOptions[key].push_back(val);
      Free((yyvsp[(2) - (2)].c));
    ;}
    break;

  case 144:
#line 1483 "Gmsh.y"
    {
      std::string key((yyvsp[(1) - (2)].c));
      for(int i = 0; i < List_Nbr((yyvsp[(2) - (2)].l)); i++){
        char *s;
        List_Read((yyvsp[(2) - (2)].l), i, &s);
        std::string val(s);
        Free(s);
        charOptions[key].push_back(val);
      }
      Free((yyvsp[(1) - (2)].c));
      List_Delete((yyvsp[(2) - (2)].l));
    ;}
    break;

  case 145:
#line 1497 "Gmsh.y"
    {
      std::string key((yyvsp[(1) - (2)].c));
      for(int i = 0; i < List_Nbr((yyvsp[(2) - (2)].l)); i++){
        char *s;
        List_Read((yyvsp[(2) - (2)].l), i, &s);
        std::string val(s);
        Free(s);
        charOptions[key].push_back(val);
      }
      Free((yyvsp[(1) - (2)].c));
      List_Delete((yyvsp[(2) - (2)].l));
    ;}
    break;

  case 146:
#line 1515 "Gmsh.y"
    {
      (yyval.i) = (int)(yyvsp[(1) - (1)].d);
    ;}
    break;

  case 147:
#line 1519 "Gmsh.y"
    {
      int t = GModel::current()->getGEOInternals()->getMaxPhysicalTag();
      GModel::current()->getGEOInternals()->setMaxPhysicalTag(t + 1);
      (yyval.i) = GModel::current()->setPhysicalName(std::string((yyvsp[(1) - (1)].c)), dim_entity, t + 1);
      Free((yyvsp[(1) - (1)].c));
    ;}
    break;

  case 148:
#line 1526 "Gmsh.y"
    {
      (yyval.i) = GModel::current()->setPhysicalName(std::string((yyvsp[(1) - (3)].c)), dim_entity, (yyvsp[(3) - (3)].d));
      Free((yyvsp[(1) - (3)].c));
    ;}
    break;

  case 149:
#line 1534 "Gmsh.y"
    {
      (yyval.i) = -1;
    ;}
    break;

  case 150:
#line 1538 "Gmsh.y"
    {
      (yyval.i) = (int)(yyvsp[(4) - (5)].d);
    ;}
    break;

  case 151:
#line 1544 "Gmsh.y"
    {
      for(int i = 0; i < 4; i++) (yyval.v)[i] = 0.;
    ;}
    break;

  case 152:
#line 1548 "Gmsh.y"
    {
      for(int i = 0; i < 4; i++) (yyval.v)[i] = (yyvsp[(2) - (2)].v)[i];
    ;}
    break;

  case 153:
#line 1555 "Gmsh.y"
    {
      int num = (int)(yyvsp[(3) - (7)].d);
      double x = CTX::instance()->geom.scalingFactor * (yyvsp[(6) - (7)].v)[0];
      double y = CTX::instance()->geom.scalingFactor * (yyvsp[(6) - (7)].v)[1];
      double z = CTX::instance()->geom.scalingFactor * (yyvsp[(6) - (7)].v)[2];
      double lc = CTX::instance()->geom.scalingFactor * (yyvsp[(6) - (7)].v)[3];
      if(lc == 0.) lc = MAX_LC; // no mesh size given at the point
      bool r = true;
      if(gmsh_yyfactory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        r = GModel::current()->getOCCInternals()->addVertex(num, x, y, z, lc);
      }
      else{
        if(!myGmshSurface)
          r = GModel::current()->getGEOInternals()->addVertex(num, x, y, z, lc);
        else
          r = GModel::current()->getGEOInternals()->addVertex(num, x, y,
                                                              myGmshSurface, lc);
      }
      if(!r) yymsg(0, "Could not add point");
      AddToTemporaryBoundingBox(x, y, z);
      (yyval.s).Type = MSH_POINT;
      (yyval.s).Num = num;
    ;}
    break;

  case 154:
#line 1579 "Gmsh.y"
    {
      int num = (int)(yyvsp[(3) - (7)].d);
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(6) - (7)].l), tags);
      bool r = true;
      if(gmsh_yyfactory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        r = GModel::current()->getOCCInternals()->addLine(num, tags);
      }
      else{
        r = GModel::current()->getGEOInternals()->addLine(num, tags);
      }
      if(!r) yymsg(0, "Could not add line");
      List_Delete((yyvsp[(6) - (7)].l));
      (yyval.s).Type = MSH_SEGM_LINE;
      (yyval.s).Num = num;
    ;}
    break;

  case 155:
#line 1595 "Gmsh.y"
    {
      int num = (int)(yyvsp[(3) - (7)].d);
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(6) - (7)].l), tags);
      bool r = true;
      if(gmsh_yyfactory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        r = GModel::current()->getOCCInternals()->addSpline(num, tags);
      }
      else{
        r = GModel::current()->getGEOInternals()->addSpline(num, tags);
      }
      if(!r) yymsg(0, "Could not add spline");
      List_Delete((yyvsp[(6) - (7)].l));
      (yyval.s).Type = MSH_SEGM_SPLN;
      (yyval.s).Num = num;
    ;}
    break;

  case 156:
#line 1611 "Gmsh.y"
    {
      int num = (int)(yyvsp[(3) - (8)].d);
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(6) - (8)].l), tags);
      std::vector<double> param; ListOfDouble2Vector((yyvsp[(6) - (8)].l), param);
      bool r = true;
      if(gmsh_yyfactory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        if(tags.size() == 3){
          r = GModel::current()->getOCCInternals()->addCircleArc
            (num, tags[0], tags[1], tags[2]);
        }
        else if(param.size() >= 4 && param.size() <= 6){
          double r = param[3];
          double a1 = (param.size() == 6) ? param[4] : 0.;
          double a2 = (param.size() == 6) ? param[5] :
            (param.size() == 5) ? param[4] : 2.*M_PI;
          r = GModel::current()->getOCCInternals()->addCircle
            (num, param[0], param[1], param[2], r, a1, a2);
        }
        else{
          yymsg(0, "Circle requires 3 points or 4 to 6 parameters");
        }
      }
      else{
        if(tags.size() == 3){
          r = GModel::current()->getGEOInternals()->addCircleArc
            (num, tags[0], tags[1], tags[2], (yyvsp[(7) - (8)].v)[0], (yyvsp[(7) - (8)].v)[1], (yyvsp[(7) - (8)].v)[2]);
        }
        else{
          yymsg(0, "Circle requires 3 points");
        }
      }
      if(!r) yymsg(0, "Could not add circle");
      List_Delete((yyvsp[(6) - (8)].l));
      (yyval.s).Type = MSH_SEGM_CIRC;
      (yyval.s).Num = num;
    ;}
    break;

  case 157:
#line 1648 "Gmsh.y"
    {
      int num = (int)(yyvsp[(3) - (8)].d);
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(6) - (8)].l), tags);
      std::vector<double> param; ListOfDouble2Vector((yyvsp[(6) - (8)].l), param);
      bool r = true;
      if(gmsh_yyfactory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        if(tags.size() == 3){
          r = GModel::current()->getOCCInternals()->addEllipseArc
            (num, tags[0], tags[1], tags[2]);
        }
        else if(tags.size() == 4){
          r = GModel::current()->getOCCInternals()->addEllipseArc
            (num, tags[0], tags[1], tags[3]);
        }
        else if(param.size() >= 5 && param.size() <= 7){
          double a1 = (param.size() == 7) ? param[5] : 0.;
          double a2 = (param.size() == 7) ? param[6] :
            (param.size() == 6) ? param[5] : 2.*M_PI;
          r = GModel::current()->getOCCInternals()->addEllipse
            (num, param[0], param[1], param[2], param[3], param[4], a1, a2);
        }
        else{
          yymsg(0, "Ellipse requires 3 or 4 points, or 5 to 7 parameters");
        }
      }
      else{
        if(tags.size() == 4){
          r = GModel::current()->getGEOInternals()->addEllipseArc
            (num, tags[0], tags[1], tags[2], tags[3], (yyvsp[(7) - (8)].v)[0], (yyvsp[(7) - (8)].v)[1], (yyvsp[(7) - (8)].v)[2]);
        }
        else{
          yymsg(0, "Ellipse requires 4 points");
        }
      }
      if(!r) yymsg(0, "Could not add ellipse");
      List_Delete((yyvsp[(6) - (8)].l));
      (yyval.s).Type = MSH_SEGM_ELLI;
      (yyval.s).Num = num;
    ;}
    break;

  case 158:
#line 1688 "Gmsh.y"
    {
      int num = (int)(yyvsp[(3) - (7)].d);
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(6) - (7)].l), tags);
      bool r = true;
      if(gmsh_yyfactory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        yymsg(0, "BSpline not yet available with OpenCASCADE geometry kernel");
      }
      else{
        r = GModel::current()->getGEOInternals()->addBSpline(num, tags);
      }
      if(!r) yymsg(0, "Could not add BSpline");
      List_Delete((yyvsp[(6) - (7)].l));
      (yyval.s).Type = MSH_SEGM_BSPLN;
      (yyval.s).Num = num;
    ;}
    break;

  case 159:
#line 1704 "Gmsh.y"
    {
      int num = (int)(yyvsp[(3) - (7)].d);
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(6) - (7)].l), tags);
      bool r = true;
      if(gmsh_yyfactory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        r = GModel::current()->getOCCInternals()->addBezier(num, tags);
      }
      else{
        r = GModel::current()->getGEOInternals()->addBezier(num, tags);
      }
      if(!r) yymsg(0, "Could not add Bezier");
      List_Delete((yyvsp[(6) - (7)].l));
      (yyval.s).Type = MSH_SEGM_BEZIER;
      (yyval.s).Num = num;
    ;}
    break;

  case 160:
#line 1721 "Gmsh.y"
    {
      int num = (int)(yyvsp[(3) - (11)].d);
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(6) - (11)].l), tags);
      std::vector<double> knots; ListOfDouble2Vector((yyvsp[(8) - (11)].l), knots);
      bool r = true;
      if(gmsh_yyfactory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        yymsg(0, "Nurbs not available yet with OpenCASCADE geometry kernel");
      }
      else{
        int order = knots.size() - tags.size() - 1;
        if(order != (int)(yyvsp[(10) - (11)].d))
          yymsg(1, "Incompatible Nurbs order: using %d", order);
        r = GModel::current()->getGEOInternals()->addNurbs(num, tags, knots);
      }
      if(!r) yymsg(0, "Could not add nurbs");
      List_Delete((yyvsp[(6) - (11)].l));
      List_Delete((yyvsp[(8) - (11)].l));
      (yyval.s).Type = MSH_SEGM_NURBS;
      (yyval.s).Num = num;
    ;}
    break;

  case 161:
#line 1742 "Gmsh.y"
    {
      int num = (int)(yyvsp[(3) - (7)].d);
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(6) - (7)].l), tags);
      bool r = true;
      if(gmsh_yyfactory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        r = GModel::current()->getOCCInternals()->addWire(num, tags, false);
      }
      else{
        yymsg(0, "Wire only available with OpenCASCADE geometry kernel");
      }
      if(!r) yymsg(0, "Could not add wire");
      List_Delete((yyvsp[(6) - (7)].l));
      (yyval.s).Type = MSH_SEGM_LOOP;
      (yyval.s).Num = num;
    ;}
    break;

  case 162:
#line 1758 "Gmsh.y"
    {
      int num = (int)(yyvsp[(4) - (8)].d);
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(7) - (8)].l), tags);
      bool r = true;
      if(gmsh_yyfactory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        for(unsigned int i = 0; i < tags.size(); i++)
          tags[i] = std::abs(tags[i]); // all edge tags > 0 for OCC
        r = GModel::current()->getOCCInternals()->addLineLoop(num, tags);
      }
      else{
        r = GModel::current()->getGEOInternals()->addLineLoop(num, tags);
      }
      if(!r) yymsg(0, "Could not add line loop");
      List_Delete((yyvsp[(7) - (8)].l));
      Free((yyvsp[(2) - (8)].c));
      (yyval.s).Type = MSH_SEGM_LOOP;
      (yyval.s).Num = num;
    ;}
    break;

  case 163:
#line 1777 "Gmsh.y"
    {
      int num = (int)(yyvsp[(4) - (8)].d);
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(7) - (8)].l), tags);
      bool r = true;
      if(gmsh_yyfactory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        r = GModel::current()->getOCCInternals()->addPlaneSurface(num, tags);
      }
      else{
        r = GModel::current()->getGEOInternals()->addPlaneSurface(num, tags);
      }
      if(!r) yymsg(0, "Could not add plane surface");
      List_Delete((yyvsp[(7) - (8)].l));
      (yyval.s).Type = MSH_SURF_PLAN;
      (yyval.s).Num = num;
    ;}
    break;

  case 164:
#line 1793 "Gmsh.y"
    {
      int num = (int)(yyvsp[(3) - (8)].d);
      std::vector<int> wires; ListOfDouble2Vector((yyvsp[(6) - (8)].l), wires);
      bool r = true;
      if(gmsh_yyfactory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        if(wires.size() != 1){
          yymsg(0, "OpenCASCADE face filling requires a single line loop");
        }
        else{
          r = GModel::current()->getOCCInternals()->addSurfaceFilling(num, wires[0]);
        }
      }
      else{
        r = GModel::current()->getGEOInternals()->addSurfaceFilling(num, wires, (yyvsp[(7) - (8)].i));
      }
      if(!r) yymsg(0, "Could not add surface");
      List_Delete((yyvsp[(6) - (8)].l));
      (yyval.s).Type = MSH_SURF_REGL;
      (yyval.s).Num = num;
    ;}
    break;

  case 165:
#line 1814 "Gmsh.y"
    {
      yymsg(2, "'Ruled Surface' command is deprecated: use 'Surface' instead");
      int num = (int)(yyvsp[(4) - (9)].d);
      std::vector<int> wires; ListOfDouble2Vector((yyvsp[(7) - (9)].l), wires);
      bool r = GModel::current()->getGEOInternals()->addSurfaceFilling(num, wires, (yyvsp[(8) - (9)].i));
      if(!r) yymsg(0, "Could not add surface");
      List_Delete((yyvsp[(7) - (9)].l));
      (yyval.s).Type =  MSH_SURF_REGL;
      (yyval.s).Num = num;
    ;}
    break;

  case 166:
#line 1825 "Gmsh.y"
    {
      myGmshSurface = 0;
      (yyval.s).Type = 0;
      (yyval.s).Num = 0;
    ;}
    break;

  case 167:
#line 1831 "Gmsh.y"
    {
      myGmshSurface = gmshSurface::getSurface((int)(yyvsp[(3) - (4)].d));
      (yyval.s).Type = 0;
      (yyval.s).Num = 0;
    ;}
    break;

  case 168:
#line 1837 "Gmsh.y"
    {
      int num = (int)(yyvsp[(4) - (10)].d);
      myGmshSurface = gmshParametricSurface::NewParametricSurface(num, (yyvsp[(7) - (10)].c), (yyvsp[(8) - (10)].c), (yyvsp[(9) - (10)].c));
      (yyval.s).Type = 0;
      (yyval.s).Num = num;
    ;}
    break;

  case 169:
#line 1844 "Gmsh.y"
    {
      int num = (int)(yyvsp[(3) - (7)].d);
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(6) - (7)].l), tags);
      std::vector<double> param; ListOfDouble2Vector((yyvsp[(6) - (7)].l), param);
      (yyval.s).Type = 0;
      bool r = true;
      if(param.size() >= 4 && param.size() <= 7){
        if(gmsh_yyfactory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
          double a1 = (param.size() >= 5) ? param[4] : -M_PI/2;
          double a2 = (param.size() >= 6) ? param[5] : M_PI/2;
          double a3 = (param.size() >= 7) ? param[6] : 2.*M_PI;
          r = GModel::current()->getOCCInternals()->addSphere
            (num, param[0], param[1], param[2], param[3], a1, a2, a3);
        }
        else{
          yymsg(0, "Sphere only available with OpenCASCADE geometry kernel");
        }
        (yyval.s).Type = MSH_VOLUME;
      }
      else if(tags.size() == 2){
        myGmshSurface = GModel::current()->getGEOInternals()->newGeometrySphere
          (num, tags[0], tags[1]);
      }
      else{
        yymsg(0, "Sphere requires 2 points or from 4 to 7 parameters");
      }
      if(!r) yymsg(0, "Could not add sphere");
      List_Delete((yyvsp[(6) - (7)].l));
      (yyval.s).Num = num;
    ;}
    break;

  case 170:
#line 1875 "Gmsh.y"
    {
      int num = (int)(yyvsp[(3) - (7)].d);
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(6) - (7)].l), tags);
      if(tags.size() == 2){
        myGmshSurface = GModel::current()->getGEOInternals()->newGeometryPolarSphere
          (num, tags[0], tags[1]);
      }
      else{
        yymsg(0, "PolarSphere requires 2 points");
      }
      List_Delete((yyvsp[(6) - (7)].l));
      (yyval.s).Type = 0;
      (yyval.s).Num = num;
    ;}
    break;

  case 171:
#line 1890 "Gmsh.y"
    {
      int num = (int)(yyvsp[(3) - (7)].d);
      std::vector<double> param; ListOfDouble2Vector((yyvsp[(6) - (7)].l), param);
      bool r = true;
      if(gmsh_yyfactory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        if(param.size() == 6){
          r = GModel::current()->getOCCInternals()->addBlock
            (num, param[0], param[1], param[2], param[3], param[4], param[5]);
        }
        else{
          yymsg(0, "Block requires 6 parameters");
        }
      }
      else{
        yymsg(0, "Block only available with OpenCASCADE geometry kernel");
      }
      if(!r) yymsg(0, "Could not add block");
      List_Delete((yyvsp[(6) - (7)].l));
      (yyval.s).Type = MSH_VOLUME;
      (yyval.s).Num = num;
    ;}
    break;

  case 172:
#line 1912 "Gmsh.y"
    {
      int num = (int)(yyvsp[(3) - (7)].d);
      std::vector<double> param; ListOfDouble2Vector((yyvsp[(6) - (7)].l), param);
      bool r = true;
      if(gmsh_yyfactory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        if(param.size() == 5 || param.size() == 6){
          double alpha = (param.size() == 6) ? param[5] : 2*M_PI;
          r = GModel::current()->getOCCInternals()->addTorus
            (num, param[0], param[1], param[2], param[3], param[4], alpha);
        }
        else{
          yymsg(0, "Torus requires 5 ou 6 parameters");
        }
      }
      else{
        yymsg(0, "Torus only available with OpenCASCADE geometry kernel");
      }
      if(!r) yymsg(0, "Could not add torus");
      List_Delete((yyvsp[(6) - (7)].l));
      (yyval.s).Type = MSH_VOLUME;
      (yyval.s).Num = num;
    ;}
    break;

  case 173:
#line 1935 "Gmsh.y"
    {
      int num = (int)(yyvsp[(3) - (7)].d);
      std::vector<double> param; ListOfDouble2Vector((yyvsp[(6) - (7)].l), param);
      bool r = true;
      if(gmsh_yyfactory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        if(param.size() == 5 || param.size() == 6){
          double r = (param.size() == 6) ? param[5] : 0.;
          r = GModel::current()->getOCCInternals()->addRectangle
            (num, param[0], param[1], param[2], param[3], param[4], r);
        }
        else{
          yymsg(0, "Rectangle requires 5 ou 6 parameters");
        }
      }
      else{
        yymsg(0, "Rectangle only available with OpenCASCADE geometry kernel");
      }
      if(!r) yymsg(0, "Could not add rectangle");
      List_Delete((yyvsp[(6) - (7)].l));
      (yyval.s).Type = MSH_SURF_PLAN;
      (yyval.s).Num = num;
    ;}
    break;

  case 174:
#line 1958 "Gmsh.y"
    {
      int num = (int)(yyvsp[(3) - (7)].d);
      std::vector<double> param; ListOfDouble2Vector((yyvsp[(6) - (7)].l), param);
      bool r = true;
      if(gmsh_yyfactory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        if(param.size() == 4 || param.size() == 5){
          double ry = (param.size() == 5) ? param[4] : param[3];
          r = GModel::current()->getOCCInternals()->addDisk
            (num, param[0], param[1], param[2], param[3], ry);
        }
        else{
          yymsg(0, "Disk requires 4 or 5 parameters");
        }
      }
      else{
        yymsg(0, "Disk only available with OpenCASCADE geometry kernel");
      }
      if(!r) yymsg(0, "Could not add disk");
      List_Delete((yyvsp[(6) - (7)].l));
      (yyval.s).Type = MSH_SURF_PLAN;
      (yyval.s).Num = num;
    ;}
    break;

  case 175:
#line 1981 "Gmsh.y"
    {
      int num = (int)(yyvsp[(3) - (7)].d);
      std::vector<double> param; ListOfDouble2Vector((yyvsp[(6) - (7)].l), param);
      bool r = true;
      if(gmsh_yyfactory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        if(param.size() == 7 || param.size() == 8){
          double angle = (param.size() == 8) ? param[7] : 2*M_PI;
          r = GModel::current()->getOCCInternals()->addCylinder
            (num, param[0], param[1], param[2], param[3], param[4], param[5],
             param[6], angle);
        }
        else{
          yymsg(0, "Cylinder requires 7 or 8 parameters");
        }
      }
      else{
        yymsg(0, "Cylinder only available with OpenCASCADE geometry kernel");
      }
      if(!r) yymsg(0, "Could not add cylinder");
      List_Delete((yyvsp[(6) - (7)].l));
      (yyval.s).Type = MSH_VOLUME;
      (yyval.s).Num = num;
    ;}
    break;

  case 176:
#line 2005 "Gmsh.y"
    {
      int num = (int)(yyvsp[(3) - (7)].d);
      std::vector<double> param; ListOfDouble2Vector((yyvsp[(6) - (7)].l), param);
      bool r = true;
      if(gmsh_yyfactory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        if(param.size() == 8 || param.size() == 9){
          double alpha = (param.size() == 9) ? param[8] : 2*M_PI;
          r = GModel::current()->getOCCInternals()->addCone
            (num, param[0], param[1], param[2], param[3], param[4], param[5],
             param[6], param[7], alpha);
        }
        else{
          yymsg(0, "Cone requires 8 or 9 parameters");
        }
      }
      else{
        yymsg(0, "Cone only available with OpenCASCADE geometry kernel");
      }
      if(!r) yymsg(0, "Could not add cone");
      List_Delete((yyvsp[(6) - (7)].l));
      (yyval.s).Type = MSH_VOLUME;
      (yyval.s).Num = num;
    ;}
    break;

  case 177:
#line 2029 "Gmsh.y"
    {
      int num = (int)(yyvsp[(3) - (7)].d);
      std::vector<double> param; ListOfDouble2Vector((yyvsp[(6) - (7)].l), param);
      bool r = true;
      if(gmsh_yyfactory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        if(param.size() == 6 || param.size() == 7){
          double ltx = (param.size() == 7) ? param[6] : 0.;
          r = GModel::current()->getOCCInternals()->addWedge
            (num, param[0], param[1], param[2], param[3], param[4], param[5],
             ltx);
        }
        else{
          yymsg(0, "Wedge requires 7 parameters");
        }
      }
      else{
        yymsg(0, "Wedge only available with OpenCASCADE geometry kernel");
      }
      if(!r) yymsg(0, "Could not add wedge");
      List_Delete((yyvsp[(6) - (7)].l));
      (yyval.s).Type = MSH_VOLUME;
      (yyval.s).Num = num;
    ;}
    break;

  case 178:
#line 2053 "Gmsh.y"
    {
      int num = (int)(yyvsp[(3) - (7)].d);
      std::vector<double> param; ListOfDouble2Vector((yyvsp[(6) - (7)].l), param);
      bool r = true;
      if(gmsh_yyfactory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        if(param.size() >= 2){
          int in = (int)param[0];
          double offset = param[1];
          std::vector<int> exclude;
          for(unsigned int i = 2; i < param.size(); i++)
            exclude.push_back(param[i]);
          std::vector<std::pair<int, int> > outDimTags;
          r = GModel::current()->getOCCInternals()->addThickSolid
            (num, in, exclude, offset, outDimTags);
        }
        else{
          yymsg(0, "ThickSolid requires at least 2 parameters");
        }
      }
      else{
        yymsg(0, "ThickSolid only available with OpenCASCADE geometry kernel");
      }
      if(!r) yymsg(0, "Could not add thick solid");
      List_Delete((yyvsp[(6) - (7)].l));
    ;}
    break;

  case 179:
#line 2079 "Gmsh.y"
    {
      int num = (int)(yyvsp[(4) - (8)].d);
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(7) - (8)].l), tags);
      bool r = true;
      if(gmsh_yyfactory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        r = GModel::current()->getOCCInternals()->addSurfaceLoop(num, tags);
      }
      else{
        r = GModel::current()->getGEOInternals()->addSurfaceLoop(num, tags);
      }
      if(!r) yymsg(0, "Could not add surface loop");
      List_Delete((yyvsp[(7) - (8)].l));
      Free((yyvsp[(2) - (8)].c));
      (yyval.s).Type = MSH_SURF_LOOP;
      (yyval.s).Num = num;
    ;}
    break;

  case 180:
#line 2096 "Gmsh.y"
    {
      int num = (int)(yyvsp[(3) - (7)].d);
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(6) - (7)].l), tags);
      bool r = true;
      if(gmsh_yyfactory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        r = GModel::current()->getOCCInternals()->addVolume(num, tags);
      }
      else{
        r = GModel::current()->getGEOInternals()->addVolume(num, tags);
      }
      if(!r) yymsg(0, "Could not add volume");
      List_Delete((yyvsp[(6) - (7)].l));
      (yyval.s).Type = MSH_VOLUME;
      (yyval.s).Num = num;
    ;}
    break;

  case 181:
#line 2112 "Gmsh.y"
    {
      int num = (int)(yyvsp[(3) - (7)].d);
      std::vector<int> wires; ListOfDouble2Vector((yyvsp[(6) - (7)].l), wires);
      bool r = true;
      if(gmsh_yyfactory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        std::vector<std::pair<int, int> > outDimTags;
        r = GModel::current()->getOCCInternals()->addThruSections
          (num, wires, true, false, outDimTags);
      }
      else{
        yymsg(0, "ThruSections only available with OpenCASCADE geometry kernel");
      }
      if(!r) yymsg(0, "Could not add thrusections");
      List_Delete((yyvsp[(6) - (7)].l));
      (yyval.s).Type = MSH_VOLUME;
      (yyval.s).Num = num;
    ;}
    break;

  case 182:
#line 2130 "Gmsh.y"
    {
      int num = (int)(yyvsp[(4) - (8)].d);
      std::vector<int> wires; ListOfDouble2Vector((yyvsp[(7) - (8)].l), wires);
      bool r = true;
      if(gmsh_yyfactory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        std::vector<std::pair<int, int> > outDimTags;
        r = GModel::current()->getOCCInternals()->addThruSections
          (num, wires, true, true, outDimTags);
      }
      else{
        yymsg(0, "ThruSections only available with OpenCASCADE geometry kernel");
      }
      if(!r) yymsg(0, "Could not add ruled thrusections");
      List_Delete((yyvsp[(7) - (8)].l));
      (yyval.s).Type = MSH_VOLUME;
      (yyval.s).Num = num;
    ;}
    break;

  case 183:
#line 2148 "Gmsh.y"
    {
      int num = (int)(yyvsp[(4) - (8)].d);
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(7) - (8)].l), tags);
      switch ((yyvsp[(2) - (8)].i)) {
      case 1:
        {
          bool r = GModel::current()->getGEOInternals()->addCompoundLine(num, tags);
          if(!r) yymsg(0, "Could not add compound line");
        }
        (yyval.s).Type = MSH_SEGM_COMPOUND;
        break;
      case 2:
        {
          bool r = GModel::current()->getGEOInternals()->addCompoundSurface(num, tags);
          if(!r) yymsg(0, "Could not add compound surface");
        }
        (yyval.s).Type = MSH_SURF_COMPOUND;
        break;
      case 3:
        {
          bool r = GModel::current()->getGEOInternals()->addCompoundVolume(num, tags);
          if(!r) yymsg(0, "Could not add compound volume");
        }
        (yyval.s).Type = MSH_VOLUME_COMPOUND;
        break;
      }
      List_Delete((yyvsp[(7) - (8)].l));
      (yyval.s).Num = num;
    ;}
    break;

  case 184:
#line 2179 "Gmsh.y"
    {
      // Particular case only for dim 2 (Surface)
      if ((yyvsp[(2) - (12)].i) == 2) {
        int num = (int)(yyvsp[(4) - (12)].d);
        std::vector<int> tags; ListOfDouble2Vector((yyvsp[(7) - (12)].l), tags);
        std::vector<int> bndTags[4];
        for(int i = 0; i < List_Nbr((yyvsp[(10) - (12)].l)); i++){
          if(i < 4)
            ListOfDouble2Vector(*(List_T**)List_Pointer((yyvsp[(10) - (12)].l), i), bndTags[i]);
          else
            break;
        }
        bool r = GModel::current()->getGEOInternals()->addCompoundSurface
          (num, tags, bndTags);
        if(!r) yymsg(0, "Could not add compound surface");
        List_Delete((yyvsp[(7) - (12)].l));
        Free((yyvsp[(8) - (12)].c));
        for (int i = 0; i < List_Nbr((yyvsp[(10) - (12)].l)); i++)
          List_Delete(*(List_T**)List_Pointer((yyvsp[(10) - (12)].l), i));
        List_Delete((yyvsp[(10) - (12)].l));
        (yyval.s).Type = MSH_SURF_COMPOUND;
        (yyval.s).Num = num;
      }
      else {
        yymsg(0, "GeoEntity dim out of range [2,2]");
      }
    ;}
    break;

  case 185:
#line 2207 "Gmsh.y"
    {
      dim_entity = (yyvsp[(2) - (2)].i);
    ;}
    break;

  case 186:
#line 2211 "Gmsh.y"
    {
      int num = (int)(yyvsp[(5) - (9)].i);
      int op = (yyvsp[(7) - (9)].i);
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(8) - (9)].l), tags);
      bool r = GModel::current()->getGEOInternals()->modifyPhysicalGroup
        ((yyvsp[(2) - (9)].i), num, op, tags);
      if(!r)
        switch ((yyvsp[(2) - (9)].i)) {
        case 0: yymsg(0, "Could not modify physical point"); break;
        case 1: yymsg(0, "Could not modify physical line"); break;
        case 2: yymsg(0, "Could not modify physical surface"); break;
        case 3: yymsg(0, "Could not modify physical volume"); break;
        }
      List_Delete((yyvsp[(8) - (9)].l));
      switch ((yyvsp[(2) - (9)].i)) {
      case 0: (yyval.s).Type = MSH_PHYSICAL_POINT  ; break;
      case 1: (yyval.s).Type = MSH_PHYSICAL_LINE   ; break;
      case 2: (yyval.s).Type = MSH_PHYSICAL_SURFACE; break;
      case 3: (yyval.s).Type = MSH_PHYSICAL_VOLUME ; break;
      }
      (yyval.s).Num = num;
    ;}
    break;

  case 187:
#line 2237 "Gmsh.y"
    { (yyval.i) = 0; ;}
    break;

  case 188:
#line 2239 "Gmsh.y"
    { (yyval.i) = 1; ;}
    break;

  case 189:
#line 2241 "Gmsh.y"
    { (yyval.i) = 2; ;}
    break;

  case 190:
#line 2243 "Gmsh.y"
    { (yyval.i) = 3; ;}
    break;

  case 191:
#line 2245 "Gmsh.y"
    {
      (yyval.i) = (int)(yyvsp[(3) - (4)].d);
      if ((yyval.i)<0 || (yyval.i)>3) yymsg(0, "GeoEntity dim out of range [0,3]");
    ;}
    break;

  case 192:
#line 2253 "Gmsh.y"
    { (yyval.i) = 1; ;}
    break;

  case 193:
#line 2255 "Gmsh.y"
    { (yyval.i) = 2; ;}
    break;

  case 194:
#line 2257 "Gmsh.y"
    { (yyval.i) = 3; ;}
    break;

  case 195:
#line 2259 "Gmsh.y"
    {
      (yyval.i) = (int)(yyvsp[(3) - (4)].d);
      if ((yyval.i)<1 || (yyval.i)>3) yymsg(0, "GeoEntity dim out of range [1,3]");
    ;}
    break;

  case 196:
#line 2267 "Gmsh.y"
    { (yyval.i) = 1; ;}
    break;

  case 197:
#line 2269 "Gmsh.y"
    { (yyval.i) = 2; ;}
    break;

  case 198:
#line 2271 "Gmsh.y"
    {
      (yyval.i) = (int)(yyvsp[(3) - (4)].d);
      if ((yyval.i)<1 || (yyval.i)>2) yymsg(0, "GeoEntity dim out of range [1,2]");
    ;}
    break;

  case 199:
#line 2279 "Gmsh.y"
    { (yyval.i) = 0; ;}
    break;

  case 200:
#line 2281 "Gmsh.y"
    { (yyval.i) = 1; ;}
    break;

  case 201:
#line 2283 "Gmsh.y"
    { (yyval.i) = 2; ;}
    break;

  case 202:
#line 2285 "Gmsh.y"
    {
      (yyval.i) = (int)(yyvsp[(3) - (4)].d);
      if ((yyval.i)<0 || (yyval.i)>2) yymsg(0, "GeoEntity dim out of range [0,2]");
    ;}
    break;

  case 203:
#line 2295 "Gmsh.y"
    {
      std::vector<std::pair<int, int> > dimTags;
      ListOfShapes2VectorOfPairs((yyvsp[(4) - (5)].l), dimTags);
      bool r = true;
      if(gmsh_yyfactory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        r = GModel::current()->getOCCInternals()->translate
          (dimTags, (yyvsp[(2) - (5)].v)[0], (yyvsp[(2) - (5)].v)[1], (yyvsp[(2) - (5)].v)[2]);
      }
      else{
        r = GModel::current()->getGEOInternals()->translate
          (dimTags, (yyvsp[(2) - (5)].v)[0], (yyvsp[(2) - (5)].v)[1], (yyvsp[(2) - (5)].v)[2]);
      }
      if(!r) yymsg(0, "Could not translate shapes");
      (yyval.l) = (yyvsp[(4) - (5)].l);
    ;}
    break;

  case 204:
#line 2311 "Gmsh.y"
    {
      std::vector<std::pair<int, int> > dimTags;
      ListOfShapes2VectorOfPairs((yyvsp[(10) - (11)].l), dimTags);
      bool r = true;
      if(gmsh_yyfactory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        r = GModel::current()->getOCCInternals()->rotate
          (dimTags, (yyvsp[(5) - (11)].v)[0], (yyvsp[(5) - (11)].v)[1], (yyvsp[(5) - (11)].v)[2], (yyvsp[(3) - (11)].v)[0], (yyvsp[(3) - (11)].v)[1], (yyvsp[(3) - (11)].v)[2], (yyvsp[(7) - (11)].d));
      }
      else{
        r = GModel::current()->getGEOInternals()->rotate
          (dimTags, (yyvsp[(5) - (11)].v)[0], (yyvsp[(5) - (11)].v)[1], (yyvsp[(5) - (11)].v)[2], (yyvsp[(3) - (11)].v)[0], (yyvsp[(3) - (11)].v)[1], (yyvsp[(3) - (11)].v)[2], (yyvsp[(7) - (11)].d));
      }
      if(!r) yymsg(0, "Could not rotate shapes");
      (yyval.l) = (yyvsp[(10) - (11)].l);
    ;}
    break;

  case 205:
#line 2327 "Gmsh.y"
    {
      std::vector<std::pair<int, int> > dimTags;
      ListOfShapes2VectorOfPairs((yyvsp[(4) - (5)].l), dimTags);
      bool r = true;
      if(gmsh_yyfactory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        r = GModel::current()->getOCCInternals()->symmetry
          (dimTags, (yyvsp[(2) - (5)].v)[0], (yyvsp[(2) - (5)].v)[1], (yyvsp[(2) - (5)].v)[2], (yyvsp[(2) - (5)].v)[3]);
      }
      else{
        r = GModel::current()->getGEOInternals()->symmetry
          (dimTags, (yyvsp[(2) - (5)].v)[0], (yyvsp[(2) - (5)].v)[1], (yyvsp[(2) - (5)].v)[2], (yyvsp[(2) - (5)].v)[3]);
      }
      if(!r) yymsg(0, "Could not apply symmetry transform");
      (yyval.l) = (yyvsp[(4) - (5)].l);
    ;}
    break;

  case 206:
#line 2343 "Gmsh.y"
    {
      std::vector<std::pair<int, int> > dimTags;
      ListOfShapes2VectorOfPairs((yyvsp[(8) - (9)].l), dimTags);
      bool r = true;
      if(gmsh_yyfactory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        r = GModel::current()->getOCCInternals()->dilate
          (dimTags, (yyvsp[(3) - (9)].v)[0], (yyvsp[(3) - (9)].v)[1], (yyvsp[(3) - (9)].v)[2], (yyvsp[(5) - (9)].d), (yyvsp[(5) - (9)].d), (yyvsp[(5) - (9)].d));
      }
      else{
        r = GModel::current()->getGEOInternals()->dilate
          (dimTags, (yyvsp[(3) - (9)].v)[0], (yyvsp[(3) - (9)].v)[1], (yyvsp[(3) - (9)].v)[2], (yyvsp[(5) - (9)].d), (yyvsp[(5) - (9)].d), (yyvsp[(5) - (9)].d));
      }
      if(!r) yymsg(0, "Could not dilate shapes");
      (yyval.l) = (yyvsp[(8) - (9)].l);
    ;}
    break;

  case 207:
#line 2359 "Gmsh.y"
    {
      std::vector<std::pair<int, int> > dimTags;
      ListOfShapes2VectorOfPairs((yyvsp[(8) - (9)].l), dimTags);
      bool r = true;
      if(gmsh_yyfactory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        r = GModel::current()->getOCCInternals()->dilate
          (dimTags, (yyvsp[(3) - (9)].v)[0], (yyvsp[(3) - (9)].v)[1], (yyvsp[(3) - (9)].v)[2], (yyvsp[(5) - (9)].v)[0], (yyvsp[(5) - (9)].v)[1], (yyvsp[(5) - (9)].v)[2]);
      }
      else{
        r = GModel::current()->getGEOInternals()->dilate
          (dimTags, (yyvsp[(3) - (9)].v)[0], (yyvsp[(3) - (9)].v)[1], (yyvsp[(3) - (9)].v)[2], (yyvsp[(5) - (9)].v)[0], (yyvsp[(5) - (9)].v)[1], (yyvsp[(5) - (9)].v)[2]);
      }
      if(!r) yymsg(0, "Could not dilate shapes");
      (yyval.l) = (yyvsp[(8) - (9)].l);
    ;}
    break;

  case 208:
#line 2375 "Gmsh.y"
    {
      std::vector<std::pair<int, int> > inDimTags, outDimTags;
      ListOfShapes2VectorOfPairs((yyvsp[(3) - (4)].l), inDimTags);
      (yyval.l) = (yyvsp[(3) - (4)].l);
      List_Reset((yyval.l));
      std::string action((yyvsp[(1) - (4)].c));
      bool r = true;
      if(action == "Duplicata"){
        if(gmsh_yyfactory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
          r = GModel::current()->getOCCInternals()->copy(inDimTags, outDimTags);
        }
        else{
          r = GModel::current()->getGEOInternals()->copy(inDimTags, outDimTags);
        }
      }
      else if(action == "Boundary" || action == "CombinedBoundary"){
        // boundary operations are performed directly on GModel, which enables
        // to compute the boundary of hybrid CAD models; this also automatically
        // binds all boundary entities for OCC models
        if(GModel::current()->getOCCInternals() &&
           GModel::current()->getOCCInternals()->getChanged())
          GModel::current()->getOCCInternals()->synchronize(GModel::current());
        if(GModel::current()->getGEOInternals()->getChanged())
          GModel::current()->getGEOInternals()->synchronize(GModel::current());
        r = GModel::current()->getBoundaryTags
          (inDimTags, outDimTags, action == "CombinedBoundary");
      }
      else{
        yymsg(0, "Unknown action on multiple shapes '%s'", (yyvsp[(1) - (4)].c));
      }
      if(!r) yymsg(0, "Could not apply operation on shapes");
      VectorOfPairs2ListOfShapes(outDimTags, (yyval.l));
      Free((yyvsp[(1) - (4)].c));
    ;}
    break;

  case 209:
#line 2410 "Gmsh.y"
    {
      (yyval.l) = List_Create(2, 1, sizeof(Shape));
      bool r = true;
      if(gmsh_yyfactory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        yymsg(0, "Intersect line not available with OpenCASCADE");
      }
      else{
        std::vector<int> in, out; ListOfDouble2Vector((yyvsp[(4) - (9)].l), in);
        r = GModel::current()->getGEOInternals()->intersectCurvesWithSurface
          (in, (int)(yyvsp[(8) - (9)].d), out);
        for(unsigned int i = 0; i < out.size(); i++){
          Shape s;
          s.Type = MSH_POINT;
          s.Num = out[i];
          List_Add((yyval.l), &s);
        }
      }
      if(!r) yymsg(0, "Could not intersect line");
      List_Delete((yyvsp[(4) - (9)].l));
    ;}
    break;

  case 210:
#line 2432 "Gmsh.y"
    {
      (yyval.l) = List_Create(2, 1, sizeof(Shape));
      bool r = true;
      if(gmsh_yyfactory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        yymsg(0, "Split Line not available with OpenCASCADE");
      }
      else{
        std::vector<int> vertices, curves; ListOfDouble2Vector((yyvsp[(7) - (9)].l), vertices);
        r = GModel::current()->getGEOInternals()->splitCurve
          ((int)(yyvsp[(4) - (9)].d), vertices, curves);
        for(unsigned int i = 0; i < curves.size(); i++){
          Shape s;
          s.Type = MSH_SEGM_LINE;
          s.Num = curves[i];
          List_Add((yyval.l), &s);
        }
      }
      if(!r) yymsg(0, "Could not split line");
      List_Delete((yyvsp[(7) - (9)].l));
    ;}
    break;

  case 211:
#line 2455 "Gmsh.y"
    { (yyval.l) = (yyvsp[(1) - (1)].l); ;}
    break;

  case 212:
#line 2456 "Gmsh.y"
    { (yyval.l) = (yyvsp[(1) - (1)].l); ;}
    break;

  case 213:
#line 2461 "Gmsh.y"
    {
      (yyval.l) = List_Create(3, 3, sizeof(Shape));
    ;}
    break;

  case 214:
#line 2465 "Gmsh.y"
    {
      List_Add((yyval.l), &(yyvsp[(2) - (2)].s));
    ;}
    break;

  case 215:
#line 2469 "Gmsh.y"
    {
      for(int i = 0; i < List_Nbr((yyvsp[(4) - (6)].l)); i++){
	double d;
	List_Read((yyvsp[(4) - (6)].l), i, &d);
	Shape s;
	s.Num = (int)d;
        switch ((yyvsp[(2) - (6)].i)) {
        case 0: s.Type = MSH_POINT    ; break;
        case 1: s.Type = MSH_SEGM_LINE; break;
        case 2: s.Type = MSH_SURF_PLAN; break; // we don't care about the actual type
        case 3: s.Type = MSH_VOLUME   ; break;
        }
        List_Add((yyval.l), &s);
      }
    ;}
    break;

  case 216:
#line 2490 "Gmsh.y"
    {
      if(List_Nbr((yyvsp[(7) - (8)].l)) == 4){
        int t = (int)(yyvsp[(4) - (8)].d);
        if(gLevelset::find(t)){
	  yymsg(0, "Levelset %d already exists", t);
        }
        else {
          double d[4];
          for(int i = 0; i < 4; i++)
            List_Read((yyvsp[(7) - (8)].l), i, &d[i]);
          gLevelset *ls = new gLevelsetPlane(d[0], d[1], d[2], d[3], t);
          gLevelset::add(ls);
        }
      }
      else
        yymsg(0, "Wrong number of arguments for levelset definition");
      List_Delete((yyvsp[(7) - (8)].l));
    ;}
    break;

  case 217:
#line 2509 "Gmsh.y"
    {
      int t = (int)(yyvsp[(4) - (10)].d);
      if(gLevelset::find(t)){
	yymsg(0, "Levelset %d already exists", t);
      }
      else {
	fullMatrix<double> centers(List_Nbr((yyvsp[(8) - (10)].l)),3);
	for (int i = 0; i < List_Nbr((yyvsp[(8) - (10)].l)); i++){
	  List_T *l = *(List_T**)List_Pointer((yyvsp[(8) - (10)].l), i);
	  for (int j = 0; j < List_Nbr(l); j++){
	    centers(i,j) = (double)(*(double*)List_Pointer(l, j));
	  }
	}
        gLevelset *ls = new gLevelsetPoints(centers, t);
        gLevelset::add(ls);
      }
      for(int i = 0; i < List_Nbr((yyvsp[(8) - (10)].l)); i++)
        List_Delete(*(List_T**)List_Pointer((yyvsp[(8) - (10)].l), i));
      List_Delete((yyvsp[(8) - (10)].l));
    ;}
    break;

  case 218:
#line 2531 "Gmsh.y"
    {
      int t = (int)(yyvsp[(4) - (14)].d);
      if(gLevelset::find(t)){
        yymsg(0, "Levelset %d already exists", t);
      }
      else {
        double pt[3] = {(yyvsp[(8) - (14)].v)[0], (yyvsp[(8) - (14)].v)[1], (yyvsp[(8) - (14)].v)[2]};
        double n[3] = {(yyvsp[(10) - (14)].v)[0], (yyvsp[(10) - (14)].v)[1], (yyvsp[(10) - (14)].v)[2]};
        gLevelset *ls = new gLevelsetPlane(pt, n, t);
        gLevelset::add(ls);
      }
      List_Delete((yyvsp[(12) - (14)].l));
    ;}
    break;

  case 219:
#line 2546 "Gmsh.y"
    {
      int t = (int)(yyvsp[(4) - (16)].d);
      if(gLevelset::find(t)){
        yymsg(0, "Levelset %d already exists", t);
      }
      else {
        double pt1[3] = {(yyvsp[(8) - (16)].v)[0], (yyvsp[(8) - (16)].v)[1], (yyvsp[(8) - (16)].v)[2]};
        double pt2[3] = {(yyvsp[(10) - (16)].v)[0], (yyvsp[(10) - (16)].v)[1], (yyvsp[(10) - (16)].v)[2]};
        double pt3[3] = {(yyvsp[(12) - (16)].v)[0], (yyvsp[(12) - (16)].v)[1], (yyvsp[(12) - (16)].v)[2]};
        gLevelset *ls = new gLevelsetPlane(pt1, pt2, pt3, t);
        gLevelset::add(ls);
      }
      List_Delete((yyvsp[(14) - (16)].l));
    ;}
    break;

  case 220:
#line 2561 "Gmsh.y"
    {
      if(List_Nbr((yyvsp[(10) - (12)].l)) == 1){
        int t = (int)(yyvsp[(4) - (12)].d);
        if(gLevelset::find(t)){
	  yymsg(0, "Levelset %d already exists", t);
        }
        else {
          double d;
          List_Read((yyvsp[(10) - (12)].l), 0, &d);
          gLevelset *ls = new gLevelsetSphere((yyvsp[(8) - (12)].v)[0], (yyvsp[(8) - (12)].v)[1], (yyvsp[(8) - (12)].v)[2], d, t);
          gLevelset::add(ls);
        }
      }
      else
        yymsg(0, "Wrong number of arguments for levelset definition");
      List_Delete((yyvsp[(10) - (12)].l));
    ;}
    break;

  case 221:
#line 2580 "Gmsh.y"
    {
      if(List_Nbr((yyvsp[(12) - (14)].l)) == 1){
        int t = (int)(yyvsp[(4) - (14)].d);
        if(gLevelset::find(t)){
	  yymsg(0, "Levelset %d already exists", t);
        }
        else {
          double d;
          List_Read((yyvsp[(12) - (14)].l), 0, &d);
          double pt[3] = {(yyvsp[(8) - (14)].v)[0], (yyvsp[(8) - (14)].v)[1], (yyvsp[(8) - (14)].v)[2]};
          double dir[3] = {(yyvsp[(10) - (14)].v)[0], (yyvsp[(10) - (14)].v)[1], (yyvsp[(10) - (14)].v)[2]};
          gLevelset *ls = new gLevelsetGenCylinder(pt, dir, d, t);
          gLevelset::add(ls);
        }
      }
      else if(List_Nbr((yyvsp[(12) - (14)].l)) == 2){
        int t = (int)(yyvsp[(4) - (14)].d);
        if(gLevelset::find(t)){
	  yymsg(0, "Levelset %d already exists", t);
        }
        else {
          double d[2];
          for(int i = 0; i < 2; i++)
            List_Read((yyvsp[(12) - (14)].l), i, &d[i]);
          double pt[3] = {(yyvsp[(8) - (14)].v)[0], (yyvsp[(8) - (14)].v)[1], (yyvsp[(8) - (14)].v)[2]};
          double dir[3] = {(yyvsp[(10) - (14)].v)[0], (yyvsp[(10) - (14)].v)[1], (yyvsp[(10) - (14)].v)[2]};
          gLevelset *ls = new gLevelsetCylinder(pt, dir, d[0], d[1], t);
          gLevelset::add(ls);
        }
      }
      else if(List_Nbr((yyvsp[(12) - (14)].l)) == 3){
        int t = (int)(yyvsp[(4) - (14)].d);
        if(gLevelset::find(t)){
	  yymsg(0, "Levelset %d already exists", t);
        }
        else {
          double d[3];
          for(int i = 0; i < 3; i++)
            List_Read((yyvsp[(12) - (14)].l), i, &d[i]);
          double pt[3] = {(yyvsp[(8) - (14)].v)[0], (yyvsp[(8) - (14)].v)[1], (yyvsp[(8) - (14)].v)[2]};
          double dir[3] = {(yyvsp[(10) - (14)].v)[0], (yyvsp[(10) - (14)].v)[1], (yyvsp[(10) - (14)].v)[2]};
          gLevelset *ls = new gLevelsetCylinder(pt, dir, d[0], d[1], d[2], t);
          gLevelset::add(ls);
        }
      }
      else
        yymsg(0, "Wrong number of arguments for levelset definition");
      List_Delete((yyvsp[(12) - (14)].l));
    ;}
    break;

  case 222:
#line 2631 "Gmsh.y"
    {
      if(List_Nbr((yyvsp[(12) - (14)].l)) == 1){
        int t = (int)(yyvsp[(4) - (14)].d);
        if(gLevelset::find(t)){
	  yymsg(0, "Levelset %d already exists", t);
        }
        else {
          double d;
          List_Read((yyvsp[(12) - (14)].l), 0, &d);
          double pt[3] = {(yyvsp[(8) - (14)].v)[0], (yyvsp[(8) - (14)].v)[1], (yyvsp[(8) - (14)].v)[2]};
          double dir[3] = {(yyvsp[(10) - (14)].v)[0], (yyvsp[(10) - (14)].v)[1], (yyvsp[(10) - (14)].v)[2]};
          gLevelset *ls = new gLevelsetCone(pt, dir, d, t);
          gLevelset::add(ls);
        }
      }
      else
        yymsg(0, "Wrong number of arguments for levelset definition");
      List_Delete((yyvsp[(12) - (14)].l));
    ;}
    break;

  case 223:
#line 2652 "Gmsh.y"
    {
      if(List_Nbr((yyvsp[(12) - (14)].l)) == 3){
        int t = (int)(yyvsp[(4) - (14)].d);
        if(gLevelset::find(t)){
	  yymsg(0, "Levelset %d already exists", t);
        }
        else {
          double d[3];
          for(int i = 0; i < 3; i++)
            List_Read((yyvsp[(12) - (14)].l), i, &d[i]);
          double pt[3] = {(yyvsp[(8) - (14)].v)[0], (yyvsp[(8) - (14)].v)[1], (yyvsp[(8) - (14)].v)[2]};
          double dir[3] = {(yyvsp[(10) - (14)].v)[0], (yyvsp[(10) - (14)].v)[1], (yyvsp[(10) - (14)].v)[2]};
          gLevelset *ls = new gLevelsetEllipsoid(pt, dir, d[0], d[1], d[2], t);
          gLevelset::add(ls);
        }
      }
      else
        yymsg(0, "Wrong number of arguments for levelset definition");
      List_Delete((yyvsp[(12) - (14)].l));
    ;}
    break;

  case 224:
#line 2674 "Gmsh.y"
    {
      if(List_Nbr((yyvsp[(12) - (14)].l)) == 5){
        int t = (int)(yyvsp[(4) - (14)].d);
        if(gLevelset::find(t)){
	  yymsg(0, "Levelset %d already exists", t);
        }
        else {
          double d[5];
          for(int i = 0; i < 5; i++)
            List_Read((yyvsp[(12) - (14)].l), i, &d[i]);
          double pt[3] = {(yyvsp[(8) - (14)].v)[0], (yyvsp[(8) - (14)].v)[1], (yyvsp[(8) - (14)].v)[2]};
          double dir[3] = {(yyvsp[(10) - (14)].v)[0], (yyvsp[(10) - (14)].v)[1], (yyvsp[(10) - (14)].v)[2]};
          gLevelset *ls = new gLevelsetGeneralQuadric(pt, dir, d[0], d[1],
                                                      d[2], d[3], d[4], t);
          gLevelset::add(ls);
        }
      }
      else
        yymsg(0, "Wrong number of arguments for levelset definition");
      List_Delete((yyvsp[(12) - (14)].l));
    ;}
    break;

  case 225:
#line 2696 "Gmsh.y"
    {
      if(!strcmp((yyvsp[(2) - (8)].c), "Union")){
        int t = (int)(yyvsp[(4) - (8)].d);
        if(gLevelset::find(t)){
	  yymsg(0, "Levelset %d already exists", t);
        }
        else {
          std::vector<gLevelset *> vl;
          for(int i = 0; i < List_Nbr((yyvsp[(7) - (8)].l)); i++) {
            double d; List_Read((yyvsp[(7) - (8)].l), i, &d);
            gLevelset *pl = gLevelset::find((int)d);
	    if(!pl) yymsg(0, "Unknown levelset %d", (int)d);
            else vl.push_back(pl);
          }
          gLevelset *ls = new gLevelsetUnion(vl, true, t);
          gLevelset::add(ls);
        }
      }
      else if(!strcmp((yyvsp[(2) - (8)].c), "Intersection")){
        int t = (int)(yyvsp[(4) - (8)].d);
        if(gLevelset::find(t)){
	  yymsg(0, "Levelset %d already exists", t);
        }
        else {
          std::vector<gLevelset *> vl;
          for(int i = 0; i < List_Nbr((yyvsp[(7) - (8)].l)); i++) {
            double d; List_Read((yyvsp[(7) - (8)].l), i, &d);
            gLevelset *pl = gLevelset::find((int)d);
	    if(!pl) yymsg(0, "Unknown levelset %d", (int)d);
            else vl.push_back(pl);
          }
          gLevelset *ls = new gLevelsetIntersection(vl, true, t);
          gLevelset::add(ls);
        }
      }
      else if(!strcmp((yyvsp[(2) - (8)].c), "Cut")){
        int t = (int)(yyvsp[(4) - (8)].d);
        if(gLevelset::find(t)){
	  yymsg(0, "Levelset %d already exists", t);
        }
        else {
          std::vector<gLevelset *> vl;
          for(int i = 0; i < List_Nbr((yyvsp[(7) - (8)].l)); i++) {
            double d; List_Read((yyvsp[(7) - (8)].l), i, &d);
            gLevelset *pl = gLevelset::find((int)d);
	    if(!pl) yymsg(0, "Unknown levelset %d", (int)d);
            else vl.push_back(pl);
          }
          gLevelset *ls = new gLevelsetCut(vl, true, t);
          gLevelset::add(ls);
        }
      }
      else if(!strcmp((yyvsp[(2) - (8)].c), "Crack")){
        int t = (int)(yyvsp[(4) - (8)].d);
        if(gLevelset::find(t)){
	  yymsg(0, "Levelset %d already exists", t);
        }
        else {
          std::vector<gLevelset *> vl;
          for(int i = 0; i < List_Nbr((yyvsp[(7) - (8)].l)); i++) {
            double d; List_Read((yyvsp[(7) - (8)].l), i, &d);
            gLevelset *pl = gLevelset::find((int)d);
	    if(!pl) yymsg(0, "Unknown levelset %d", (int)d);
            else vl.push_back(pl);
          }
          gLevelset *ls = new gLevelsetCrack(vl, false, t);
          gLevelset::add(ls);
        }
      }
      else if(!strcmp((yyvsp[(2) - (8)].c), "Reverse")){
        int t = (int)(yyvsp[(4) - (8)].d);
        if(gLevelset::find(t)){
	  yymsg(0, "Levelset %d already exists", t);
        }
        else {
          double d;
          List_Read((yyvsp[(7) - (8)].l), 0, &d);
          gLevelset *pl = gLevelset::find((int)d);
          gLevelset *ls = NULL;
          if(!pl) yymsg(0, "Unknown levelset %d", (int)d);
          else ls = new gLevelsetReverse(pl, t);
          if(ls) gLevelset::add(ls);
        }
      }
#if defined(HAVE_POST)
      else if(!strcmp((yyvsp[(2) - (8)].c), "PostView")){
        int t = (int)(yyvsp[(4) - (8)].d);
        if(gLevelset::find(t)){
	  yymsg(0, "Levelset %d already exists", t);
        }
        else {
          if(List_Nbr((yyvsp[(7) - (8)].l)) > 0){
            double d; List_Read((yyvsp[(7) - (8)].l), 0, &d);
            gLevelset *ls = new gLevelsetPostView((int)d, t);
            gLevelset::add(ls);
          }
        }
      }
#endif
      else
        yymsg(0, "Wrong number of arguments for levelset definition");
      Free((yyvsp[(2) - (8)].c));
      List_Delete((yyvsp[(7) - (8)].l));
    ;}
    break;

  case 226:
#line 2801 "Gmsh.y"
    {
      if(!strcmp((yyvsp[(2) - (8)].c), "MathEval")){
        int t = (int)(yyvsp[(4) - (8)].d);
        if(gLevelset::find(t)){
	  yymsg(0, "Levelset %d already exists", t);
        }
        else {
          gLevelset *ls = new gLevelsetMathEval((yyvsp[(7) - (8)].c), t);
          gLevelset::add(ls);
        }
      }
      else
        yymsg(0, "Unknown levelset '%s'", (yyvsp[(2) - (8)].c));
      Free((yyvsp[(2) - (8)].c)); Free((yyvsp[(7) - (8)].c));
    ;}
    break;

  case 227:
#line 2817 "Gmsh.y"
    {
      if(!strcmp((yyvsp[(2) - (6)].c), "CutMesh")){
        int t = (int)(yyvsp[(4) - (6)].d);
        if(gLevelset::find(t)){
          GModel::current()->buildCutGModel(gLevelset::find(t), true, false);
        }
        else
          yymsg(0, "Unknown levelset %d", t);
      }
      else if(!strcmp((yyvsp[(2) - (6)].c), "CutMeshTri")){
        int t = (int)(yyvsp[(4) - (6)].d);
        if(gLevelset::find(t)){
          GModel::current()->buildCutGModel(gLevelset::find(t), true, true);
        }
        else
          yymsg(0, "Unknown levelset %d", t);
      }
      else if(!strcmp((yyvsp[(2) - (6)].c), "SplitMesh")){
        int t = (int)(yyvsp[(4) - (6)].d);
        if(gLevelset::find(t)){
          GModel::current()->buildCutGModel(gLevelset::find(t), false, true);
        }
        else
          yymsg(0, "Unknown levelset %d", t);
      }
      else
        yymsg(0, "Unknown levelset '%s'", (yyvsp[(2) - (6)].c));
      Free((yyvsp[(2) - (6)].c));
    ;}
    break;

  case 228:
#line 2852 "Gmsh.y"
    {
      std::vector<std::pair<int, int> > dimTags;
      ListOfShapes2VectorOfPairs((yyvsp[(3) - (4)].l), dimTags);
      if(gmsh_yyfactory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        GModel::current()->getOCCInternals()->remove(dimTags);
      }
      GModel::current()->getGEOInternals()->remove(dimTags);
      GModel::current()->remove(dimTags);
      List_Delete((yyvsp[(3) - (4)].l));
    ;}
    break;

  case 229:
#line 2863 "Gmsh.y"
    {
      std::vector<std::pair<int, int> > dimTags;
      ListOfShapes2VectorOfPairs((yyvsp[(4) - (5)].l), dimTags);
      if(gmsh_yyfactory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        GModel::current()->getOCCInternals()->remove(dimTags, true);
      }
      GModel::current()->getGEOInternals()->remove(dimTags, true);
      GModel::current()->remove(dimTags, true);
      List_Delete((yyvsp[(4) - (5)].l));
    ;}
    break;

  case 230:
#line 2874 "Gmsh.y"
    {
#if defined(HAVE_MESH)
      GModel::current()->getFields()->deleteField((int)(yyvsp[(4) - (6)].d));
#endif
    ;}
    break;

  case 231:
#line 2880 "Gmsh.y"
    {
#if defined(HAVE_POST)
      if(!strcmp((yyvsp[(2) - (6)].c), "View")){
	int index = (int)(yyvsp[(4) - (6)].d);
	if(index >= 0 && index < (int)PView::list.size())
	  delete PView::list[index];
	else
	  yymsg(0, "Unknown view %d", index);
      }
      else
	yymsg(0, "Unknown command 'Delete %s'", (yyvsp[(2) - (6)].c));
#endif
      Free((yyvsp[(2) - (6)].c));
    ;}
    break;

  case 232:
#line 2895 "Gmsh.y"
    {
      if(!strcmp((yyvsp[(2) - (3)].c), "Meshes") || !strcmp((yyvsp[(2) - (3)].c), "All")){
        ClearProject();
      }
      else if(!strcmp((yyvsp[(2) - (3)].c), "Model")){
	GModel::current()->destroy(true); // destroy, but keep name/filename
	GModel::current()->getGEOInternals()->destroy();
      }
      else if(!strcmp((yyvsp[(2) - (3)].c), "Physicals")){
	GModel::current()->getGEOInternals()->resetPhysicalGroups();
	GModel::current()->deletePhysicalGroups();
      }
      else if(!strcmp((yyvsp[(2) - (3)].c), "Variables")){
	gmsh_yysymbols.clear();
      }
      else if(!strcmp((yyvsp[(2) - (3)].c), "Options")){
        ReInitOptions(0);
        InitOptionsGUI(0);
      }
      else{
	if(gmsh_yysymbols.count((yyvsp[(2) - (3)].c)))
	  gmsh_yysymbols.erase((yyvsp[(2) - (3)].c));
	else
	  yymsg(0, "Unknown object or expression to delete '%s'", (yyvsp[(2) - (3)].c));
      }
      Free((yyvsp[(2) - (3)].c));
    ;}
    break;

  case 233:
#line 2923 "Gmsh.y"
    {
#if defined(HAVE_POST)
      if(!strcmp((yyvsp[(2) - (4)].c), "Empty") && !strcmp((yyvsp[(3) - (4)].c), "Views")){
	for(int i = PView::list.size() - 1; i >= 0; i--)
	  if(PView::list[i]->getData()->empty()) delete PView::list[i];
      }
      else
	yymsg(0, "Unknown command 'Delete %s %s'", (yyvsp[(2) - (4)].c), (yyvsp[(3) - (4)].c));
#endif
      Free((yyvsp[(2) - (4)].c)); Free((yyvsp[(3) - (4)].c));
    ;}
    break;

  case 234:
#line 2935 "Gmsh.y"
    {
      gmsh_yynamespaces.clear();
    ;}
    break;

  case 235:
#line 2944 "Gmsh.y"
    {
      std::vector<std::pair<int, int> > dimTags;
      ListOfShapes2VectorOfPairs((yyvsp[(4) - (5)].l), dimTags);
      setColor(dimTags, (yyvsp[(2) - (5)].u), false);
      List_Delete((yyvsp[(4) - (5)].l));
    ;}
    break;

  case 236:
#line 2951 "Gmsh.y"
    {
      std::vector<std::pair<int, int> > dimTags;
      ListOfShapes2VectorOfPairs((yyvsp[(5) - (6)].l), dimTags);
      setColor(dimTags, (yyvsp[(3) - (6)].u), true);
      List_Delete((yyvsp[(5) - (6)].l));
    ;}
    break;

  case 237:
#line 2963 "Gmsh.y"
    {
      std::vector<std::pair<int, int> > dimTags;
      ListOfShapes2VectorOfPairs((yyvsp[(4) - (5)].l), dimTags);
      for(unsigned int i = 0; i < dimTags.size(); i++){
        GEntity *ge = GModel::current()->getEntityByTag
          (dimTags[i].first, dimTags[i].second);
        if(ge){
          for(unsigned int j = 0; j < ge->getNumMeshElements(); j++)
            ge->getMeshElement(j)->setPartition((int)(yyvsp[(2) - (5)].d));
        }
      }
      List_Delete((yyvsp[(4) - (5)].l));
    ;}
    break;

  case 238:
#line 2982 "Gmsh.y"
    {
      std::string what = (yyvsp[(2) - (3)].c);
      setVisibility(-1, 1, false);
      Free((yyvsp[(2) - (3)].c));
    ;}
    break;

  case 239:
#line 2988 "Gmsh.y"
    {
      std::string what = (yyvsp[(2) - (3)].c);
      setVisibility(-1, 0, false);
      Free((yyvsp[(2) - (3)].c));
    ;}
    break;

  case 240:
#line 2994 "Gmsh.y"
    {
      std::vector<std::pair<int, int> > dimTags;
      ListOfShapes2VectorOfPairs((yyvsp[(3) - (4)].l), dimTags);
      setVisibility(dimTags, 1, false);
      List_Delete((yyvsp[(3) - (4)].l));
    ;}
    break;

  case 241:
#line 3001 "Gmsh.y"
    {
      std::vector<std::pair<int, int> > dimTags;
      ListOfShapes2VectorOfPairs((yyvsp[(4) - (5)].l), dimTags);
      setVisibility(dimTags, 1, true);
      List_Delete((yyvsp[(4) - (5)].l));
    ;}
    break;

  case 242:
#line 3008 "Gmsh.y"
    {
      std::vector<std::pair<int, int> > dimTags;
      ListOfShapes2VectorOfPairs((yyvsp[(3) - (4)].l), dimTags);
      setVisibility(dimTags, 0, false);
      List_Delete((yyvsp[(3) - (4)].l));
    ;}
    break;

  case 243:
#line 3015 "Gmsh.y"
    {
      std::vector<std::pair<int, int> > dimTags;
      ListOfShapes2VectorOfPairs((yyvsp[(4) - (5)].l), dimTags);
      setVisibility(dimTags, 0, true);
      List_Delete((yyvsp[(4) - (5)].l));
    ;}
    break;

  case 244:
#line 3027 "Gmsh.y"
    {
      if(!strcmp((yyvsp[(1) - (3)].c), "Include")){
        std::string tmp = FixRelativePath(gmsh_yyname, (yyvsp[(2) - (3)].c));
	Msg::StatusBar(true, "Reading '%s'...", tmp.c_str());
	// Warning: we explicitly ask ParseFile not to fclose() the included
        // file, in order to allow user functions definitions in these files.
        // The files will be closed in the next time OpenFile terminates. If
        // you need to include many many files and don't have functions in
        // the files, use "Merge" instead of "Include", as some OSes limit
        // the number of files a process can open simultaneously. (A better
        // solution would be to modify FunctionManager to reopen the files
        // instead of using the FILE pointer...)
	ParseFile(tmp, false, true);
	SetBoundingBox();
	Msg::StatusBar(true, "Done reading '%s'", tmp.c_str());
      }
      else if(!strcmp((yyvsp[(1) - (3)].c), "Print")){
	// make sure we have the latest data from CAD internals in GModel (fixes
	// bug where we would have no geometry in the picture if the print
	// command is in the same file as the geometry)
        if(GModel::current()->getOCCInternals() &&
           GModel::current()->getOCCInternals()->getChanged())
          GModel::current()->getOCCInternals()->synchronize(GModel::current());
        if(GModel::current()->getGEOInternals()->getChanged())
          GModel::current()->getGEOInternals()->synchronize(GModel::current());
        std::string tmp = FixRelativePath(gmsh_yyname, (yyvsp[(2) - (3)].c));
	CreateOutputFile(tmp, CTX::instance()->print.fileFormat);
      }
      else if(!strcmp((yyvsp[(1) - (3)].c), "Save")){
        if(GModel::current()->getOCCInternals() &&
           GModel::current()->getOCCInternals()->getChanged())
          GModel::current()->getOCCInternals()->synchronize(GModel::current());
        if(GModel::current()->getGEOInternals()->getChanged())
          GModel::current()->getGEOInternals()->synchronize(GModel::current());
        std::string tmp = FixRelativePath(gmsh_yyname, (yyvsp[(2) - (3)].c));
	CreateOutputFile(tmp, CTX::instance()->mesh.fileFormat);
      }
      else if(!strcmp((yyvsp[(1) - (3)].c), "Merge") || !strcmp((yyvsp[(1) - (3)].c), "MergeWithBoundingBox")){
	// sync CAD internals here, so that if we e.g. import a STEP file, we
        // have the correct entity tags and the numberings don't clash
        if(GModel::current()->getOCCInternals() &&
           GModel::current()->getOCCInternals()->getChanged())
          GModel::current()->getOCCInternals()->synchronize(GModel::current());
        if(GModel::current()->getGEOInternals()->getChanged())
          GModel::current()->getGEOInternals()->synchronize(GModel::current());
        std::string tmp = FixRelativePath(gmsh_yyname, (yyvsp[(2) - (3)].c));
	MergeFile(tmp, true);
      }
      else if(!strcmp((yyvsp[(1) - (3)].c), "NonBlockingSystemCall")){
	SystemCall((yyvsp[(2) - (3)].c));
      }
      else if(!strcmp((yyvsp[(1) - (3)].c), "System") || !strcmp((yyvsp[(1) - (3)].c), "SystemCall")){
	SystemCall((yyvsp[(2) - (3)].c), true);
      }
      else if(!strcmp((yyvsp[(1) - (3)].c), "SetName")){
	GModel::current()->setName((yyvsp[(2) - (3)].c));
      }
      else if(!strcmp((yyvsp[(1) - (3)].c), "CreateDir")){
        std::string tmp = FixRelativePath(gmsh_yyname, (yyvsp[(2) - (3)].c));
	CreateSingleDir(tmp);
      }
      else if(!strcmp((yyvsp[(1) - (3)].c), "OnelabRun")){
        Msg::RunOnelabClient((yyvsp[(2) - (3)].c));
      }
      else if(!strcmp((yyvsp[(1) - (3)].c), "OptimizeMesh")){
        GModel::current()->optimizeMesh((yyvsp[(2) - (3)].c));
      }
      else{
	yymsg(0, "Unknown command '%s'", (yyvsp[(1) - (3)].c));
      }
      Free((yyvsp[(1) - (3)].c)); Free((yyvsp[(2) - (3)].c));
    ;}
    break;

  case 245:
#line 3100 "Gmsh.y"
    {
      int n = List_Nbr((yyvsp[(3) - (5)].l));
      if(n == 1){
        char *s; List_Read((yyvsp[(3) - (5)].l), 0, &s);
        Msg::RunOnelabClient(s);
        Free(s);
      }
      else if(n == 2){
        char *s, *t; List_Read((yyvsp[(3) - (5)].l), 0, &s); List_Read((yyvsp[(3) - (5)].l), 1, &t);
        Msg::RunOnelabClient(s, t);
        Free(s); Free(t);
      }
      else{
        yymsg(0, "OnelabRun takes one or two arguments");
      }
      List_Delete((yyvsp[(3) - (5)].l));
    ;}
    break;

  case 246:
#line 3118 "Gmsh.y"
    {
#if defined(HAVE_POST)
      if(!strcmp((yyvsp[(1) - (7)].c), "Save") && !strcmp((yyvsp[(2) - (7)].c), "View")){
	int index = (int)(yyvsp[(4) - (7)].d);
	if(index >= 0 && index < (int)PView::list.size()){
          std::string tmp = FixRelativePath(gmsh_yyname, (yyvsp[(6) - (7)].c));
	  PView::list[index]->write(tmp, CTX::instance()->post.fileFormat);
	}
	else
	  yymsg(0, "Unknown view %d", index);
      }
      else
	yymsg(0, "Unknown command '%s'", (yyvsp[(1) - (7)].c));
#endif
      Free((yyvsp[(1) - (7)].c)); Free((yyvsp[(2) - (7)].c)); Free((yyvsp[(6) - (7)].c));
    ;}
    break;

  case 247:
#line 3135 "Gmsh.y"
    {
#if defined(HAVE_POST) && defined(HAVE_MESH)
      if(!strcmp((yyvsp[(1) - (7)].c), "Background") && !strcmp((yyvsp[(2) - (7)].c), "Mesh")  && !strcmp((yyvsp[(3) - (7)].c), "View")){
	int index = (int)(yyvsp[(5) - (7)].d);
	if(index >= 0 && index < (int)PView::list.size())
	  GModel::current()->getFields()->setBackgroundMesh(index);
	else
	  yymsg(0, "Unknown view %d", index);
      }
      else
	yymsg(0, "Unknown command '%s'", (yyvsp[(1) - (7)].c));
#endif
      Free((yyvsp[(1) - (7)].c)); Free((yyvsp[(2) - (7)].c)); Free((yyvsp[(3) - (7)].c));
    ;}
    break;

  case 248:
#line 3150 "Gmsh.y"
    {
      if(!strcmp((yyvsp[(1) - (3)].c), "Sleep")){
	SleepInSeconds((yyvsp[(2) - (3)].d));
      }
      else if(!strcmp((yyvsp[(1) - (3)].c), "Remesh")){
	yymsg(0, "Surface remeshing must be reinterfaced");
      }
      else if(!strcmp((yyvsp[(1) - (3)].c), "Mesh")){
	int lock = CTX::instance()->lock;
	CTX::instance()->lock = 0;
        if(GModel::current()->getOCCInternals() &&
           GModel::current()->getOCCInternals()->getChanged())
          GModel::current()->getOCCInternals()->synchronize(GModel::current());
        if(GModel::current()->getGEOInternals()->getChanged())
          GModel::current()->getGEOInternals()->synchronize(GModel::current());
	GModel::current()->mesh((int)(yyvsp[(2) - (3)].d));
	CTX::instance()->lock = lock;
      }
      else if(!strcmp((yyvsp[(1) - (3)].c), "SetOrder")){
#if defined(HAVE_MESH)
        SetOrderN(GModel::current(), (yyvsp[(2) - (3)].d), CTX::instance()->mesh.secondOrderLinear,
                  CTX::instance()->mesh.secondOrderIncomplete,
                  CTX::instance()->mesh.meshOnlyVisible);
#endif
      }
      else if(!strcmp((yyvsp[(1) - (3)].c), "PartitionMesh")){
        GModel::current()->partitionMesh((yyvsp[(2) - (3)].d));
      }
      else
	yymsg(0, "Unknown command '%s'", (yyvsp[(1) - (3)].c));
      Free((yyvsp[(1) - (3)].c));
    ;}
    break;

  case 249:
#line 3183 "Gmsh.y"
    {
#if defined(HAVE_PLUGINS)
       try {
	 PluginManager::instance()->action((yyvsp[(3) - (7)].c), (yyvsp[(6) - (7)].c), 0);
       }
       catch(...) {
	 yymsg(0, "Unknown action '%s' or plugin '%s'", (yyvsp[(6) - (7)].c), (yyvsp[(3) - (7)].c));
       }
#endif
       Free((yyvsp[(3) - (7)].c)); Free((yyvsp[(6) - (7)].c));
     ;}
    break;

  case 250:
#line 3195 "Gmsh.y"
    {
#if defined(HAVE_POST)
      if(!strcmp((yyvsp[(2) - (3)].c), "ElementsFromAllViews"))
	PView::combine(false, 1, CTX::instance()->post.combineRemoveOrig);
      else if(!strcmp((yyvsp[(2) - (3)].c), "ElementsFromVisibleViews"))
	PView::combine(false, 0, CTX::instance()->post.combineRemoveOrig);
      else if(!strcmp((yyvsp[(2) - (3)].c), "ElementsByViewName"))
	PView::combine(false, 2, CTX::instance()->post.combineRemoveOrig);
      else if(!strcmp((yyvsp[(2) - (3)].c), "TimeStepsFromAllViews"))
	PView::combine(true, 1, CTX::instance()->post.combineRemoveOrig);
      else if(!strcmp((yyvsp[(2) - (3)].c), "TimeStepsFromVisibleViews"))
	PView::combine(true, 0, CTX::instance()->post.combineRemoveOrig);
      else if(!strcmp((yyvsp[(2) - (3)].c), "TimeStepsByViewName"))
	PView::combine(true, 2, CTX::instance()->post.combineRemoveOrig);
      else if(!strcmp((yyvsp[(2) - (3)].c), "Views"))
	PView::combine(false, 1, CTX::instance()->post.combineRemoveOrig);
      else if(!strcmp((yyvsp[(2) - (3)].c), "TimeSteps"))
	PView::combine(true, 2, CTX::instance()->post.combineRemoveOrig);
      else
	yymsg(0, "Unknown 'Combine' command");
#endif
      Free((yyvsp[(2) - (3)].c));
    ;}
    break;

  case 251:
#line 3219 "Gmsh.y"
    {
      Msg::Exit(0);
    ;}
    break;

  case 252:
#line 3223 "Gmsh.y"
    {
      gmsh_yyerrorstate = 999; // this will be checked when yyparse returns
      YYABORT;
    ;}
    break;

  case 253:
#line 3228 "Gmsh.y"
    {
      // force sync
      if(GModel::current()->getOCCInternals())
        GModel::current()->getOCCInternals()->synchronize(GModel::current());
      GModel::current()->getGEOInternals()->synchronize(GModel::current());
    ;}
    break;

  case 254:
#line 3235 "Gmsh.y"
    {
      new GModel();
      GModel::current(GModel::list.size() - 1);
    ;}
    break;

  case 255:
#line 3240 "Gmsh.y"
    {
      CTX::instance()->forcedBBox = 0;
      if(GModel::current()->getOCCInternals() &&
         GModel::current()->getOCCInternals()->getChanged())
        GModel::current()->getOCCInternals()->synchronize(GModel::current());
      if(GModel::current()->getGEOInternals()->getChanged())
        GModel::current()->getGEOInternals()->synchronize(GModel::current());
      SetBoundingBox();
    ;}
    break;

  case 256:
#line 3250 "Gmsh.y"
    {
      CTX::instance()->forcedBBox = 1;
      SetBoundingBox((yyvsp[(3) - (15)].d), (yyvsp[(5) - (15)].d), (yyvsp[(7) - (15)].d), (yyvsp[(9) - (15)].d), (yyvsp[(11) - (15)].d), (yyvsp[(13) - (15)].d));
    ;}
    break;

  case 257:
#line 3255 "Gmsh.y"
    {
#if defined(HAVE_OPENGL)
      drawContext::global()->draw();
#endif
    ;}
    break;

  case 258:
#line 3261 "Gmsh.y"
    {
#if defined(HAVE_OPENGL)
     CTX::instance()->mesh.changed = ENT_ALL;
     for(unsigned int index = 0; index < PView::list.size(); index++)
       PView::list[index]->setChanged(true);
#endif
    ;}
    break;

  case 259:
#line 3269 "Gmsh.y"
    {
      GModel::current()->createTopologyFromMesh();
    ;}
    break;

  case 260:
#line 3273 "Gmsh.y"
    {
      GModel::current()->createTopologyFromMesh(1);
    ;}
    break;

  case 261:
#line 3277 "Gmsh.y"
    {
      if(GModel::current()->getOCCInternals() &&
         GModel::current()->getOCCInternals()->getChanged())
        GModel::current()->getOCCInternals()->synchronize(GModel::current());
      if(GModel::current()->getGEOInternals()->getChanged())
        GModel::current()->getGEOInternals()->synchronize(GModel::current());
      GModel::current()->refineMesh(CTX::instance()->mesh.secondOrderLinear);
    ;}
    break;

  case 262:
#line 3287 "Gmsh.y"
    {
      int lock = CTX::instance()->lock;
      CTX::instance()->lock = 0;
      std::vector<int> technique;
      for(int i = 0; i < List_Nbr((yyvsp[(3) - (16)].l)); i++){
        double d;
        List_Read((yyvsp[(3) - (16)].l), i, &d);
        technique.push_back((int)d);
      }
      if(technique.empty()){
        yymsg(0, "Need at least one adaptation technique");
      }
      else{
        std::vector<simpleFunction<double>*> f;
        for(int i = 0; i < List_Nbr((yyvsp[(6) - (16)].l)); i++){
          double d;
          List_Read((yyvsp[(6) - (16)].l), i, &d);
          gLevelset *l = gLevelset::find((int)d);
          if(l) f.push_back(l);
          else yymsg(0, "Unknown levelset %d", (int)d);
        }
        if(technique.size() != f.size()){
          yymsg(0, "Number of techniques != number of levelsets");
        }
        else{
          if(List_Nbr((yyvsp[(9) - (16)].l)) != (int)f.size()){
            yymsg(0, "Number of parameters != number of levelsets");
          }
          else{
            std::vector<std::vector<double> > parameters;
            parameters.resize(List_Nbr((yyvsp[(9) - (16)].l)));
            for(int i = 0; i < List_Nbr((yyvsp[(9) - (16)].l)); i++){
              List_T *l = *(List_T**)List_Pointer((yyvsp[(9) - (16)].l), i);
              for(int j = 0; j < List_Nbr(l); j++){
                double d;
                List_Read(l, j, &d);
                parameters[i].push_back(d);
              }
            }
            int niter = (int)(yyvsp[(12) - (16)].d);
            bool meshAll = ((yyvsp[(14) - (16)].d) == 0) ? false : true;
            if(GModel::current()->getOCCInternals() &&
               GModel::current()->getOCCInternals()->getChanged())
              GModel::current()->getOCCInternals()->synchronize(GModel::current());
            if(GModel::current()->getGEOInternals()->getChanged())
              GModel::current()->getGEOInternals()->synchronize(GModel::current());
            GModel::current()->adaptMesh(technique, f, parameters, niter, meshAll);
          }
        }
      }
      List_Delete((yyvsp[(3) - (16)].l));
      List_Delete((yyvsp[(6) - (16)].l));
      for(int i = 0; i < List_Nbr((yyvsp[(9) - (16)].l)); i++)
        List_Delete(*(List_T**)List_Pointer((yyvsp[(9) - (16)].l), i));
      List_Delete((yyvsp[(9) - (16)].l));
      CTX::instance()->lock = lock;
    ;}
    break;

  case 263:
#line 3350 "Gmsh.y"
    {
#if defined(HAVE_POPPLER)
       std::vector<int> is;
       for(int i = 0; i < List_Nbr((yyvsp[(4) - (11)].l)); i++){
	 double d;
	 List_Read((yyvsp[(4) - (11)].l), i, &d);
	 is.push_back ((int) d);
       }
       gmshPopplerWrapper::instance()->setMacroForPages(is, (yyvsp[(7) - (11)].c), (yyvsp[(9) - (11)].c) );
#endif
     ;}
    break;

  case 264:
#line 3366 "Gmsh.y"
    {
      LoopControlVariablesTab[ImbricatedLoop][0] = (yyvsp[(3) - (6)].d);
      LoopControlVariablesTab[ImbricatedLoop][1] = (yyvsp[(5) - (6)].d);
      LoopControlVariablesTab[ImbricatedLoop][2] = 1.0;
      LoopControlVariablesNameTab[ImbricatedLoop] = "";
      gmshgetpos(gmsh_yyin, &yyposImbricatedLoopsTab[ImbricatedLoop]);
      yylinenoImbricatedLoopsTab[ImbricatedLoop] = gmsh_yylineno;
      if((yyvsp[(3) - (6)].d) > (yyvsp[(5) - (6)].d))
	skip("For", "EndFor");
      else
	ImbricatedLoop++;
      if(ImbricatedLoop > MAX_RECUR_LOOPS - 1){
	yymsg(0, "Reached maximum number of imbricated loops");
	ImbricatedLoop = MAX_RECUR_LOOPS - 1;
      }
    ;}
    break;

  case 265:
#line 3383 "Gmsh.y"
    {
      LoopControlVariablesTab[ImbricatedLoop][0] = (yyvsp[(3) - (8)].d);
      LoopControlVariablesTab[ImbricatedLoop][1] = (yyvsp[(5) - (8)].d);
      LoopControlVariablesTab[ImbricatedLoop][2] = (yyvsp[(7) - (8)].d);
      LoopControlVariablesNameTab[ImbricatedLoop] = "";
      gmshgetpos(gmsh_yyin, &yyposImbricatedLoopsTab[ImbricatedLoop]);
      yylinenoImbricatedLoopsTab[ImbricatedLoop] = gmsh_yylineno;
      if(((yyvsp[(7) - (8)].d) > 0. && (yyvsp[(3) - (8)].d) > (yyvsp[(5) - (8)].d)) || ((yyvsp[(7) - (8)].d) < 0. && (yyvsp[(3) - (8)].d) < (yyvsp[(5) - (8)].d)))
	skip("For", "EndFor");
      else
	ImbricatedLoop++;
      if(ImbricatedLoop > MAX_RECUR_LOOPS - 1){
	yymsg(0, "Reached maximum number of imbricated loops");
	ImbricatedLoop = MAX_RECUR_LOOPS - 1;
      }
    ;}
    break;

  case 266:
#line 3400 "Gmsh.y"
    {
      LoopControlVariablesTab[ImbricatedLoop][0] = (yyvsp[(5) - (8)].d);
      LoopControlVariablesTab[ImbricatedLoop][1] = (yyvsp[(7) - (8)].d);
      LoopControlVariablesTab[ImbricatedLoop][2] = 1.0;
      LoopControlVariablesNameTab[ImbricatedLoop] = (yyvsp[(2) - (8)].c);
      gmsh_yysymbol &s(gmsh_yysymbols[(yyvsp[(2) - (8)].c)]);
      s.list = false;
      s.value.resize(1);
      s.value[0] = (yyvsp[(5) - (8)].d);
      gmshgetpos(gmsh_yyin, &yyposImbricatedLoopsTab[ImbricatedLoop]);
      yylinenoImbricatedLoopsTab[ImbricatedLoop] = gmsh_yylineno;
      if((yyvsp[(5) - (8)].d) > (yyvsp[(7) - (8)].d))
	skip("For", "EndFor");
      else
	ImbricatedLoop++;
      if(ImbricatedLoop > MAX_RECUR_LOOPS - 1){
	yymsg(0, "Reached maximum number of imbricated loops");
	ImbricatedLoop = MAX_RECUR_LOOPS - 1;
      }
      Free((yyvsp[(2) - (8)].c));
    ;}
    break;

  case 267:
#line 3422 "Gmsh.y"
    {
      LoopControlVariablesTab[ImbricatedLoop][0] = (yyvsp[(5) - (10)].d);
      LoopControlVariablesTab[ImbricatedLoop][1] = (yyvsp[(7) - (10)].d);
      LoopControlVariablesTab[ImbricatedLoop][2] = (yyvsp[(9) - (10)].d);
      LoopControlVariablesNameTab[ImbricatedLoop] = (yyvsp[(2) - (10)].c);
      gmsh_yysymbol &s(gmsh_yysymbols[(yyvsp[(2) - (10)].c)]);
      s.list = false;
      s.value.resize(1);
      s.value[0] = (yyvsp[(5) - (10)].d);
      gmshgetpos(gmsh_yyin, &yyposImbricatedLoopsTab[ImbricatedLoop]);
      yylinenoImbricatedLoopsTab[ImbricatedLoop] = gmsh_yylineno;
      if(((yyvsp[(9) - (10)].d) > 0. && (yyvsp[(5) - (10)].d) > (yyvsp[(7) - (10)].d)) || ((yyvsp[(9) - (10)].d) < 0. && (yyvsp[(5) - (10)].d) < (yyvsp[(7) - (10)].d)))
	skip("For", "EndFor");
      else
	ImbricatedLoop++;
      if(ImbricatedLoop > MAX_RECUR_LOOPS - 1){
	yymsg(0, "Reached maximum number of imbricated loops");
	ImbricatedLoop = MAX_RECUR_LOOPS - 1;
      }
      Free((yyvsp[(2) - (10)].c));
    ;}
    break;

  case 268:
#line 3444 "Gmsh.y"
    {
      if(ImbricatedLoop <= 0){
	yymsg(0, "Invalid For/EndFor loop");
	ImbricatedLoop = 0;
      }
      else{
	double step = LoopControlVariablesTab[ImbricatedLoop - 1][2];
        std::string name = LoopControlVariablesNameTab[ImbricatedLoop - 1];
        if(name.size()){
          if(!gmsh_yysymbols.count(name))
            yymsg(0, "Unknown loop variable '%s'", name.c_str());
          else{
            gmsh_yysymbol &s(gmsh_yysymbols[name]);
            if(!s.list && s.value.size()){
              s.value[0] += step;
              LoopControlVariablesTab[ImbricatedLoop - 1][0] = s.value[0];
            }
            else
              yymsg(0, "Bad loop variable %s", name.c_str());
          }
        }
        else{
          LoopControlVariablesTab[ImbricatedLoop - 1][0] += step;
        }
	double x0 = LoopControlVariablesTab[ImbricatedLoop - 1][0];
	double x1 = LoopControlVariablesTab[ImbricatedLoop - 1][1];
        if((step > 0. && x0 <= x1) || (step < 0. && x0 >= x1)){
	  gmshsetpos(gmsh_yyin, &yyposImbricatedLoopsTab[ImbricatedLoop - 1]);
	  gmsh_yylineno = yylinenoImbricatedLoopsTab[ImbricatedLoop - 1];
	}
	else
	  ImbricatedLoop--;
      }
    ;}
    break;

  case 269:
#line 3479 "Gmsh.y"
    {
      if(!FunctionManager::Instance()->createFunction
         (std::string((yyvsp[(2) - (2)].c)), gmsh_yyin, gmsh_yyname, gmsh_yylineno))
	yymsg(0, "Redefinition of function %s", (yyvsp[(2) - (2)].c));
      skip(NULL, "Return");
      Free((yyvsp[(2) - (2)].c));
    ;}
    break;

  case 270:
#line 3487 "Gmsh.y"
    {
      if(!FunctionManager::Instance()->createFunction
         (std::string((yyvsp[(2) - (2)].c)), gmsh_yyin, gmsh_yyname, gmsh_yylineno))
	yymsg(0, "Redefinition of function %s", (yyvsp[(2) - (2)].c));
      skip(NULL, "Return");
      Free((yyvsp[(2) - (2)].c));
    ;}
    break;

  case 271:
#line 3495 "Gmsh.y"
    {
      if(!FunctionManager::Instance()->leaveFunction
         (&gmsh_yyin, gmsh_yyname, gmsh_yylineno))
	yymsg(0, "Error while exiting function");
    ;}
    break;

  case 272:
#line 3501 "Gmsh.y"
    {
      if(!FunctionManager::Instance()->enterFunction
         (std::string((yyvsp[(2) - (3)].c)), &gmsh_yyin, gmsh_yyname, gmsh_yylineno))
	yymsg(0, "Unknown function '%s'", (yyvsp[(2) - (3)].c));
      Free((yyvsp[(2) - (3)].c));
    ;}
    break;

  case 273:
#line 3508 "Gmsh.y"
    {
      if(!FunctionManager::Instance()->enterFunction
         (std::string((yyvsp[(2) - (3)].c)), &gmsh_yyin, gmsh_yyname, gmsh_yylineno))
	yymsg(0, "Unknown function '%s'", (yyvsp[(2) - (3)].c));
      Free((yyvsp[(2) - (3)].c));
    ;}
    break;

  case 274:
#line 3515 "Gmsh.y"
    {
      ImbricatedTest++;
      if(ImbricatedTest > MAX_RECUR_TESTS-1){
	yymsg(0, "Reached maximum number of imbricated tests");
        ImbricatedTest = MAX_RECUR_TESTS-1;
      }

      if((yyvsp[(3) - (4)].d)){
        // Current test is true
        statusImbricatedTests[ImbricatedTest] = 1;
      }
      else{
        statusImbricatedTests[ImbricatedTest] = 0;
        // Go after the next ElseIf or Else or EndIf
        int type_until2 = 0;
        skipTest("If", "EndIf", "ElseIf", 4, &type_until2);
        if(!type_until2) ImbricatedTest--; // EndIf reached
      }
    ;}
    break;

  case 275:
#line 3535 "Gmsh.y"
    {
      if(ImbricatedTest > 0){
        if (statusImbricatedTests[ImbricatedTest]){
          // Last test (If or ElseIf) was true, thus go after EndIf (out of If EndIf)
          skip("If", "EndIf");
          ImbricatedTest--;
        }
        else{
          // Previous test(s) (If and ElseIf) not yet true
          if((yyvsp[(3) - (4)].d)){
            statusImbricatedTests[ImbricatedTest] = 1;
          }
          else{
            // Current test still not true: statusImbricatedTests[ImbricatedTest] = 0;
            // Go after the next ElseIf or Else or EndIf
            int type_until2 = 0;
            skipTest("If", "EndIf", "ElseIf", 4, &type_until2);
            if(!type_until2) ImbricatedTest--;
          }
        }
      }
      else{
	yymsg(0, "Orphan ElseIf");
      }
    ;}
    break;

  case 276:
#line 3561 "Gmsh.y"
    {
      if(ImbricatedTest > 0){
        if(statusImbricatedTests[ImbricatedTest]){
          skip("If", "EndIf");
          ImbricatedTest--;
        }
      }
      else{
	yymsg(0, "Orphan Else");
      }
    ;}
    break;

  case 277:
#line 3573 "Gmsh.y"
    {
      ImbricatedTest--;
      if(ImbricatedTest < 0)
        yymsg(1, "Orphan EndIf");
    ;}
    break;

  case 278:
#line 3584 "Gmsh.y"
    {
      std::vector<std::pair<int, int> > inDimTags, outDimTags;
      ListOfShapes2VectorOfPairs((yyvsp[(4) - (5)].l), inDimTags);
      bool r = true;
      if(gmsh_yyfactory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        r = GModel::current()->getOCCInternals()->extrude
          (inDimTags, (yyvsp[(2) - (5)].v)[0], (yyvsp[(2) - (5)].v)[1], (yyvsp[(2) - (5)].v)[2], outDimTags);
      }
      else{
        r = GModel::current()->getGEOInternals()->extrude
          (inDimTags, (yyvsp[(2) - (5)].v)[0], (yyvsp[(2) - (5)].v)[1], (yyvsp[(2) - (5)].v)[2], outDimTags);
      }
      if(!r) yymsg(0, "Could not extrude shapes");
      (yyval.l) = (yyvsp[(4) - (5)].l);
      List_Reset((yyval.l));
      VectorOfPairs2ListOfShapes(outDimTags, (yyval.l));
    ;}
    break;

  case 279:
#line 3602 "Gmsh.y"
    {
      std::vector<std::pair<int, int> > inDimTags, outDimTags;
      ListOfShapes2VectorOfPairs((yyvsp[(10) - (11)].l), inDimTags);
      bool r = true;
      if(gmsh_yyfactory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        r = GModel::current()->getOCCInternals()->revolve
          (inDimTags, (yyvsp[(5) - (11)].v)[0], (yyvsp[(5) - (11)].v)[1], (yyvsp[(5) - (11)].v)[2], (yyvsp[(3) - (11)].v)[0], (yyvsp[(3) - (11)].v)[1], (yyvsp[(3) - (11)].v)[2], (yyvsp[(7) - (11)].d), outDimTags);
      }
      else{
        r = GModel::current()->getGEOInternals()->revolve
          (inDimTags, (yyvsp[(5) - (11)].v)[0], (yyvsp[(5) - (11)].v)[1], (yyvsp[(5) - (11)].v)[2], (yyvsp[(3) - (11)].v)[0], (yyvsp[(3) - (11)].v)[1], (yyvsp[(3) - (11)].v)[2], (yyvsp[(7) - (11)].d), outDimTags);
      }
      if(!r) yymsg(0, "Could not extrude shapes");
      (yyval.l) = (yyvsp[(10) - (11)].l);
      List_Reset((yyval.l));
      VectorOfPairs2ListOfShapes(outDimTags, (yyval.l));
    ;}
    break;

  case 280:
#line 3620 "Gmsh.y"
    {
      std::vector<std::pair<int, int> > inDimTags, outDimTags;
      ListOfShapes2VectorOfPairs((yyvsp[(12) - (13)].l), inDimTags);
      bool r = true;
      if(gmsh_yyfactory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        yymsg(0, "Twisting extrude not available with OpenCASCADE geometry kernel");
      }
      else{
        r = GModel::current()->getGEOInternals()->twist
          (inDimTags, (yyvsp[(7) - (13)].v)[0], (yyvsp[(7) - (13)].v)[1], (yyvsp[(7) - (13)].v)[2], (yyvsp[(3) - (13)].v)[0], (yyvsp[(3) - (13)].v)[1], (yyvsp[(3) - (13)].v)[2], (yyvsp[(5) - (13)].v)[0], (yyvsp[(5) - (13)].v)[1], (yyvsp[(5) - (13)].v)[2],
           (yyvsp[(9) - (13)].d), outDimTags);
      }
      if(!r) yymsg(0, "Could not extrude shapes");
      (yyval.l) = (yyvsp[(12) - (13)].l);
      List_Reset((yyval.l));
      VectorOfPairs2ListOfShapes(outDimTags, (yyval.l));
    ;}
    break;

  case 281:
#line 3638 "Gmsh.y"
    {
      extr.mesh.ExtrudeMesh = extr.mesh.Recombine = false;
      extr.mesh.QuadToTri = NO_QUADTRI;
      extr.mesh.ScaleLast = false;
    ;}
    break;

  case 282:
#line 3644 "Gmsh.y"
    {
      std::vector<std::pair<int, int> > inDimTags, outDimTags;
      ListOfShapes2VectorOfPairs((yyvsp[(4) - (7)].l), inDimTags);
      bool r = true;
      if(gmsh_yyfactory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        r = GModel::current()->getOCCInternals()->extrude
          (inDimTags, (yyvsp[(2) - (7)].v)[0], (yyvsp[(2) - (7)].v)[1], (yyvsp[(2) - (7)].v)[2], outDimTags, &extr);
      }
      else{
        r = GModel::current()->getGEOInternals()->extrude
          (inDimTags, (yyvsp[(2) - (7)].v)[0], (yyvsp[(2) - (7)].v)[1], (yyvsp[(2) - (7)].v)[2], outDimTags, &extr);
      }
      if(!r) yymsg(0, "Could not extrude shapes");
      (yyval.l) = (yyvsp[(4) - (7)].l);
      List_Reset((yyval.l));
      VectorOfPairs2ListOfShapes(outDimTags, (yyval.l));
    ;}
    break;

  case 283:
#line 3662 "Gmsh.y"
    {
      extr.mesh.ExtrudeMesh = extr.mesh.Recombine = false;
      extr.mesh.QuadToTri = NO_QUADTRI;
      extr.mesh.ScaleLast = false;
    ;}
    break;

  case 284:
#line 3668 "Gmsh.y"
    {
      std::vector<std::pair<int, int> > inDimTags, outDimTags;
      ListOfShapes2VectorOfPairs((yyvsp[(10) - (13)].l), inDimTags);
      bool r = true;
      if(gmsh_yyfactory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        r = GModel::current()->getOCCInternals()->revolve
          (inDimTags, (yyvsp[(5) - (13)].v)[0], (yyvsp[(5) - (13)].v)[1], (yyvsp[(5) - (13)].v)[2], (yyvsp[(3) - (13)].v)[0], (yyvsp[(3) - (13)].v)[1], (yyvsp[(3) - (13)].v)[2], (yyvsp[(7) - (13)].d), outDimTags,
           &extr);
      }
      else{
        r = GModel::current()->getGEOInternals()->revolve
          (inDimTags, (yyvsp[(5) - (13)].v)[0], (yyvsp[(5) - (13)].v)[1], (yyvsp[(5) - (13)].v)[2], (yyvsp[(3) - (13)].v)[0], (yyvsp[(3) - (13)].v)[1], (yyvsp[(3) - (13)].v)[2], (yyvsp[(7) - (13)].d), outDimTags,
           &extr);
      }
      if(!r) yymsg(0, "Could not extrude shapes");
      (yyval.l) = (yyvsp[(10) - (13)].l);
      List_Reset((yyval.l));
      VectorOfPairs2ListOfShapes(outDimTags, (yyval.l));
    ;}
    break;

  case 285:
#line 3688 "Gmsh.y"
    {
      extr.mesh.ExtrudeMesh = extr.mesh.Recombine = false;
      extr.mesh.QuadToTri = NO_QUADTRI;
      extr.mesh.ScaleLast = false;
    ;}
    break;

  case 286:
#line 3694 "Gmsh.y"
    {
      std::vector<std::pair<int, int> > inDimTags, outDimTags;
      ListOfShapes2VectorOfPairs((yyvsp[(12) - (15)].l), inDimTags);
      bool r = true;
      if(gmsh_yyfactory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        yymsg(0, "Twisting extrude not available with OpenCASCADE geometry kernel");
      }
      else{
        r = GModel::current()->getGEOInternals()->twist
          (inDimTags, (yyvsp[(7) - (15)].v)[0], (yyvsp[(7) - (15)].v)[1], (yyvsp[(7) - (15)].v)[2], (yyvsp[(3) - (15)].v)[0], (yyvsp[(3) - (15)].v)[1], (yyvsp[(3) - (15)].v)[2], (yyvsp[(5) - (15)].v)[0], (yyvsp[(5) - (15)].v)[1], (yyvsp[(5) - (15)].v)[2],
           (yyvsp[(9) - (15)].d),  outDimTags, &extr);
      }
      if(!r) yymsg(0, "Could not extrude shapes");
      (yyval.l) = (yyvsp[(12) - (15)].l);
      List_Reset((yyval.l));
      VectorOfPairs2ListOfShapes(outDimTags, (yyval.l));
    ;}
    break;

  case 287:
#line 3712 "Gmsh.y"
    {
      extr.mesh.ExtrudeMesh = extr.mesh.Recombine = false;
      extr.mesh.QuadToTri = NO_QUADTRI;
      extr.mesh.ScaleLast = false;
    ;}
    break;

  case 288:
#line 3718 "Gmsh.y"
    {
      std::vector<std::pair<int, int> > inDimTags, outDimTags;
      ListOfShapes2VectorOfPairs((yyvsp[(3) - (6)].l), inDimTags);
      bool r = true;
      if(gmsh_yyfactory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        yymsg(0, "Boundary layer extrusion not available with OpenCASCADE geometry kernel");
      }
      else{
        r = GModel::current()->getGEOInternals()->boundaryLayer
          (inDimTags, outDimTags, &extr);
      }
      if(!r) yymsg(0, "Could not extrude shapes");
      (yyval.l) = (yyvsp[(3) - (6)].l);
      List_Reset((yyval.l));
      VectorOfPairs2ListOfShapes(outDimTags, (yyval.l));
    ;}
    break;

  case 289:
#line 3735 "Gmsh.y"
    {
      std::vector<std::pair<int, int> > inDimTags, outDimTags;
      ListOfShapes2VectorOfPairs((yyvsp[(3) - (9)].l), inDimTags);
      bool r = true;
      if(gmsh_yyfactory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        r = GModel::current()->getOCCInternals()->addPipe(inDimTags, (int)(yyvsp[(8) - (9)].d), outDimTags);
      }
      else{
        yymsg(0, "Pipe only available with OpenCASCADE geometry kernel");
      }
      if(!r) yymsg(0, "Could not extrude shapes");
      (yyval.l) = (yyvsp[(3) - (9)].l);
      List_Reset((yyval.l));
      VectorOfPairs2ListOfShapes(outDimTags, (yyval.l));
    ;}
    break;

  case 290:
#line 3751 "Gmsh.y"
    {
      (yyval.l) = List_Create(2, 1, sizeof(Shape));
      bool r = true;
      if(gmsh_yyfactory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        std::vector<int> wires; ListOfDouble2Vector((yyvsp[(2) - (2)].l), wires);
        std::vector<std::pair<int, int> > outDimTags;
        r = GModel::current()->getOCCInternals()->addThruSections
          (-1, wires, false, false, outDimTags);
        VectorOfPairs2ListOfShapes(outDimTags, (yyval.l));
      }
      else{
        yymsg(0, "ThruSections only available with OpenCASCADE geometry kernel");
      }
      if(!r) yymsg(0, "Could not add thrusections");
      List_Delete((yyvsp[(2) - (2)].l));
    ;}
    break;

  case 291:
#line 3768 "Gmsh.y"
    {
      (yyval.l) = List_Create(2, 1, sizeof(Shape));
      bool r = true;
      if(gmsh_yyfactory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        std::vector<int> wires; ListOfDouble2Vector((yyvsp[(3) - (3)].l), wires);
        std::vector<std::pair<int, int> > outDimTags;
        r = GModel::current()->getOCCInternals()->addThruSections
          (-1, wires, false, true, outDimTags);
        VectorOfPairs2ListOfShapes(outDimTags, (yyval.l));
      }
      else{
        yymsg(0, "ThruSections only available with OpenCASCADE geometry kernel");
      }
      if(!r) yymsg(0, "Could not add ruled thrusections");
      List_Delete((yyvsp[(3) - (3)].l));
    ;}
    break;

  case 292:
#line 3785 "Gmsh.y"
    {
      (yyval.l) = List_Create(2, 1, sizeof(Shape));
      bool r = true;
      if(gmsh_yyfactory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        double radius = (yyvsp[(9) - (10)].d);
        std::vector<int> regions, edges;
        ListOfDouble2Vector((yyvsp[(3) - (10)].l), regions); ListOfDouble2Vector((yyvsp[(6) - (10)].l), edges);
        std::vector<std::pair<int, int> > outDimTags;
        r = GModel::current()->getOCCInternals()->fillet
          (regions, edges, radius, outDimTags, true);
        VectorOfPairs2ListOfShapes(outDimTags, (yyval.l));
      }
      else{
        yymsg(0, "Fillet only available with OpenCASCADE geometry kernel");
      }
      if(!r) yymsg(0, "Could not fillet shapes");
      List_Delete((yyvsp[(3) - (10)].l));
      List_Delete((yyvsp[(6) - (10)].l));
    ;}
    break;

  case 293:
#line 3808 "Gmsh.y"
    {
    ;}
    break;

  case 294:
#line 3811 "Gmsh.y"
    {
    ;}
    break;

  case 295:
#line 3817 "Gmsh.y"
    {
      int n = (int)fabs((yyvsp[(3) - (5)].d));
      if(n){ // we accept n==0 to easily disable layers
        extr.mesh.ExtrudeMesh = true;
        extr.mesh.NbLayer = 1;
        extr.mesh.NbElmLayer.clear();
        extr.mesh.hLayer.clear();
        extr.mesh.NbElmLayer.push_back((int)fabs((yyvsp[(3) - (5)].d)));
        extr.mesh.hLayer.push_back(1.);
      }
    ;}
    break;

  case 296:
#line 3829 "Gmsh.y"
    {
      extr.mesh.ExtrudeMesh = true;
      extr.mesh.NbLayer = List_Nbr((yyvsp[(3) - (7)].l));
      if(List_Nbr((yyvsp[(3) - (7)].l)) == List_Nbr((yyvsp[(5) - (7)].l))){
	extr.mesh.NbElmLayer.clear();
	extr.mesh.hLayer.clear();
	for(int i = 0; i < List_Nbr((yyvsp[(3) - (7)].l)); i++){
	  double d;
	  List_Read((yyvsp[(3) - (7)].l), i, &d);
	  extr.mesh.NbElmLayer.push_back((d > 0) ? (int)d : 1);
	  List_Read((yyvsp[(5) - (7)].l), i, &d);
	  extr.mesh.hLayer.push_back(d);
	}
      }
      else
	yymsg(0, "Wrong layer definition {%d, %d}", List_Nbr((yyvsp[(3) - (7)].l)), List_Nbr((yyvsp[(5) - (7)].l)));
      List_Delete((yyvsp[(3) - (7)].l));
      List_Delete((yyvsp[(5) - (7)].l));
    ;}
    break;

  case 297:
#line 3849 "Gmsh.y"
    {
      extr.mesh.ScaleLast = true;
    ;}
    break;

  case 298:
#line 3853 "Gmsh.y"
    {
      extr.mesh.Recombine = true;
    ;}
    break;

  case 299:
#line 3857 "Gmsh.y"
    {
      extr.mesh.Recombine = (yyvsp[(2) - (3)].d) ? true : false;
    ;}
    break;

  case 300:
#line 3861 "Gmsh.y"
    {
      extr.mesh.QuadToTri = QUADTRI_ADDVERTS_1;
    ;}
    break;

  case 301:
#line 3865 "Gmsh.y"
    {
      extr.mesh.QuadToTri = QUADTRI_ADDVERTS_1_RECOMB;
    ;}
    break;

  case 302:
#line 3869 "Gmsh.y"
    {
      extr.mesh.QuadToTri = QUADTRI_NOVERTS_1;
    ;}
    break;

  case 303:
#line 3873 "Gmsh.y"
    {
      extr.mesh.QuadToTri = QUADTRI_NOVERTS_1_RECOMB;
    ;}
    break;

  case 304:
#line 3877 "Gmsh.y"
    {
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(6) - (9)].l), tags);
      int num = (int)(yyvsp[(3) - (9)].d);
      GModel::current()->getGEOInternals()->addDiscreteSurface(num);
      extr.mesh.Holes[num].first = (yyvsp[(8) - (9)].d);
      extr.mesh.Holes[num].second = tags;
      List_Delete((yyvsp[(6) - (9)].l));
    ;}
    break;

  case 305:
#line 3886 "Gmsh.y"
    {
      if(!strcmp((yyvsp[(2) - (6)].c), "Index"))
        extr.mesh.BoundaryLayerIndex = (yyvsp[(4) - (6)].d);
      else if(!strcmp((yyvsp[(2) - (6)].c), "View"))
        extr.mesh.ViewIndex = (yyvsp[(4) - (6)].d);
      Free((yyvsp[(2) - (6)].c));
    ;}
    break;

  case 306:
#line 3898 "Gmsh.y"
    { (yyval.i) = OCC_Internals::Union; ;}
    break;

  case 307:
#line 3899 "Gmsh.y"
    { (yyval.i) = OCC_Internals::Intersection; ;}
    break;

  case 308:
#line 3900 "Gmsh.y"
    { (yyval.i) = OCC_Internals::Difference; ;}
    break;

  case 309:
#line 3901 "Gmsh.y"
    { (yyval.i) = OCC_Internals::Section; ;}
    break;

  case 310:
#line 3902 "Gmsh.y"
    { (yyval.i) = OCC_Internals::Fragments; ;}
    break;

  case 311:
#line 3906 "Gmsh.y"
    { (yyval.i) = 0; ;}
    break;

  case 312:
#line 3907 "Gmsh.y"
    { (yyval.i) = 1; ;}
    break;

  case 313:
#line 3908 "Gmsh.y"
    { (yyval.i) = 2; ;}
    break;

  case 314:
#line 3909 "Gmsh.y"
    { (yyval.i) = (yyvsp[(2) - (3)].d) ? 1 : 0; ;}
    break;

  case 315:
#line 3910 "Gmsh.y"
    { (yyval.i) = (yyvsp[(3) - (4)].d) ? 2 : 0; ;}
    break;

  case 316:
#line 3915 "Gmsh.y"
    {
      (yyval.l) = List_Create(2, 1, sizeof(Shape));
      bool r = true;
      if(gmsh_yyfactory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        std::vector<std::pair<int, int > > object, tool, out;
        ListOfShapes2VectorOfPairs((yyvsp[(3) - (9)].l), object);
        ListOfShapes2VectorOfPairs((yyvsp[(7) - (9)].l), tool);
        // currently we don't distinguish between Delete and Recursive Delete:
        // we always delete recursively. Let us know if you have examples where
        // having the choice would be interesting
        r = GModel::current()->getOCCInternals()->applyBooleanOperator
          (-1, (OCC_Internals::BooleanOperator)(yyvsp[(1) - (9)].i), object, tool, out, (yyvsp[(4) - (9)].i), (yyvsp[(8) - (9)].i));
        VectorOfPairs2ListOfShapes(out, (yyval.l));
      }
      else{
        yymsg(0, "Boolean operators only available with OpenCASCADE geometry kernel");
      }
      if(!r) yymsg(0, "Could not apply boolean operator");
      List_Delete((yyvsp[(3) - (9)].l));
      List_Delete((yyvsp[(7) - (9)].l));
    ;}
    break;

  case 317:
#line 3937 "Gmsh.y"
    {
      (yyval.l) = List_Create(2, 1, sizeof(Shape));
      bool r = true;
      if(gmsh_yyfactory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        std::vector<std::pair<int, int> > out;
        std::string tmp = FixRelativePath(gmsh_yyname, (yyvsp[(3) - (4)].c));
        GModel::current()->getOCCInternals()->importShapes(tmp, true, out);
        VectorOfPairs2ListOfShapes(out, (yyval.l));
      }
      else{
        yymsg(0, "ShapeFromFile only available with OpenCASCADE geometry kernel");
      }
      if(!r) yymsg(0, "Could import shape");
      Free((yyvsp[(3) - (4)].c));
    ;}
    break;

  case 318:
#line 3957 "Gmsh.y"
    {
      bool r = true;
      if(gmsh_yyfactory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        std::vector<std::pair<int, int> > object, tool, out;
        ListOfShapes2VectorOfPairs((yyvsp[(7) - (14)].l), object);
        ListOfShapes2VectorOfPairs((yyvsp[(11) - (14)].l), tool);
        // currently we don't distinguish between Delete and Recursive Delete:
        // we always delete recursively. Let us know if you have examples where
        // having the choice would be interesting
        r = GModel::current()->getOCCInternals()->applyBooleanOperator
          ((int)(yyvsp[(3) - (14)].d), (OCC_Internals::BooleanOperator)(yyvsp[(1) - (14)].i), object, tool, out, (yyvsp[(8) - (14)].i), (yyvsp[(12) - (14)].i));
      }
      if(!r) yymsg(0, "Could not apply boolean operator");
      List_Delete((yyvsp[(7) - (14)].l));
      List_Delete((yyvsp[(11) - (14)].l));
    ;}
    break;

  case 319:
#line 3977 "Gmsh.y"
    {
      (yyval.v)[0] = (yyval.v)[1] = 1.;
    ;}
    break;

  case 320:
#line 3981 "Gmsh.y"
    {
      if(!strcmp((yyvsp[(2) - (3)].c), "Progression") || !strcmp((yyvsp[(2) - (3)].c), "Power"))
        (yyval.v)[0] = 1.;
      else if(!strcmp((yyvsp[(2) - (3)].c), "Bump"))
        (yyval.v)[0] = 2.;
      else{
        yymsg(0, "Unknown transfinite mesh type");
        (yyval.v)[0] = 1.;
      }
      (yyval.v)[1] = (yyvsp[(3) - (3)].d);
      Free((yyvsp[(2) - (3)].c));
    ;}
    break;

  case 321:
#line 3996 "Gmsh.y"
    {
      (yyval.i) = -1; // left
    ;}
    break;

  case 322:
#line 4000 "Gmsh.y"
    {
      if(!strcmp((yyvsp[(1) - (1)].c), "Right"))
        (yyval.i) = 1;
      else if(!strcmp((yyvsp[(1) - (1)].c), "Left"))
	(yyval.i) = -1;
      else if(!strcmp((yyvsp[(1) - (1)].c), "AlternateRight"))
	(yyval.i) = 2;
      else if(!strcmp((yyvsp[(1) - (1)].c), "AlternateLeft"))
	(yyval.i) = -2;
      else // "Alternate" -> "Alternate Right"
	(yyval.i) = 2;
      Free((yyvsp[(1) - (1)].c));
    ;}
    break;

  case 323:
#line 4016 "Gmsh.y"
    {
     (yyval.l) = List_Create(1, 1, sizeof(double));
   ;}
    break;

  case 324:
#line 4020 "Gmsh.y"
    {
     (yyval.l) = (yyvsp[(2) - (2)].l);
   ;}
    break;

  case 325:
#line 4025 "Gmsh.y"
    {
      (yyval.i) = 45;
    ;}
    break;

  case 326:
#line 4029 "Gmsh.y"
    {
      (yyval.i) = (int)(yyvsp[(2) - (2)].d);
    ;}
    break;

  case 327:
#line 4035 "Gmsh.y"
    {
      (yyval.l) = List_Create(1, 1, sizeof(double));
    ;}
    break;

  case 328:
#line 4039 "Gmsh.y"
    {
      (yyval.l) = (yyvsp[(2) - (2)].l);
    ;}
    break;

  case 329:
#line 4046 "Gmsh.y"
    {
      // mesh sizes at vertices are stored in internal CAD data, as they can be
      // specified during vertex creation and copied around during CAD
      // operations
      for(int i = 0; i < List_Nbr((yyvsp[(3) - (6)].l)); i++){
	double d;
	List_Read((yyvsp[(3) - (6)].l), i, &d);
        int tag = (int)d;
        if(GModel::current()->getOCCInternals())
          GModel::current()->getOCCInternals()->setMeshSize(0, tag, (yyvsp[(5) - (6)].d));
        GModel::current()->getGEOInternals()->setMeshSize(0, tag, (yyvsp[(5) - (6)].d));
        GVertex *gv = GModel::current()->getVertexByTag(tag);
        if(gv) gv->setPrescribedMeshSizeAtVertex((yyvsp[(5) - (6)].d));
      }
      List_Delete((yyvsp[(3) - (6)].l));
    ;}
    break;

  case 330:
#line 4063 "Gmsh.y"
    {
      // transfinite constraints are stored in GEO internals in addition to
      // GModel, as they can be copied around during GEO operations
      if(GModel::current()->getOCCInternals() &&
         GModel::current()->getOCCInternals()->getChanged())
        GModel::current()->getOCCInternals()->synchronize(GModel::current());
      int type = (int)(yyvsp[(6) - (7)].v)[0];
      double coef = fabs((yyvsp[(6) - (7)].v)[1]);
      int npoints = ((int)(yyvsp[(5) - (7)].d) < 2) ? 2 : (int)(yyvsp[(5) - (7)].d);
      if(!(yyvsp[(3) - (7)].l)){
        GModel::current()->getGEOInternals()->setTransfiniteLine
          (0, npoints, type, coef);
        for(GModel::eiter it = GModel::current()->firstEdge();
            it != GModel::current()->lastEdge(); it++){
          (*it)->meshAttributes.method = MESH_TRANSFINITE;
          (*it)->meshAttributes.nbPointsTransfinite = npoints;
          (*it)->meshAttributes.typeTransfinite = type;
          (*it)->meshAttributes.coeffTransfinite = coef;
        }
      }
      else{
        for(int i = 0; i < List_Nbr((yyvsp[(3) - (7)].l)); i++){
          double d;
          List_Read((yyvsp[(3) - (7)].l), i, &d);
          int j = (int)fabs(d);
          for(int sig = -1; sig <= 1; sig += 2){
            GModel::current()->getGEOInternals()->setTransfiniteLine
              (sig * j, npoints, type * gmsh_sign(d), coef);
            GEdge *ge = GModel::current()->getEdgeByTag(sig * j);
            if(ge){
              ge->meshAttributes.method = MESH_TRANSFINITE;
              ge->meshAttributes.nbPointsTransfinite = npoints;
              ge->meshAttributes.typeTransfinite = type * gmsh_sign(d);
              ge->meshAttributes.coeffTransfinite = coef;
            }
          }
        }
        List_Delete((yyvsp[(3) - (7)].l));
      }
    ;}
    break;

  case 331:
#line 4104 "Gmsh.y"
    {
      // transfinite constraints are stored in GEO internals in addition to
      // GModel, as they can be copied around during GEO operations
      if(GModel::current()->getOCCInternals() &&
         GModel::current()->getOCCInternals()->getChanged())
        GModel::current()->getOCCInternals()->synchronize(GModel::current());
      std::vector<int> corners; ListOfDouble2Vector((yyvsp[(4) - (6)].l), corners);
      if(!(yyvsp[(3) - (6)].l)){
        GModel::current()->getGEOInternals()->setTransfiniteSurface(0, (yyvsp[(5) - (6)].i), corners);
        for(GModel::fiter it = GModel::current()->firstFace();
            it != GModel::current()->lastFace(); it++){
          (*it)->meshAttributes.method = MESH_TRANSFINITE;
          (*it)->meshAttributes.transfiniteArrangement = (yyvsp[(5) - (6)].i);
        }
      }
      else{
        for(int i = 0; i < List_Nbr((yyvsp[(3) - (6)].l)); i++){
          double d;
          List_Read((yyvsp[(3) - (6)].l), i, &d);
          int tag = (int)d;
          GModel::current()->getGEOInternals()->setTransfiniteSurface(tag, (yyvsp[(5) - (6)].i), corners);
          GFace *gf = GModel::current()->getFaceByTag(tag);
          if(gf){
            gf->meshAttributes.method = MESH_TRANSFINITE;
            gf->meshAttributes.transfiniteArrangement = (yyvsp[(5) - (6)].i);
            if(corners.empty() || corners.size() == 3 || corners.size() == 4){
              for(unsigned int j = 0; j < corners.size(); j++){
                GVertex *gv = GModel::current()->getVertexByTag(corners[j]);
                if(gv)
                  gf->meshAttributes.corners.push_back(gv);
                else
                  yymsg(0, "Unknown model vertex with tag %d", corners[j]);
              }
            }
            else{
              yymsg(0, "Transfinite surface requires 3 or 4 corners vertices");
            }
          }
        }
        List_Delete((yyvsp[(3) - (6)].l));
      }
      List_Delete((yyvsp[(4) - (6)].l));
    ;}
    break;

  case 332:
#line 4148 "Gmsh.y"
    {
      // transfinite constraints are stored in GEO internals in addition to
      // GModel, as they can be copied around during GEO operations
      if(GModel::current()->getOCCInternals() &&
         GModel::current()->getOCCInternals()->getChanged())
        GModel::current()->getOCCInternals()->synchronize(GModel::current());
      std::vector<int> corners; ListOfDouble2Vector((yyvsp[(4) - (5)].l), corners);
      if(!(yyvsp[(3) - (5)].l)){
        GModel::current()->getGEOInternals()->setTransfiniteVolume(0, corners);
        for(GModel::riter it = GModel::current()->firstRegion();
            it != GModel::current()->lastRegion(); it++){
          (*it)->meshAttributes.method = MESH_TRANSFINITE;
        }
      }
      else{
        for(int i = 0; i < List_Nbr((yyvsp[(3) - (5)].l)); i++){
          double d;
          List_Read((yyvsp[(3) - (5)].l), i, &d);
          int tag = (int)d;
          GModel::current()->getGEOInternals()->setTransfiniteVolume(tag, corners);
          GRegion *gr = GModel::current()->getRegionByTag(tag);
          if(gr){
            gr->meshAttributes.method = MESH_TRANSFINITE;
            if(corners.empty() || corners.size() == 6 || corners.size() == 8){
              for(unsigned int i = 0; i < corners.size(); i++){
                GVertex *gv = GModel::current()->getVertexByTag(corners[i]);
                if(gv)
                  gr->meshAttributes.corners.push_back(gv);
                else
                  yymsg(0, "Unknown model vertex with tag %d", corners[i]);
              }
            }
          }
        }
        List_Delete((yyvsp[(3) - (5)].l));
      }
      List_Delete((yyvsp[(4) - (5)].l));
    ;}
    break;

  case 333:
#line 4187 "Gmsh.y"
    {
      // transfinite constraints are stored in GEO internals in addition to
      // GModel, as they can be copied around during GEO operations
      if(GModel::current()->getOCCInternals() &&
         GModel::current()->getOCCInternals()->getChanged())
        GModel::current()->getOCCInternals()->synchronize(GModel::current());
      if(!(yyvsp[(2) - (3)].l)){
        GModel::current()->getGEOInternals()->setTransfiniteVolumeQuadTri(0);
        for(GModel::riter it = GModel::current()->firstRegion();
            it != GModel::current()->lastRegion(); it++)
          (*it)->meshAttributes.QuadTri = TRANSFINITE_QUADTRI_1;
      }
      else{
        for(int i = 0; i < List_Nbr((yyvsp[(2) - (3)].l)); i++){
          double d;
          List_Read((yyvsp[(2) - (3)].l), i, &d);
          int tag = (int)d;
          GModel::current()->getGEOInternals()->setTransfiniteVolumeQuadTri(tag);
          GRegion *gr = GModel::current()->getRegionByTag(tag);
          if(gr) gr->meshAttributes.QuadTri = TRANSFINITE_QUADTRI_1;
        }
        List_Delete((yyvsp[(2) - (3)].l));
      }
    ;}
    break;

  case 334:
#line 4212 "Gmsh.y"
    {
      for(int i = 0; i < List_Nbr((yyvsp[(4) - (8)].l)); i++){
	double d;
	List_Read((yyvsp[(4) - (8)].l), i, &d);
	CTX::instance()->mesh.algo2d_per_face[(int)d] = (int)(yyvsp[(7) - (8)].d);
      }
      List_Delete((yyvsp[(4) - (8)].l));
    ;}
    break;

  case 335:
#line 4221 "Gmsh.y"
    {
      // recombine constraints are stored in GEO internals in addition to
      // GModel, as they can be copied around during GEO operations
      if(GModel::current()->getOCCInternals() &&
         GModel::current()->getOCCInternals()->getChanged())
        GModel::current()->getOCCInternals()->synchronize(GModel::current());
      if(!(yyvsp[(3) - (5)].l)){
        GModel::current()->getGEOInternals()->setRecombine(2, 0, (yyvsp[(4) - (5)].i));
        for(GModel::fiter it = GModel::current()->firstFace();
            it != GModel::current()->lastFace(); it++){
          (*it)->meshAttributes.recombine = 1;
          (*it)->meshAttributes.recombineAngle = (yyvsp[(4) - (5)].i);
        }
      }
      else{
        for(int i = 0; i < List_Nbr((yyvsp[(3) - (5)].l)); i++){
          double d;
          List_Read((yyvsp[(3) - (5)].l), i, &d);
          int tag = (int)d;
          GModel::current()->getGEOInternals()->setRecombine(2, tag, (yyvsp[(4) - (5)].i));
          GFace *gf = GModel::current()->getFaceByTag(tag);
          if(gf){
            gf->meshAttributes.recombine = 1;
            gf->meshAttributes.recombineAngle = (yyvsp[(4) - (5)].i);
          }
        }
        List_Delete((yyvsp[(3) - (5)].l));
      }
    ;}
    break;

  case 336:
#line 4251 "Gmsh.y"
    {
      // recombine constraints are stored in GEO internals in addition to
      // GModel, as they can be copied around during GEO operations
      if(GModel::current()->getOCCInternals() &&
         GModel::current()->getOCCInternals()->getChanged())
        GModel::current()->getOCCInternals()->synchronize(GModel::current());
      if(!(yyvsp[(3) - (4)].l)){
        GModel::current()->getGEOInternals()->setRecombine(3, 0, 0.);
        for(GModel::riter it = GModel::current()->firstRegion();
            it != GModel::current()->lastRegion(); it++){
          (*it)->meshAttributes.recombine3D = 1;
        }
      }
      else{
        for(int i = 0; i < List_Nbr((yyvsp[(3) - (4)].l)); i++){
          double d;
          List_Read((yyvsp[(3) - (4)].l), i, &d);
          int tag = (int)d;
          GModel::current()->getGEOInternals()->setRecombine(3, tag, 0.);
          GRegion *gr = GModel::current()->getRegionByTag(tag);
          if(gr) gr->meshAttributes.recombine3D = 1;
        }
        List_Delete((yyvsp[(3) - (4)].l));
      }
    ;}
    break;

  case 337:
#line 4277 "Gmsh.y"
    {
      // smoothing constraints are stored in GEO internals in addition to
      // GModel, as they can be copied around during GEO operations
      if(GModel::current()->getOCCInternals() &&
         GModel::current()->getOCCInternals()->getChanged())
        GModel::current()->getOCCInternals()->synchronize(GModel::current());
      if(!(yyvsp[(3) - (6)].l)){
        GModel::current()->getGEOInternals()->setSmoothing(0, (int)(yyvsp[(5) - (6)].d));
        for(GModel::fiter it = GModel::current()->firstFace();
            it != GModel::current()->lastFace(); it++){
          (*it)->meshAttributes.transfiniteSmoothing = (int)(yyvsp[(5) - (6)].d);
        }
      }
      else{
        for(int i = 0; i < List_Nbr((yyvsp[(3) - (6)].l)); i++){
          double d;
          List_Read((yyvsp[(3) - (6)].l), i, &d);
          int tag = (int)d;
          GModel::current()->getGEOInternals()->setSmoothing(tag, (int)(yyvsp[(5) - (6)].d));
          GFace *gf = GModel::current()->getFaceByTag(tag);
          if(gf) gf->meshAttributes.transfiniteSmoothing = (int)(yyvsp[(5) - (6)].d);
        }
        List_Delete((yyvsp[(3) - (6)].l));
      }
    ;}
    break;

  case 338:
#line 4304 "Gmsh.y"
    {
      if (List_Nbr((yyvsp[(4) - (11)].l)) != List_Nbr((yyvsp[(8) - (11)].l))){
        yymsg(0, "Number of master lines (%d) different from number of "
              "slaves (%d) ", List_Nbr((yyvsp[(8) - (11)].l)), List_Nbr((yyvsp[(4) - (11)].l)));
      }
      else{
        std::vector<double> transfo;
        if(List_Nbr((yyvsp[(10) - (11)].l)) != 0) {
          if (List_Nbr((yyvsp[(10) - (11)].l)) < 12){
            yymsg(0, "Affine transformation requires at least 12 entries (we have %d)",
                  List_Nbr((yyvsp[(10) - (11)].l)));
          }
          else {
            transfo.resize(List_Nbr((yyvsp[(10) - (11)].l)));
            for(int i = 0; i < List_Nbr((yyvsp[(10) - (11)].l)); i++)
              List_Read((yyvsp[(10) - (11)].l), i, &transfo[i]);
          }
        }
        for(int i = 0; i < List_Nbr((yyvsp[(4) - (11)].l)); i++){
          double d_master, d_slave;
          List_Read((yyvsp[(8) - (11)].l), i, &d_master);
          List_Read((yyvsp[(4) - (11)].l), i, &d_slave);
          int j_master = (int)d_master;
          int j_slave  = (int)d_slave;
          addPeriodicEdge(j_slave, j_master, transfo);
        }
      }
      List_Delete((yyvsp[(4) - (11)].l));
      List_Delete((yyvsp[(8) - (11)].l));
    ;}
    break;

  case 339:
#line 4336 "Gmsh.y"
    {
      if (List_Nbr((yyvsp[(4) - (11)].l)) != List_Nbr((yyvsp[(8) - (11)].l))){
        yymsg(0, "Number of master faces (%d) different from number of "
              "slaves (%d) ", List_Nbr((yyvsp[(8) - (11)].l)), List_Nbr((yyvsp[(4) - (11)].l)));
      }
      else{
        if (List_Nbr((yyvsp[(10) - (11)].l)) < 12){
          // FIXME full automatic case here if List_Nbr($10) == 0)
          yymsg(0, "Affine transformation requires at least 12 entries");
        }
        else {
          std::vector<double> transfo(16,0);
          for(int i = 0; i < List_Nbr((yyvsp[(10) - (11)].l)); i++)
            List_Read((yyvsp[(10) - (11)].l), i, &transfo[i]);
          for(int i = 0; i < List_Nbr((yyvsp[(4) - (11)].l)); i++){
            double d_master, d_slave;
            List_Read((yyvsp[(8) - (11)].l), i, &d_master);
            List_Read((yyvsp[(4) - (11)].l), i, &d_slave);
            addPeriodicFace(d_slave, d_master, transfo);
          }
        }
      }
      List_Delete((yyvsp[(4) - (11)].l));
      List_Delete((yyvsp[(8) - (11)].l));
    ;}
    break;

  case 340:
#line 4363 "Gmsh.y"
    {
      if (List_Nbr((yyvsp[(4) - (18)].l)) != List_Nbr((yyvsp[(8) - (18)].l))){
        yymsg(0, "Number of master edges (%d) different from number of "
              "slaves (%d) ", List_Nbr((yyvsp[(8) - (18)].l)), List_Nbr((yyvsp[(4) - (18)].l)));
      }
      else{
        SPoint3 axis((yyvsp[(12) - (18)].v)[0],(yyvsp[(12) - (18)].v)[1],(yyvsp[(12) - (18)].v)[2]);
        SPoint3 origin((yyvsp[(14) - (18)].v)[0],(yyvsp[(14) - (18)].v)[1],(yyvsp[(14) - (18)].v)[2]);
        double  angle((yyvsp[(16) - (18)].d));
        SPoint3 translation(0,0,0);

        std::vector<double> transfo;
        computeAffineTransformation(origin,axis,angle,translation,transfo);

        for(int i = 0; i < List_Nbr((yyvsp[(4) - (18)].l)); i++){
          double d_master, d_slave;
          List_Read((yyvsp[(8) - (18)].l), i, &d_master);
          List_Read((yyvsp[(4) - (18)].l), i, &d_slave);
          addPeriodicEdge(d_slave,d_master,transfo);
        }
      }
      List_Delete((yyvsp[(4) - (18)].l));
      List_Delete((yyvsp[(8) - (18)].l));
    ;}
    break;

  case 341:
#line 4389 "Gmsh.y"
    {
      if (List_Nbr((yyvsp[(4) - (18)].l)) != List_Nbr((yyvsp[(8) - (18)].l))){
        yymsg(0, "Number of master faces (%d) different from number of "
              "slaves (%d) ", List_Nbr((yyvsp[(8) - (18)].l)), List_Nbr((yyvsp[(4) - (18)].l)));
      }
      else{
        SPoint3 origin((yyvsp[(14) - (18)].v)[0],(yyvsp[(14) - (18)].v)[1],(yyvsp[(14) - (18)].v)[2]);
        SPoint3 axis((yyvsp[(12) - (18)].v)[0],(yyvsp[(12) - (18)].v)[1],(yyvsp[(12) - (18)].v)[2]);
        double  angle((yyvsp[(16) - (18)].d));
        SPoint3 translation(0,0,0);

        std::vector<double> transfo;
        computeAffineTransformation(origin,axis,angle,translation,transfo);

        for(int i = 0; i < List_Nbr((yyvsp[(4) - (18)].l)); i++){
          double d_master, d_slave;
          List_Read((yyvsp[(8) - (18)].l), i, &d_master);
          List_Read((yyvsp[(4) - (18)].l), i, &d_slave);
          addPeriodicFace(d_slave, d_master, transfo);
        }
      }
      List_Delete((yyvsp[(4) - (18)].l));
      List_Delete((yyvsp[(8) - (18)].l));
    ;}
    break;

  case 342:
#line 4415 "Gmsh.y"
    {
      if (List_Nbr((yyvsp[(4) - (12)].l)) != List_Nbr((yyvsp[(8) - (12)].l))){
        yymsg(0, "Number of master edges (%d) different from number of "
              "slaves (%d) ", List_Nbr((yyvsp[(8) - (12)].l)), List_Nbr((yyvsp[(4) - (12)].l)));
      }
      else{
        SPoint3 origin(0,0,0);
        SPoint3 axis(0,0,0);
        double  angle(0);
        SPoint3 translation((yyvsp[(11) - (12)].v)[0],(yyvsp[(11) - (12)].v)[1],(yyvsp[(11) - (12)].v)[2]);

        std::vector<double> transfo;
        computeAffineTransformation(origin,axis,angle,translation,transfo);

        for(int i = 0; i < List_Nbr((yyvsp[(4) - (12)].l)); i++){
          double d_master, d_slave;
          List_Read((yyvsp[(8) - (12)].l), i, &d_master);
          List_Read((yyvsp[(4) - (12)].l), i, &d_slave);
          addPeriodicEdge(d_slave,d_master,transfo);
        }
      }
      List_Delete((yyvsp[(4) - (12)].l));
      List_Delete((yyvsp[(8) - (12)].l));
    ;}
    break;

  case 343:
#line 4441 "Gmsh.y"
    {
      if (List_Nbr((yyvsp[(4) - (12)].l)) != List_Nbr((yyvsp[(8) - (12)].l))){
        yymsg(0, "Number of master faces (%d) different from number of "
              "slaves (%d) ", List_Nbr((yyvsp[(8) - (12)].l)), List_Nbr((yyvsp[(4) - (12)].l)));
      }
      else{
        SPoint3 origin(0,0,0);
        SPoint3 axis(0,0,0);
        double  angle(0);
        SPoint3 translation((yyvsp[(11) - (12)].v)[0],(yyvsp[(11) - (12)].v)[1],(yyvsp[(11) - (12)].v)[2]);

        std::vector<double> transfo;
        computeAffineTransformation(origin,axis,angle,translation,transfo);

        for(int i = 0; i < List_Nbr((yyvsp[(4) - (12)].l)); i++){
          double d_master, d_slave;
          List_Read((yyvsp[(8) - (12)].l), i, &d_master);
          List_Read((yyvsp[(4) - (12)].l), i, &d_slave);
          addPeriodicFace(d_slave, d_master, transfo);
        }
      }
      List_Delete((yyvsp[(4) - (12)].l));
      List_Delete((yyvsp[(8) - (12)].l));
    ;}
    break;

  case 344:
#line 4467 "Gmsh.y"
    {
      if (List_Nbr((yyvsp[(5) - (12)].l)) != List_Nbr((yyvsp[(10) - (12)].l))){
        yymsg(0, "Number of master surface edges (%d) different from number of "
              "slave (%d) edges", List_Nbr((yyvsp[(10) - (12)].l)), List_Nbr((yyvsp[(5) - (12)].l)));
      }
      else{
        int j_master = (int)(yyvsp[(8) - (12)].d);
        int j_slave = (int)(yyvsp[(3) - (12)].d);
        std::map<int,int> edgeCounterParts;
        for (int i = 0; i < List_Nbr((yyvsp[(5) - (12)].l)); i++){
          double ds,dm;
          List_Read((yyvsp[(5) - (12)].l),i,&ds);
          List_Read((yyvsp[(10) - (12)].l),i,&dm);
          edgeCounterParts[(int) ds] = (int) dm;
        }
        addPeriodicFace(j_slave, j_master, edgeCounterParts);
      }
      List_Delete((yyvsp[(5) - (12)].l));
      List_Delete((yyvsp[(10) - (12)].l));
    ;}
    break;

  case 345:
#line 4488 "Gmsh.y"
    {
      if (((yyvsp[(6) - (10)].i)==2 || (yyvsp[(6) - (10)].i)==3) && (yyvsp[(1) - (10)].i)<(yyvsp[(6) - (10)].i) ) {
        std::vector<int> tags; ListOfDouble2Vector((yyvsp[(3) - (10)].l), tags);
        addEmbedded((yyvsp[(1) - (10)].i), tags, (yyvsp[(6) - (10)].i), (int)(yyvsp[(8) - (10)].d));
      }
      else {
        yymsg(0, "GeoEntity of dim %d In GeoEntity of dim %d not allowed", (yyvsp[(1) - (10)].i), (yyvsp[(6) - (10)].i));
      }
      List_Delete((yyvsp[(3) - (10)].l));
    ;}
    break;

  case 346:
#line 4499 "Gmsh.y"
    {
      // reverse mesh constraints are stored in GEO internals in addition to
      // GModel, as they can be copied around during GEO operations
      if(GModel::current()->getOCCInternals() &&
         GModel::current()->getOCCInternals()->getChanged())
        GModel::current()->getOCCInternals()->synchronize(GModel::current());
      if(!(yyvsp[(3) - (4)].l)){
        GModel::current()->getGEOInternals()->setReverseMesh((yyvsp[(2) - (4)].i), 0);
        switch ((yyvsp[(2) - (4)].i)) {
        case 1:
          for(GModel::eiter it = GModel::current()->firstEdge();
              it != GModel::current()->lastEdge(); it++){
            (*it)->meshAttributes.reverseMesh = 1;
          }
          break;
        case 2:
          for(GModel::fiter it = GModel::current()->firstFace();
              it != GModel::current()->lastFace(); it++){
            (*it)->meshAttributes.reverseMesh = 1;
          }
          break;
        }
      }
      else{
        for(int i = 0; i < List_Nbr((yyvsp[(3) - (4)].l)); i++){
          double d;
          List_Read((yyvsp[(3) - (4)].l), i, &d);
          int num = (int)d;
          GModel::current()->getGEOInternals()->setReverseMesh((yyvsp[(2) - (4)].i), num);
          switch ((yyvsp[(2) - (4)].i)) {
          case 1:
            {
              GEdge *ge = GModel::current()->getEdgeByTag(num);
              if(ge) ge->meshAttributes.reverseMesh = 1;
            }
            break;
          case 2:
            {
              GFace *gf = GModel::current()->getFaceByTag(num);
              if(gf) gf->meshAttributes.reverseMesh = 1;
            }
            break;
          }
        }
        List_Delete((yyvsp[(3) - (4)].l));
      }
    ;}
    break;

  case 347:
#line 4547 "Gmsh.y"
    {
      if(!(yyvsp[(3) - (4)].l)){
        switch ((yyvsp[(2) - (4)].i)) {
        case 0:
          for(GModel::viter it = GModel::current()->firstVertex();
              it != GModel::current()->lastVertex(); it++)
            (*it)->relocateMeshVertices();
          break;
        case 1:
          for(GModel::eiter it = GModel::current()->firstEdge();
              it != GModel::current()->lastEdge(); it++)
            (*it)->relocateMeshVertices();
          break;
        case 2:
          for(GModel::fiter it = GModel::current()->firstFace();
              it != GModel::current()->lastFace(); it++)
            (*it)->relocateMeshVertices();
          break;
        }
      }
      else{
        for(int i = 0; i < List_Nbr((yyvsp[(3) - (4)].l)); i++){
          double d;
          List_Read((yyvsp[(3) - (4)].l), i, &d);
          switch ((yyvsp[(2) - (4)].i)) {
          case 0:
            {
              GVertex *gv = GModel::current()->getVertexByTag((int)d);
              if(gv) gv->relocateMeshVertices();
            }
            break;
          case 1:
            {
              GEdge *ge = GModel::current()->getEdgeByTag((int)d);
              if(ge) ge->relocateMeshVertices();
            }
            break;
          case 2:
            {
              GFace *gf = GModel::current()->getFaceByTag((int)d);
              if(gf) gf->relocateMeshVertices();
            }
            break;
          }
        }
        List_Delete((yyvsp[(3) - (4)].l));
      }
    ;}
    break;

  case 348:
#line 4596 "Gmsh.y"
    {
      for(int i = 0; i < List_Nbr((yyvsp[(3) - (4)].l)); i++){
	double dnum;
	List_Read((yyvsp[(3) - (4)].l), i, &dnum);
	int num = (int)dnum;
        GModel::current()->getGEOInternals()->setDegenerated(1, num);
        GEdge *ge = GModel::current()->getEdgeByTag(num);
        if(ge) ge->setTooSmall(true);
      }
      List_Delete((yyvsp[(3) - (4)].l));
    ;}
    break;

  case 349:
#line 4608 "Gmsh.y"
    {
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(3) - (4)].l), tags);
      GModel::current()->getGEOInternals()->setCompoundMesh((yyvsp[(2) - (4)].i), tags);
      List_Delete((yyvsp[(3) - (4)].l));
    ;}
    break;

  case 350:
#line 4619 "Gmsh.y"
    {
      GModel::current()->getGEOInternals()->removeAllDuplicates();
    ;}
    break;

  case 351:
#line 4623 "Gmsh.y"
    {
      if(!strcmp((yyvsp[(2) - (3)].c), "Geometry"))
        GModel::current()->getGEOInternals()->removeAllDuplicates();
      else if(!strcmp((yyvsp[(2) - (3)].c), "Mesh"))
        GModel::current()->removeDuplicateMeshVertices(CTX::instance()->geom.tolerance);
      else
        yymsg(0, "Unknown coherence command");
      Free((yyvsp[(2) - (3)].c));
    ;}
    break;

  case 352:
#line 4633 "Gmsh.y"
    {
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(4) - (6)].l), tags);
      GModel::current()->getGEOInternals()->mergeVertices(tags);
      List_Delete((yyvsp[(4) - (6)].l));
    ;}
    break;

  case 353:
#line 4643 "Gmsh.y"
    { (yyval.c) = (char*)"Homology"; ;}
    break;

  case 354:
#line 4644 "Gmsh.y"
    { (yyval.c) = (char*)"Cohomology"; ;}
    break;

  case 355:
#line 4645 "Gmsh.y"
    { (yyval.c) = (char*)"Betti"; ;}
    break;

  case 356:
#line 4650 "Gmsh.y"
    {
      std::vector<int> domain, subdomain, dim;
      for(int i = 0; i < 4; i++) dim.push_back(i);
      GModel::current()->addHomologyRequest((yyvsp[(1) - (2)].c), domain, subdomain, dim);
    ;}
    break;

  case 357:
#line 4656 "Gmsh.y"
    {
      std::vector<int> domain, subdomain, dim;
      for(int i = 0; i < List_Nbr((yyvsp[(3) - (5)].l)); i++){
        double d;
        List_Read((yyvsp[(3) - (5)].l), i, &d);
        domain.push_back((int)d);
      }
      for(int i = 0; i < 4; i++) dim.push_back(i);
      GModel::current()->addHomologyRequest((yyvsp[(1) - (5)].c), domain, subdomain, dim);
      List_Delete((yyvsp[(3) - (5)].l));
    ;}
    break;

  case 358:
#line 4668 "Gmsh.y"
    {
      std::vector<int> domain, subdomain, dim;
      for(int i = 0; i < List_Nbr((yyvsp[(3) - (7)].l)); i++){
        double d;
        List_Read((yyvsp[(3) - (7)].l), i, &d);
        domain.push_back((int)d);
      }
      for(int i = 0; i < List_Nbr((yyvsp[(5) - (7)].l)); i++){
        double d;
        List_Read((yyvsp[(5) - (7)].l), i, &d);
        subdomain.push_back((int)d);
      }
      for(int i = 0; i < 4; i++) dim.push_back(i);
      GModel::current()->addHomologyRequest((yyvsp[(1) - (7)].c), domain, subdomain, dim);
      List_Delete((yyvsp[(3) - (7)].l));
      List_Delete((yyvsp[(5) - (7)].l));
    ;}
    break;

  case 359:
#line 4686 "Gmsh.y"
    {
      std::vector<int> domain, subdomain, dim;
      for(int i = 0; i < List_Nbr((yyvsp[(6) - (10)].l)); i++){
        double d;
        List_Read((yyvsp[(6) - (10)].l), i, &d);
        domain.push_back((int)d);
      }
      for(int i = 0; i < List_Nbr((yyvsp[(8) - (10)].l)); i++){
        double d;
        List_Read((yyvsp[(8) - (10)].l), i, &d);
        subdomain.push_back((int)d);
      }
      for(int i = 0; i < List_Nbr((yyvsp[(3) - (10)].l)); i++){
        double d;
        List_Read((yyvsp[(3) - (10)].l), i, &d);
        dim.push_back((int)d);
      }
      GModel::current()->addHomologyRequest((yyvsp[(1) - (10)].c), domain, subdomain, dim);
      List_Delete((yyvsp[(6) - (10)].l));
      List_Delete((yyvsp[(8) - (10)].l));
      List_Delete((yyvsp[(3) - (10)].l));
    ;}
    break;

  case 360:
#line 4713 "Gmsh.y"
    { (yyval.d) = (yyvsp[(1) - (1)].d);           ;}
    break;

  case 361:
#line 4714 "Gmsh.y"
    { (yyval.d) = (yyvsp[(2) - (3)].d);           ;}
    break;

  case 362:
#line 4715 "Gmsh.y"
    { (yyval.d) = -(yyvsp[(2) - (2)].d);          ;}
    break;

  case 363:
#line 4716 "Gmsh.y"
    { (yyval.d) = (yyvsp[(2) - (2)].d);           ;}
    break;

  case 364:
#line 4717 "Gmsh.y"
    { (yyval.d) = !(yyvsp[(2) - (2)].d);          ;}
    break;

  case 365:
#line 4718 "Gmsh.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) - (yyvsp[(3) - (3)].d);      ;}
    break;

  case 366:
#line 4719 "Gmsh.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) + (yyvsp[(3) - (3)].d);      ;}
    break;

  case 367:
#line 4720 "Gmsh.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) * (yyvsp[(3) - (3)].d);      ;}
    break;

  case 368:
#line 4722 "Gmsh.y"
    {
      if(!(yyvsp[(3) - (3)].d))
	yymsg(0, "Division by zero in '%g / %g'", (yyvsp[(1) - (3)].d), (yyvsp[(3) - (3)].d));
      else
	(yyval.d) = (yyvsp[(1) - (3)].d) / (yyvsp[(3) - (3)].d);
    ;}
    break;

  case 369:
#line 4728 "Gmsh.y"
    { (yyval.d) = (int)(yyvsp[(1) - (3)].d) | (int)(yyvsp[(3) - (3)].d); ;}
    break;

  case 370:
#line 4729 "Gmsh.y"
    { (yyval.d) = (int)(yyvsp[(1) - (3)].d) & (int)(yyvsp[(3) - (3)].d); ;}
    break;

  case 371:
#line 4730 "Gmsh.y"
    { (yyval.d) = (int)(yyvsp[(1) - (3)].d) % (int)(yyvsp[(3) - (3)].d); ;}
    break;

  case 372:
#line 4731 "Gmsh.y"
    { (yyval.d) = pow((yyvsp[(1) - (3)].d), (yyvsp[(3) - (3)].d));  ;}
    break;

  case 373:
#line 4732 "Gmsh.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) < (yyvsp[(3) - (3)].d);      ;}
    break;

  case 374:
#line 4733 "Gmsh.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) > (yyvsp[(3) - (3)].d);      ;}
    break;

  case 375:
#line 4734 "Gmsh.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) <= (yyvsp[(3) - (3)].d);     ;}
    break;

  case 376:
#line 4735 "Gmsh.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) >= (yyvsp[(3) - (3)].d);     ;}
    break;

  case 377:
#line 4736 "Gmsh.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) == (yyvsp[(3) - (3)].d);     ;}
    break;

  case 378:
#line 4737 "Gmsh.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) != (yyvsp[(3) - (3)].d);     ;}
    break;

  case 379:
#line 4738 "Gmsh.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) && (yyvsp[(3) - (3)].d);     ;}
    break;

  case 380:
#line 4739 "Gmsh.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) || (yyvsp[(3) - (3)].d);     ;}
    break;

  case 381:
#line 4740 "Gmsh.y"
    { (yyval.d) = ((int)(yyvsp[(1) - (3)].d) >> (int)(yyvsp[(3) - (3)].d)); ;}
    break;

  case 382:
#line 4741 "Gmsh.y"
    { (yyval.d) = ((int)(yyvsp[(1) - (3)].d) << (int)(yyvsp[(3) - (3)].d)); ;}
    break;

  case 383:
#line 4742 "Gmsh.y"
    { (yyval.d) = (yyvsp[(1) - (5)].d) ? (yyvsp[(3) - (5)].d) : (yyvsp[(5) - (5)].d); ;}
    break;

  case 384:
#line 4743 "Gmsh.y"
    { (yyval.d) = exp((yyvsp[(3) - (4)].d));      ;}
    break;

  case 385:
#line 4744 "Gmsh.y"
    { (yyval.d) = log((yyvsp[(3) - (4)].d));      ;}
    break;

  case 386:
#line 4745 "Gmsh.y"
    { (yyval.d) = log10((yyvsp[(3) - (4)].d));    ;}
    break;

  case 387:
#line 4746 "Gmsh.y"
    { (yyval.d) = sqrt((yyvsp[(3) - (4)].d));     ;}
    break;

  case 388:
#line 4747 "Gmsh.y"
    { (yyval.d) = sin((yyvsp[(3) - (4)].d));      ;}
    break;

  case 389:
#line 4748 "Gmsh.y"
    { (yyval.d) = asin((yyvsp[(3) - (4)].d));     ;}
    break;

  case 390:
#line 4749 "Gmsh.y"
    { (yyval.d) = cos((yyvsp[(3) - (4)].d));      ;}
    break;

  case 391:
#line 4750 "Gmsh.y"
    { (yyval.d) = acos((yyvsp[(3) - (4)].d));     ;}
    break;

  case 392:
#line 4751 "Gmsh.y"
    { (yyval.d) = tan((yyvsp[(3) - (4)].d));      ;}
    break;

  case 393:
#line 4752 "Gmsh.y"
    { (yyval.d) = atan((yyvsp[(3) - (4)].d));     ;}
    break;

  case 394:
#line 4753 "Gmsh.y"
    { (yyval.d) = atan2((yyvsp[(3) - (6)].d), (yyvsp[(5) - (6)].d));;}
    break;

  case 395:
#line 4754 "Gmsh.y"
    { (yyval.d) = sinh((yyvsp[(3) - (4)].d));     ;}
    break;

  case 396:
#line 4755 "Gmsh.y"
    { (yyval.d) = cosh((yyvsp[(3) - (4)].d));     ;}
    break;

  case 397:
#line 4756 "Gmsh.y"
    { (yyval.d) = tanh((yyvsp[(3) - (4)].d));     ;}
    break;

  case 398:
#line 4757 "Gmsh.y"
    { (yyval.d) = fabs((yyvsp[(3) - (4)].d));     ;}
    break;

  case 399:
#line 4758 "Gmsh.y"
    { (yyval.d) = std::abs((yyvsp[(3) - (4)].d)); ;}
    break;

  case 400:
#line 4759 "Gmsh.y"
    { (yyval.d) = floor((yyvsp[(3) - (4)].d));    ;}
    break;

  case 401:
#line 4760 "Gmsh.y"
    { (yyval.d) = ceil((yyvsp[(3) - (4)].d));     ;}
    break;

  case 402:
#line 4761 "Gmsh.y"
    { (yyval.d) = floor((yyvsp[(3) - (4)].d) + 0.5); ;}
    break;

  case 403:
#line 4762 "Gmsh.y"
    { (yyval.d) = fmod((yyvsp[(3) - (6)].d), (yyvsp[(5) - (6)].d)); ;}
    break;

  case 404:
#line 4763 "Gmsh.y"
    { (yyval.d) = fmod((yyvsp[(3) - (6)].d), (yyvsp[(5) - (6)].d)); ;}
    break;

  case 405:
#line 4764 "Gmsh.y"
    { (yyval.d) = sqrt((yyvsp[(3) - (6)].d) * (yyvsp[(3) - (6)].d) + (yyvsp[(5) - (6)].d) * (yyvsp[(5) - (6)].d)); ;}
    break;

  case 406:
#line 4765 "Gmsh.y"
    { (yyval.d) = (yyvsp[(3) - (4)].d) * (double)rand() / (double)RAND_MAX; ;}
    break;

  case 407:
#line 4774 "Gmsh.y"
    { (yyval.d) = (yyvsp[(1) - (1)].d); ;}
    break;

  case 408:
#line 4775 "Gmsh.y"
    { (yyval.d) = 3.141592653589793; ;}
    break;

  case 409:
#line 4776 "Gmsh.y"
    { (yyval.d) = (double)ImbricatedTest; ;}
    break;

  case 410:
#line 4777 "Gmsh.y"
    { (yyval.d) = Msg::GetCommRank(); ;}
    break;

  case 411:
#line 4778 "Gmsh.y"
    { (yyval.d) = Msg::GetCommSize(); ;}
    break;

  case 412:
#line 4779 "Gmsh.y"
    { (yyval.d) = GetGmshMajorVersion(); ;}
    break;

  case 413:
#line 4780 "Gmsh.y"
    { (yyval.d) = GetGmshMinorVersion(); ;}
    break;

  case 414:
#line 4781 "Gmsh.y"
    { (yyval.d) = GetGmshPatchVersion(); ;}
    break;

  case 415:
#line 4782 "Gmsh.y"
    { (yyval.d) = Cpu(); ;}
    break;

  case 416:
#line 4783 "Gmsh.y"
    { (yyval.d) = GetMemoryUsage()/1024./1024.; ;}
    break;

  case 417:
#line 4784 "Gmsh.y"
    { (yyval.d) = TotalRam(); ;}
    break;

  case 418:
#line 4789 "Gmsh.y"
    { init_options(); ;}
    break;

  case 419:
#line 4791 "Gmsh.y"
    {
      std::vector<double> val(1, (yyvsp[(3) - (6)].d));
      Msg::ExchangeOnelabParameter("", val, floatOptions, charOptions);
      (yyval.d) = val[0];
    ;}
    break;

  case 420:
#line 4797 "Gmsh.y"
    { (yyval.d) = (yyvsp[(1) - (1)].d); ;}
    break;

  case 421:
#line 4799 "Gmsh.y"
    {
      (yyval.d) = Msg::GetOnelabNumber((yyvsp[(3) - (4)].c));
      Free((yyvsp[(3) - (4)].c));
    ;}
    break;

  case 422:
#line 4804 "Gmsh.y"
    {
      (yyval.d) = Msg::GetOnelabNumber((yyvsp[(3) - (6)].c), (yyvsp[(5) - (6)].d));
      Free((yyvsp[(3) - (6)].c));
    ;}
    break;

  case 423:
#line 4809 "Gmsh.y"
    {
      (yyval.d) = treat_Struct_FullName_Float((yyvsp[(1) - (1)].c2).char1, (yyvsp[(1) - (1)].c2).char2);
    ;}
    break;

  case 424:
#line 4814 "Gmsh.y"
    {
      (yyval.d) = treat_Struct_FullName_Float(NULL, (yyvsp[(1) - (4)].c), 2, (int)(yyvsp[(3) - (4)].d));
    ;}
    break;

  case 425:
#line 4819 "Gmsh.y"
    {
      (yyval.d) = treat_Struct_FullName_Float(NULL, (yyvsp[(1) - (4)].c), 2, (int)(yyvsp[(3) - (4)].d));
    ;}
    break;

  case 426:
#line 4823 "Gmsh.y"
    {
      (yyval.d) = treat_Struct_FullName_Float((yyvsp[(3) - (4)].c2).char1, (yyvsp[(3) - (4)].c2).char2, 1, 0, 0., 1);
    ;}
    break;

  case 427:
#line 4827 "Gmsh.y"
    {
      (yyval.d) = treat_Struct_FullName_dot_tSTRING_Float((yyvsp[(3) - (6)].c2).char1, (yyvsp[(3) - (6)].c2).char2, (yyvsp[(5) - (6)].c), 0, 0., 1);
    ;}
    break;

  case 428:
#line 4831 "Gmsh.y"
    {
      (yyval.d) = treat_Struct_FullName_Float((yyvsp[(3) - (5)].c2).char1, (yyvsp[(3) - (5)].c2).char2, 1, 0, (yyvsp[(4) - (5)].d), 2);
    ;}
    break;

  case 429:
#line 4835 "Gmsh.y"
    {
      (yyval.d) = treat_Struct_FullName_dot_tSTRING_Float((yyvsp[(3) - (7)].c2).char1, (yyvsp[(3) - (7)].c2).char2, (yyvsp[(5) - (7)].c), 0, (yyvsp[(6) - (7)].d), 2);
    ;}
    break;

  case 430:
#line 4839 "Gmsh.y"
    {
      std::string tmp = FixRelativePath(gmsh_yyname, (yyvsp[(3) - (4)].c));
      (yyval.d) = !StatFile(tmp);
      Free((yyvsp[(3) - (4)].c));
    ;}
    break;

  case 431:
#line 4845 "Gmsh.y"
    {
      if(gmsh_yysymbols.count((yyvsp[(2) - (4)].c))){
        gmsh_yysymbol &s(gmsh_yysymbols[(yyvsp[(2) - (4)].c)]);
	(yyval.d) = s.value.size();
      }
      else if(gmsh_yystringsymbols.count((yyvsp[(2) - (4)].c))){
	(yyval.d) = gmsh_yystringsymbols[(yyvsp[(2) - (4)].c)].size();
      }
      else{
        yymsg(0, "Unknown variable '%s'", (yyvsp[(2) - (4)].c));
	(yyval.d) = 0.;
      }
      Free((yyvsp[(2) - (4)].c));
    ;}
    break;

  case 432:
#line 4861 "Gmsh.y"
    {
      (yyval.d) = treat_Struct_FullName_dot_tSTRING_Float_getDim((yyvsp[(2) - (6)].c2).char1, (yyvsp[(2) - (6)].c2).char2, (yyvsp[(4) - (6)].c));
    ;}
    break;

  case 433:
#line 4866 "Gmsh.y"
    {
      std::string struct_namespace((yyvsp[(3) - (4)].c));
      (yyval.d) = (double)gmsh_yynamespaces[struct_namespace].size();
      Free((yyvsp[(3) - (4)].c));
    ;}
    break;

  case 434:
#line 4872 "Gmsh.y"
    {
      std::string struct_namespace(std::string(""));
      (yyval.d) = (double)gmsh_yynamespaces[struct_namespace].size();
    ;}
    break;

  case 435:
#line 4878 "Gmsh.y"
    {
      if(!gmsh_yysymbols.count((yyvsp[(1) - (2)].c))){
	yymsg(0, "Unknown variable '%s'", (yyvsp[(1) - (2)].c));
	(yyval.d) = 0.;
      }
      else{
        gmsh_yysymbol &s(gmsh_yysymbols[(yyvsp[(1) - (2)].c)]);
        if(s.value.empty()){
          yymsg(0, "Uninitialized variable '%s'", (yyvsp[(1) - (2)].c));
          (yyval.d) = 0.;
        }
        else{
          (yyval.d) = s.value[0];
          s.value[0] += (yyvsp[(2) - (2)].i);
        }
      }
      Free((yyvsp[(1) - (2)].c));
    ;}
    break;

  case 436:
#line 4897 "Gmsh.y"
    {
      int index = (int)(yyvsp[(3) - (5)].d);
      if(!gmsh_yysymbols.count((yyvsp[(1) - (5)].c))){
	yymsg(0, "Unknown variable '%s'", (yyvsp[(1) - (5)].c));
	(yyval.d) = 0.;
      }
      else{
        gmsh_yysymbol &s(gmsh_yysymbols[(yyvsp[(1) - (5)].c)]);
        if((int)s.value.size() < index + 1){
          yymsg(0, "Uninitialized variable '%s[%d]'", (yyvsp[(1) - (5)].c), index);
          (yyval.d) = 0.;
        }
        else{
          (yyval.d) = s.value[index];
          s.value[index] += (yyvsp[(5) - (5)].i);
        }
      }
      Free((yyvsp[(1) - (5)].c));
    ;}
    break;

  case 437:
#line 4918 "Gmsh.y"
    {
      int index = (int)(yyvsp[(3) - (5)].d);
      if(!gmsh_yysymbols.count((yyvsp[(1) - (5)].c))){
	yymsg(0, "Unknown variable '%s'", (yyvsp[(1) - (5)].c));
	(yyval.d) = 0.;
      }
      else{
        gmsh_yysymbol &s(gmsh_yysymbols[(yyvsp[(1) - (5)].c)]);
        if((int)s.value.size() < index + 1){
          yymsg(0, "Uninitialized variable '%s[%d]'", (yyvsp[(1) - (5)].c), index);
          (yyval.d) = 0.;
        }
        else{
          (yyval.d) = s.value[index];
          s.value[index] += (yyvsp[(5) - (5)].i);
        }
      }
      Free((yyvsp[(1) - (5)].c));
    ;}
    break;

  case 438:
#line 4951 "Gmsh.y"
    {
      (yyval.d) = treat_Struct_FullName_dot_tSTRING_Float(NULL, (yyvsp[(1) - (3)].c), (yyvsp[(3) - (3)].c));
    ;}
    break;

  case 439:
#line 4955 "Gmsh.y"
    {
      (yyval.d) = treat_Struct_FullName_dot_tSTRING_Float((yyvsp[(1) - (5)].c), (yyvsp[(3) - (5)].c), (yyvsp[(5) - (5)].c));
    ;}
    break;

  case 440:
#line 4960 "Gmsh.y"
    {
      (yyval.d) = treat_Struct_FullName_dot_tSTRING_Float(NULL, (yyvsp[(1) - (6)].c), (yyvsp[(3) - (6)].c), (int)(yyvsp[(5) - (6)].d));
    ;}
    break;

  case 441:
#line 4964 "Gmsh.y"
    {
      (yyval.d) = treat_Struct_FullName_dot_tSTRING_Float((yyvsp[(1) - (8)].c), (yyvsp[(3) - (8)].c), (yyvsp[(5) - (8)].c), (int)(yyvsp[(7) - (8)].d));
    ;}
    break;

  case 442:
#line 4968 "Gmsh.y"
    {
      (yyval.d) = treat_Struct_FullName_dot_tSTRING_Float(NULL, (yyvsp[(1) - (6)].c), (yyvsp[(3) - (6)].c), (int)(yyvsp[(5) - (6)].d));
    ;}
    break;

  case 443:
#line 4972 "Gmsh.y"
    {
      (yyval.d) = treat_Struct_FullName_dot_tSTRING_Float((yyvsp[(1) - (8)].c), (yyvsp[(3) - (8)].c), (yyvsp[(5) - (8)].c), (int)(yyvsp[(7) - (8)].d));
    ;}
    break;

  case 444:
#line 4977 "Gmsh.y"
    {
      NumberOption(GMSH_GET, (yyvsp[(1) - (6)].c), (int)(yyvsp[(3) - (6)].d), (yyvsp[(6) - (6)].c), (yyval.d));
      Free((yyvsp[(1) - (6)].c)); Free((yyvsp[(6) - (6)].c));
    ;}
    break;

  case 445:
#line 4982 "Gmsh.y"
    {
      double d = 0.;
      if(NumberOption(GMSH_GET, (yyvsp[(1) - (4)].c), 0, (yyvsp[(3) - (4)].c), d)){
	d += (yyvsp[(4) - (4)].i);
	NumberOption(GMSH_SET|GMSH_GUI, (yyvsp[(1) - (4)].c), 0, (yyvsp[(3) - (4)].c), d);
	(yyval.d) = d;
      }
      Free((yyvsp[(1) - (4)].c)); Free((yyvsp[(3) - (4)].c));
    ;}
    break;

  case 446:
#line 4992 "Gmsh.y"
    {
      double d = 0.;
      if(NumberOption(GMSH_GET, (yyvsp[(1) - (7)].c), (int)(yyvsp[(3) - (7)].d), (yyvsp[(6) - (7)].c), d)){
	d += (yyvsp[(7) - (7)].i);
	NumberOption(GMSH_SET|GMSH_GUI, (yyvsp[(1) - (7)].c), (int)(yyvsp[(3) - (7)].d), (yyvsp[(6) - (7)].c), d);
	(yyval.d) = d;
      }
      Free((yyvsp[(1) - (7)].c)); Free((yyvsp[(6) - (7)].c));
    ;}
    break;

  case 447:
#line 5002 "Gmsh.y"
    {
      (yyval.d) = Msg::GetValue((yyvsp[(3) - (6)].c), (yyvsp[(5) - (6)].d));
      Free((yyvsp[(3) - (6)].c));
    ;}
    break;

  case 448:
#line 5007 "Gmsh.y"
    {
      int matches = 0;
      for(int i = 0; i < List_Nbr((yyvsp[(3) - (6)].l)); i++){
        double d;
        List_Read((yyvsp[(3) - (6)].l), i, &d);
        matches += List_Search((yyvsp[(5) - (6)].l), &d, fcmp_double);
      }
      (yyval.d) = matches;
      Free((yyvsp[(3) - (6)].l)); Free((yyvsp[(5) - (6)].l));
    ;}
    break;

  case 449:
#line 5018 "Gmsh.y"
    {
      std::string s((yyvsp[(3) - (6)].c)), substr((yyvsp[(5) - (6)].c));
      if(s.find(substr) != std::string::npos)
        (yyval.d) = 1.;
      else
        (yyval.d) = 0.;
      Free((yyvsp[(3) - (6)].c)); Free((yyvsp[(5) - (6)].c));
    ;}
    break;

  case 450:
#line 5027 "Gmsh.y"
    {
      (yyval.d) = strlen((yyvsp[(3) - (4)].c));
      Free((yyvsp[(3) - (4)].c));
    ;}
    break;

  case 451:
#line 5032 "Gmsh.y"
    {
      (yyval.d) = strcmp((yyvsp[(3) - (6)].c), (yyvsp[(5) - (6)].c));
      Free((yyvsp[(3) - (6)].c)); Free((yyvsp[(5) - (6)].c));
    ;}
    break;

  case 452:
#line 5037 "Gmsh.y"
    {
      int align = 0, font = 0, fontsize = CTX::instance()->glFontSize;
      if(List_Nbr((yyvsp[(3) - (4)].l)) % 2){
        yymsg(0, "Number of text attributes should be even");
      }
      else{
        for(int i = 0 ; i < List_Nbr((yyvsp[(3) - (4)].l)); i += 2){
          char *s1, *s2; List_Read((yyvsp[(3) - (4)].l), i, &s1); List_Read((yyvsp[(3) - (4)].l), i + 1, &s2);
          std::string key(s1), val(s2);
          Free(s1); Free(s2);
#if defined(HAVE_OPENGL)
          if(key == "Font")
            font = drawContext::global()->getFontIndex(val.c_str());
          else if(key == "FontSize")
            fontsize = atoi(val.c_str());
          else if(key == "Align")
            align = drawContext::global()->getFontAlign(val.c_str());
#endif
        }
      }
      List_Delete((yyvsp[(3) - (4)].l));
      (yyval.d) = (double)((align<<16)|(font<<8)|(fontsize));
    ;}
    break;

  case 453:
#line 5064 "Gmsh.y"
    { (yyval.d) = 0.; ;}
    break;

  case 454:
#line 5066 "Gmsh.y"
    { (yyval.d) = (yyvsp[(2) - (2)].d);;}
    break;

  case 455:
#line 5071 "Gmsh.y"
    { (yyval.c) = NULL; ;}
    break;

  case 456:
#line 5073 "Gmsh.y"
    { (yyval.c) = (yyvsp[(2) - (2)].c);;}
    break;

  case 457:
#line 5078 "Gmsh.y"
    {
      std::string struct_namespace((yyvsp[(2) - (3)].c2).char1? (yyvsp[(2) - (3)].c2).char1 : std::string("")),
        struct_name((yyvsp[(2) - (3)].c2).char2);
      init_options
        (gmsh_yynamespaces.getMember_ValMax(struct_namespace, struct_name));
    ;}
    break;

  case 458:
#line 5085 "Gmsh.y"
    {
      std::string struct_namespace((yyvsp[(2) - (7)].c2).char1? (yyvsp[(2) - (7)].c2).char1 : std::string("")),
        struct_name((yyvsp[(2) - (7)].c2).char2);
      Free((yyvsp[(2) - (7)].c2).char1); Free((yyvsp[(2) - (7)].c2).char2);
      int tag_out;
      if (gmsh_yynamespaces.defStruct(struct_namespace, struct_name,
                                      floatOptions, charOptions,
                                      tag_out, member_ValMax, (yyvsp[(3) - (7)].i)))
        yymsg(0, "Redefinition of Struct '%s::%s'",
              struct_namespace.c_str(), struct_name.c_str());
      (yyval.d) = (double)tag_out;
    ;}
    break;

  case 459:
#line 5101 "Gmsh.y"
    { (yyval.c2).char1 = NULL; (yyval.c2).char2 = (yyvsp[(1) - (1)].c); ;}
    break;

  case 460:
#line 5103 "Gmsh.y"
    { (yyval.c2).char1 = (yyvsp[(1) - (3)].c); (yyval.c2).char2 = (yyvsp[(3) - (3)].c); ;}
    break;

  case 461:
#line 5108 "Gmsh.y"
    { (yyval.c) = (yyvsp[(1) - (1)].c); flag_tSTRING_alloc = 1; ;}
    break;

  case 462:
#line 5117 "Gmsh.y"
    { (yyval.i) = 99; ;}
    break;

  case 463:
#line 5119 "Gmsh.y"
    { (yyval.i) = (int)(yyvsp[(2) - (2)].d); ;}
    break;

  case 464:
#line 5124 "Gmsh.y"
    { (yyval.i) = 0; ;}
    break;

  case 465:
#line 5126 "Gmsh.y"
    { (yyval.i) = (yyvsp[(2) - (3)].i); ;}
    break;

  case 466:
#line 5131 "Gmsh.y"
    {
      memcpy((yyval.v), (yyvsp[(1) - (1)].v), 5*sizeof(double));
    ;}
    break;

  case 467:
#line 5135 "Gmsh.y"
    {
      for(int i = 0; i < 5; i++) (yyval.v)[i] = -(yyvsp[(2) - (2)].v)[i];
    ;}
    break;

  case 468:
#line 5139 "Gmsh.y"
    {
      for(int i = 0; i < 5; i++) (yyval.v)[i] = (yyvsp[(2) - (2)].v)[i];
    ;}
    break;

  case 469:
#line 5143 "Gmsh.y"
    {
      for(int i = 0; i < 5; i++) (yyval.v)[i] = (yyvsp[(1) - (3)].v)[i] - (yyvsp[(3) - (3)].v)[i];
    ;}
    break;

  case 470:
#line 5147 "Gmsh.y"
    {
      for(int i = 0; i < 5; i++) (yyval.v)[i] = (yyvsp[(1) - (3)].v)[i] + (yyvsp[(3) - (3)].v)[i];
    ;}
    break;

  case 471:
#line 5154 "Gmsh.y"
    {
      (yyval.v)[0] = (yyvsp[(2) - (11)].d);  (yyval.v)[1] = (yyvsp[(4) - (11)].d);  (yyval.v)[2] = (yyvsp[(6) - (11)].d);  (yyval.v)[3] = (yyvsp[(8) - (11)].d); (yyval.v)[4] = (yyvsp[(10) - (11)].d);
    ;}
    break;

  case 472:
#line 5158 "Gmsh.y"
    {
      (yyval.v)[0] = (yyvsp[(2) - (9)].d);  (yyval.v)[1] = (yyvsp[(4) - (9)].d);  (yyval.v)[2] = (yyvsp[(6) - (9)].d);  (yyval.v)[3] = (yyvsp[(8) - (9)].d); (yyval.v)[4] = 1.0;
    ;}
    break;

  case 473:
#line 5162 "Gmsh.y"
    {
      (yyval.v)[0] = (yyvsp[(2) - (7)].d);  (yyval.v)[1] = (yyvsp[(4) - (7)].d);  (yyval.v)[2] = (yyvsp[(6) - (7)].d);  (yyval.v)[3] = 0.0; (yyval.v)[4] = 1.0;
    ;}
    break;

  case 474:
#line 5166 "Gmsh.y"
    {
      (yyval.v)[0] = (yyvsp[(2) - (7)].d);  (yyval.v)[1] = (yyvsp[(4) - (7)].d);  (yyval.v)[2] = (yyvsp[(6) - (7)].d);  (yyval.v)[3] = 0.0; (yyval.v)[4] = 1.0;
    ;}
    break;

  case 475:
#line 5173 "Gmsh.y"
    {
      (yyval.l) = List_Create(2, 1, sizeof(List_T*));
      List_Add((yyval.l), &((yyvsp[(1) - (1)].l)));
    ;}
    break;

  case 476:
#line 5178 "Gmsh.y"
    {
      List_Add((yyval.l), &((yyvsp[(3) - (3)].l)));
    ;}
    break;

  case 477:
#line 5185 "Gmsh.y"
    {
      (yyval.l) = List_Create(2, 1, sizeof(double));
      List_Add((yyval.l), &((yyvsp[(1) - (1)].d)));
    ;}
    break;

  case 478:
#line 5190 "Gmsh.y"
    {
      (yyval.l) = (yyvsp[(1) - (1)].l);
    ;}
    break;

  case 479:
#line 5194 "Gmsh.y"
    {
      // creates an empty list
      (yyval.l) = List_Create(2, 1, sizeof(double));
    ;}
    break;

  case 480:
#line 5199 "Gmsh.y"
    {
      (yyval.l) = (yyvsp[(2) - (3)].l);
    ;}
    break;

  case 481:
#line 5203 "Gmsh.y"
    {
      (yyval.l) = (yyvsp[(3) - (4)].l);
      for(int i = 0; i < List_Nbr((yyval.l)); i++){
	double *pd = (double*)List_Pointer((yyval.l), i);
	(*pd) = - (*pd);
      }
    ;}
    break;

  case 482:
#line 5211 "Gmsh.y"
    {
      (yyval.l) = (yyvsp[(4) - (5)].l);
      for(int i = 0; i < List_Nbr((yyval.l)); i++){
	double *pd = (double*)List_Pointer((yyval.l), i);
	(*pd) *= (yyvsp[(1) - (5)].d);
      }
    ;}
    break;

  case 483:
#line 5222 "Gmsh.y"
    {
      (yyval.l) = (yyvsp[(1) - (1)].l);
    ;}
    break;

  case 484:
#line 5226 "Gmsh.y"
    {
      if(!strcmp((yyvsp[(1) - (1)].c), "*") || !strcmp((yyvsp[(1) - (1)].c), "all"))
        (yyval.l) = 0;
      else{
        yyerror("Unknown special string for list replacement");
        (yyval.l) = List_Create(2, 1, sizeof(double));
      }
    ;}
    break;

  case 485:
#line 5238 "Gmsh.y"
    {
      (yyval.l) = (yyvsp[(2) - (2)].l);
      for(int i = 0; i < List_Nbr((yyval.l)); i++){
	double *pd = (double*)List_Pointer((yyval.l), i);
	(*pd) = - (*pd);
      }
    ;}
    break;

  case 486:
#line 5246 "Gmsh.y"
    {
      (yyval.l) = (yyvsp[(3) - (3)].l);
      for(int i = 0; i < List_Nbr((yyval.l)); i++){
	double *pd = (double*)List_Pointer((yyval.l), i);
	(*pd) *= (yyvsp[(1) - (3)].d);
      }
    ;}
    break;

  case 487:
#line 5254 "Gmsh.y"
    {
      (yyval.l) = List_Create(2, 1, sizeof(double));
      for(double d = (yyvsp[(1) - (3)].d); ((yyvsp[(1) - (3)].d) < (yyvsp[(3) - (3)].d)) ? (d <= (yyvsp[(3) - (3)].d)) : (d >= (yyvsp[(3) - (3)].d));
          ((yyvsp[(1) - (3)].d) < (yyvsp[(3) - (3)].d)) ? (d += 1.) : (d -= 1.))
	List_Add((yyval.l), &d);
    ;}
    break;

  case 488:
#line 5261 "Gmsh.y"
    {
      (yyval.l) = List_Create(2, 1, sizeof(double));
      if(!(yyvsp[(5) - (5)].d)){  //|| ($1 < $3 && $5 < 0) || ($1 > $3 && $5 > 0)
        yymsg(0, "Wrong increment in '%g:%g:%g'", (yyvsp[(1) - (5)].d), (yyvsp[(3) - (5)].d), (yyvsp[(5) - (5)].d));
      }
      else
	for(double d = (yyvsp[(1) - (5)].d); ((yyvsp[(5) - (5)].d) > 0) ? (d <= (yyvsp[(3) - (5)].d)) : (d >= (yyvsp[(3) - (5)].d)); d += (yyvsp[(5) - (5)].d))
	  List_Add((yyval.l), &d);
   ;}
    break;

  case 489:
#line 5271 "Gmsh.y"
    {
      (yyval.l) = List_Create(3, 1, sizeof(double));
      int tag = (int)(yyvsp[(3) - (4)].d);
      double x = 0., y = 0., z = 0.;
      bool found = GModel::current()->getGEOInternals()->getVertex(tag, x, y, z);
      if(!found && GModel::current()->getOCCInternals())
        found = GModel::current()->getOCCInternals()->getVertex(tag, x, y, z);
      if(!found){
        GVertex *gv = GModel::current()->getVertexByTag(tag);
        if(gv){
          x = gv->x();
          y = gv->y();
          z = gv->z();
        }
        else{
          yymsg(0, "Unknown model vertex with tag %d", tag);
        }
      }
      List_Add((yyval.l), &x);
      List_Add((yyval.l), &y);
      List_Add((yyval.l), &z);
    ;}
    break;

  case 490:
#line 5294 "Gmsh.y"
    {
      (yyval.l) = List_Create(10, 10, sizeof(double));
      getAllElementaryTags((yyvsp[(1) - (2)].i), (yyval.l));
      Free((yyvsp[(2) - (2)].c));
    ;}
    break;

  case 491:
#line 5300 "Gmsh.y"
    {
      (yyval.l) = List_Create(10, 10, sizeof(double));
      if(!(yyvsp[(3) - (3)].l)){
        getAllPhysicalTags((yyvsp[(2) - (3)].i), (yyval.l));
      }
      else{
        getElementaryTagsForPhysicalGroups((yyvsp[(2) - (3)].i), (yyvsp[(3) - (3)].l), (yyval.l));
        List_Delete((yyvsp[(3) - (3)].l));
      }
    ;}
    break;

  case 492:
#line 5312 "Gmsh.y"
    {
      (yyval.l) = List_Create(10, 10, sizeof(double));
      getElementaryTagsInBoundingBox((yyvsp[(1) - (16)].i), (yyvsp[(5) - (16)].d), (yyvsp[(7) - (16)].d), (yyvsp[(9) - (16)].d), (yyvsp[(11) - (16)].d), (yyvsp[(13) - (16)].d), (yyvsp[(15) - (16)].d), (yyval.l));
    ;}
    break;

  case 493:
#line 5317 "Gmsh.y"
    {
      (yyval.l) = List_Create(List_Nbr((yyvsp[(1) - (1)].l)), 1, sizeof(double));
      for(int i = 0; i < List_Nbr((yyvsp[(1) - (1)].l)); i++){
	Shape *s = (Shape*) List_Pointer((yyvsp[(1) - (1)].l), i);
	double d = s->Num;
	List_Add((yyval.l), &d);
      }
      List_Delete((yyvsp[(1) - (1)].l));
    ;}
    break;

  case 494:
#line 5327 "Gmsh.y"
    {
      (yyval.l) = List_Create(List_Nbr((yyvsp[(1) - (1)].l)), 1, sizeof(double));
      for(int i = 0; i < List_Nbr((yyvsp[(1) - (1)].l)); i++){
	Shape *s = (Shape*) List_Pointer((yyvsp[(1) - (1)].l), i);
	double d = s->Num;
	List_Add((yyval.l), &d);
      }
      List_Delete((yyvsp[(1) - (1)].l));
    ;}
    break;

  case 495:
#line 5337 "Gmsh.y"
    {
      (yyval.l) = List_Create(List_Nbr((yyvsp[(1) - (1)].l)), 1, sizeof(double));
      for(int i = 0; i < List_Nbr((yyvsp[(1) - (1)].l)); i++){
	Shape *s = (Shape*) List_Pointer((yyvsp[(1) - (1)].l), i);
	double d = s->Num;
	List_Add((yyval.l), &d);
      }
      List_Delete((yyvsp[(1) - (1)].l));
    ;}
    break;

  case 496:
#line 5347 "Gmsh.y"
    {
      (yyval.l) = List_Create(20, 20, sizeof(double));
      if(!gmsh_yysymbols.count((yyvsp[(1) - (3)].c)))
	yymsg(0, "Unknown variable '%s'", (yyvsp[(1) - (3)].c));
      else{
        gmsh_yysymbol &s(gmsh_yysymbols[(yyvsp[(1) - (3)].c)]);
	for(unsigned int i = 0; i < s.value.size(); i++)
	  List_Add((yyval.l), &s.value[i]);
      }
      Free((yyvsp[(1) - (3)].c));
    ;}
    break;

  case 497:
#line 5360 "Gmsh.y"
    {
      (yyval.l) = treat_Struct_FullName_dot_tSTRING_ListOfFloat(NULL, (yyvsp[(1) - (5)].c), (yyvsp[(3) - (5)].c));
    ;}
    break;

  case 498:
#line 5364 "Gmsh.y"
    {
      (yyval.l) = treat_Struct_FullName_dot_tSTRING_ListOfFloat((yyvsp[(1) - (7)].c), (yyvsp[(3) - (7)].c), (yyvsp[(5) - (7)].c));
    ;}
    break;

  case 499:
#line 5370 "Gmsh.y"
    {
      (yyval.l) = List_Create(2, 1, sizeof(double));
      if(!gmsh_yysymbols.count((yyvsp[(3) - (4)].c)))
	yymsg(0, "Unknown variable '%s'", (yyvsp[(3) - (4)].c));
      else{
        gmsh_yysymbol &s(gmsh_yysymbols[(yyvsp[(3) - (4)].c)]);
	for(unsigned int i = 0; i < s.value.size(); i++)
	  List_Add((yyval.l), &s.value[i]);
      }
      Free((yyvsp[(3) - (4)].c));
    ;}
    break;

  case 500:
#line 5382 "Gmsh.y"
    {
      (yyval.l) = (yyvsp[(3) - (4)].l);
    ;}
    break;

  case 501:
#line 5386 "Gmsh.y"
    {
      (yyval.l) = (yyvsp[(3) - (4)].l);
    ;}
    break;

  case 502:
#line 5390 "Gmsh.y"
    {
      (yyval.l) = (yyvsp[(4) - (6)].l);
    ;}
    break;

  case 503:
#line 5394 "Gmsh.y"
    {
      (yyval.l) = List_Create(2, 1, sizeof(double));
      if(!gmsh_yysymbols.count((yyvsp[(1) - (6)].c)))
	yymsg(0, "Unknown variable '%s'", (yyvsp[(1) - (6)].c));
      else{
        gmsh_yysymbol &s(gmsh_yysymbols[(yyvsp[(1) - (6)].c)]);
	for(int i = 0; i < List_Nbr((yyvsp[(4) - (6)].l)); i++){
	  int index = (int)(*(double*)List_Pointer_Fast((yyvsp[(4) - (6)].l), i));
	  if((int)s.value.size() < index + 1)
	    yymsg(0, "Uninitialized variable '%s[%d]'", (yyvsp[(1) - (6)].c), index);
	  else
	    List_Add((yyval.l), &s.value[index]);
	}
      }
      Free((yyvsp[(1) - (6)].c));
      List_Delete((yyvsp[(4) - (6)].l));
    ;}
    break;

  case 504:
#line 5412 "Gmsh.y"
    {
      (yyval.l) = List_Create(20,20,sizeof(double));
      for(int i = 0; i < (int)(yyvsp[(7) - (8)].d); i++) {
	double d = (yyvsp[(3) - (8)].d) + ((yyvsp[(5) - (8)].d)-(yyvsp[(3) - (8)].d))*(double)i/((yyvsp[(7) - (8)].d)-1);
	List_Add((yyval.l), &d);
      }
    ;}
    break;

  case 505:
#line 5420 "Gmsh.y"
    {
      (yyval.l) = List_Create(20,20,sizeof(double));
      for(int i = 0; i < (int)(yyvsp[(7) - (8)].d); i++) {
	double d = pow(10,(yyvsp[(3) - (8)].d) + ((yyvsp[(5) - (8)].d)-(yyvsp[(3) - (8)].d))*(double)i/((yyvsp[(7) - (8)].d)-1));
	List_Add((yyval.l), &d);
      }
    ;}
    break;

  case 506:
#line 5428 "Gmsh.y"
    {
      Msg::Barrier();
      FILE *File;
      (yyval.l) = List_Create(100, 100, sizeof(double));
      std::string tmp = FixRelativePath(gmsh_yyname, (yyvsp[(3) - (4)].c));
      if(!(File = Fopen(tmp.c_str(), "rb"))){
        yymsg(0, "Could not open file '%s'", (yyvsp[(3) - (4)].c));
      }
      else{
	double d;
	while(!feof(File)){
          int ret = fscanf(File, "%lf", &d);
	  if(ret == 1){
	    List_Add((yyval.l), &d);
          }
          else if(ret == EOF){
            break;
          }
          else{
            char dummy[1024];
            fscanf(File, "%s", dummy);
            yymsg(0, "Ignoring '%s' in file '%s'", dummy, (yyvsp[(3) - (4)].c));
          }
        }
	fclose(File);
      }
      Free((yyvsp[(3) - (4)].c));
    ;}
    break;

  case 507:
#line 5457 "Gmsh.y"
    {
      double x0 = (yyvsp[(3) - (14)].d), x1 = (yyvsp[(5) - (14)].d), y0 = (yyvsp[(7) - (14)].d), y1 = (yyvsp[(9) - (14)].d), ys = (yyvsp[(11) - (14)].d);
      int N = (int)(yyvsp[(13) - (14)].d);
      std::vector<double> y(N);
      if(!catenary(x0, x1, y0, y1, ys, N, &y[0]))
        Msg::Warning("Catenary did not converge, using linear interpolation");
      (yyval.l) = List_Create(N,10,sizeof(double));
      for(int i = 0; i < N; i++) List_Add((yyval.l), &y[i]);
    ;}
    break;

  case 508:
#line 5467 "Gmsh.y"
    {
      std::vector<double> tmp;
      for(int i = 0; i < List_Nbr((yyvsp[(3) - (4)].l)); i++){
        double d; List_Read((yyvsp[(3) - (4)].l), i, &d);
        tmp.push_back(d);
      }
      std::sort(tmp.begin(), tmp.end());
      std::vector<double>::iterator last = std::unique(tmp.begin(), tmp.end());
      tmp.erase(last, tmp.end());
      (yyval.l) = (yyvsp[(3) - (4)].l);
      List_Reset((yyval.l));
      for(unsigned int i = 0; i < tmp.size(); i++){
        List_Add((yyval.l), &tmp[i]);
      }
    ;}
    break;

  case 509:
#line 5483 "Gmsh.y"
    {
      for(int i = 0; i < List_Nbr((yyvsp[(3) - (4)].l)); i++){
        double *d = (double*)List_Pointer((yyvsp[(3) - (4)].l), i);
        *d = std::abs(*d);
      }
      (yyval.l) = (yyvsp[(3) - (4)].l);
    ;}
    break;

  case 510:
#line 5494 "Gmsh.y"
    {
      (yyval.l) = List_Create(2, 1, sizeof(double));
      List_Add((yyval.l), &((yyvsp[(1) - (1)].d)));
    ;}
    break;

  case 511:
#line 5499 "Gmsh.y"
    {
      (yyval.l) = (yyvsp[(1) - (1)].l);
    ;}
    break;

  case 512:
#line 5503 "Gmsh.y"
    {
      List_Add((yyval.l), &((yyvsp[(3) - (3)].d)));
    ;}
    break;

  case 513:
#line 5507 "Gmsh.y"
    {
      for(int i = 0; i < List_Nbr((yyvsp[(3) - (3)].l)); i++){
	double d;
	List_Read((yyvsp[(3) - (3)].l), i, &d);
	List_Add((yyval.l), &d);
      }
      List_Delete((yyvsp[(3) - (3)].l));
    ;}
    break;

  case 514:
#line 5519 "Gmsh.y"
    {
      (yyval.u) = CTX::instance()->packColor((int)(yyvsp[(2) - (9)].d), (int)(yyvsp[(4) - (9)].d), (int)(yyvsp[(6) - (9)].d), (int)(yyvsp[(8) - (9)].d));
    ;}
    break;

  case 515:
#line 5523 "Gmsh.y"
    {
      (yyval.u) = CTX::instance()->packColor((int)(yyvsp[(2) - (7)].d), (int)(yyvsp[(4) - (7)].d), (int)(yyvsp[(6) - (7)].d), 255);
    ;}
    break;

  case 516:
#line 5535 "Gmsh.y"
    {
      int flag = 0;
      if(gmsh_yystringsymbols.count((yyvsp[(1) - (1)].c))){
        if(gmsh_yystringsymbols[(yyvsp[(1) - (1)].c)].size()){
          (yyval.u) = GetColorForString(-1, gmsh_yystringsymbols[(yyvsp[(1) - (1)].c)][0].c_str(), &flag);
        }
        else{
          yymsg(0, "Unknown color '%s'", (yyvsp[(1) - (1)].c));
          (yyval.u) = 0;
        }
      }
      else
        (yyval.u) = GetColorForString(-1, (yyvsp[(1) - (1)].c), &flag);
      if(flag) yymsg(0, "Unknown color '%s'", (yyvsp[(1) - (1)].c));
      Free((yyvsp[(1) - (1)].c));
    ;}
    break;

  case 517:
#line 5552 "Gmsh.y"
    {
      unsigned int val = 0;
      ColorOption(GMSH_GET, (yyvsp[(1) - (5)].c), 0, (yyvsp[(5) - (5)].c), val);
      (yyval.u) = val;
      Free((yyvsp[(1) - (5)].c)); Free((yyvsp[(5) - (5)].c));
    ;}
    break;

  case 518:
#line 5562 "Gmsh.y"
    {
      (yyval.l) = (yyvsp[(2) - (3)].l);
    ;}
    break;

  case 519:
#line 5566 "Gmsh.y"
    {
      (yyval.l) = List_Create(256, 10, sizeof(unsigned int));
      GmshColorTable *ct = GetColorTable((int)(yyvsp[(3) - (6)].d));
      if(!ct)
	yymsg(0, "View[%d] does not exist", (int)(yyvsp[(3) - (6)].d));
      else{
	for(int i = 0; i < ct->size; i++)
	  List_Add((yyval.l), &ct->table[i]);
      }
      Free((yyvsp[(1) - (6)].c));
    ;}
    break;

  case 520:
#line 5581 "Gmsh.y"
    {
      (yyval.l) = List_Create(256, 10, sizeof(unsigned int));
      List_Add((yyval.l), &((yyvsp[(1) - (1)].u)));
    ;}
    break;

  case 521:
#line 5586 "Gmsh.y"
    {
      List_Add((yyval.l), &((yyvsp[(3) - (3)].u)));
    ;}
    break;

  case 522:
#line 5593 "Gmsh.y"
    {
      (yyval.c) = (yyvsp[(1) - (1)].c);
    ;}
    break;

  case 523:
#line 5597 "Gmsh.y"
    {
      // No need to extend to Struct_FullName (a Tag is not a String)
      (yyval.c) = treat_Struct_FullName_String(NULL, (yyvsp[(1) - (1)].c));
    ;}
    break;

  case 524:
#line 5602 "Gmsh.y"
    {
      std::string val;
      int j = (int)(yyvsp[(3) - (4)].d);
      if(!gmsh_yystringsymbols.count((yyvsp[(1) - (4)].c)))
        yymsg(0, "Unknown string variable '%s'", (yyvsp[(1) - (4)].c));
      else if(j >= 0 && j < (int)gmsh_yystringsymbols[(yyvsp[(1) - (4)].c)].size())
        val = gmsh_yystringsymbols[(yyvsp[(1) - (4)].c)][j];
      else
        yymsg(0, "Index %d out of range", j);
      (yyval.c) = (char *)Malloc((val.size() + 1) * sizeof(char));
      strcpy((yyval.c), val.c_str());
      Free((yyvsp[(1) - (4)].c));
    ;}
    break;

  case 525:
#line 5616 "Gmsh.y"
    {
      std::string val;
      int j = (int)(yyvsp[(3) - (4)].d);
      if(!gmsh_yystringsymbols.count((yyvsp[(1) - (4)].c)))
        yymsg(0, "Unknown string variable '%s'", (yyvsp[(1) - (4)].c));
      else if(j >= 0 && j < (int)gmsh_yystringsymbols[(yyvsp[(1) - (4)].c)].size())
        val = gmsh_yystringsymbols[(yyvsp[(1) - (4)].c)][j];
      else
        yymsg(0, "Index %d out of range", j);
      (yyval.c) = (char *)Malloc((val.size() + 1) * sizeof(char));
      strcpy((yyval.c), val.c_str());
      Free((yyvsp[(1) - (4)].c));
    ;}
    break;

  case 526:
#line 5633 "Gmsh.y"
    {
      (yyval.c) = treat_Struct_FullName_dot_tSTRING_String(NULL, (yyvsp[(1) - (3)].c), (yyvsp[(3) - (3)].c));
    ;}
    break;

  case 527:
#line 5637 "Gmsh.y"
    {
      (yyval.c) = treat_Struct_FullName_dot_tSTRING_String((yyvsp[(1) - (5)].c), (yyvsp[(3) - (5)].c), (yyvsp[(5) - (5)].c));
    ;}
    break;

  case 528:
#line 5642 "Gmsh.y"
    {
      (yyval.c) = treat_Struct_FullName_dot_tSTRING_String(NULL, (yyvsp[(1) - (6)].c), (yyvsp[(3) - (6)].c), (int)(yyvsp[(5) - (6)].d));
    ;}
    break;

  case 529:
#line 5646 "Gmsh.y"
    {
      (yyval.c) = treat_Struct_FullName_dot_tSTRING_String((yyvsp[(1) - (8)].c), (yyvsp[(3) - (8)].c), (yyvsp[(5) - (8)].c), (int)(yyvsp[(7) - (8)].d));
    ;}
    break;

  case 530:
#line 5651 "Gmsh.y"
    {
      std::string out;
      StringOption(GMSH_GET, (yyvsp[(1) - (6)].c), (int)(yyvsp[(3) - (6)].d), (yyvsp[(6) - (6)].c), out);
      (yyval.c) = (char*)Malloc((out.size() + 1) * sizeof(char));
      strcpy((yyval.c), out.c_str());
      Free((yyvsp[(1) - (6)].c)); Free((yyvsp[(6) - (6)].c));
    ;}
    break;

  case 531:
#line 5659 "Gmsh.y"
    {
      std::string name = GModel::current()->getPhysicalName(0, (int)(yyvsp[(4) - (5)].d));
      (yyval.c) = (char*)Malloc((name.size() + 1) * sizeof(char));
      strcpy((yyval.c), name.c_str());
    ;}
    break;

  case 532:
#line 5665 "Gmsh.y"
    {
      std::string name = GModel::current()->getPhysicalName(1, (int)(yyvsp[(4) - (5)].d));
      (yyval.c) = (char*)Malloc((name.size() + 1) * sizeof(char));
      strcpy((yyval.c), name.c_str());
    ;}
    break;

  case 533:
#line 5671 "Gmsh.y"
    {
      std::string name = GModel::current()->getPhysicalName(2, (int)(yyvsp[(4) - (5)].d));
      (yyval.c) = (char*)Malloc((name.size() + 1) * sizeof(char));
      strcpy((yyval.c), name.c_str());
    ;}
    break;

  case 534:
#line 5677 "Gmsh.y"
    {
      std::string name = GModel::current()->getPhysicalName(3, (int)(yyvsp[(4) - (5)].d));
      (yyval.c) = (char*)Malloc((name.size() + 1) * sizeof(char));
      strcpy((yyval.c), name.c_str());
    ;}
    break;

  case 535:
#line 5686 "Gmsh.y"
    {
      (yyval.c) = (yyvsp[(1) - (1)].c);
    ;}
    break;

  case 536:
#line 5690 "Gmsh.y"
    {
      (yyval.c) = (yyvsp[(3) - (4)].c);
    ;}
    break;

  case 537:
#line 5694 "Gmsh.y"
    {
      (yyval.c) = (char *)Malloc(32 * sizeof(char));
      time_t now;
      time(&now);
      strcpy((yyval.c), ctime(&now));
      (yyval.c)[strlen((yyval.c)) - 1] = '\0';
    ;}
    break;

  case 538:
#line 5702 "Gmsh.y"
    {
      std::string exe = Msg::GetExecutableName();
      (yyval.c) = (char *)Malloc(exe.size() + 1);
      strcpy((yyval.c), exe.c_str());
    ;}
    break;

  case 539:
#line 5708 "Gmsh.y"
    {
      std::string action = Msg::GetOnelabAction();
      (yyval.c) = (char *)Malloc(action.size() + 1);
      strcpy((yyval.c), action.c_str());
    ;}
    break;

  case 540:
#line 5714 "Gmsh.y"
    {
      (yyval.c) = strsave((char*)"Gmsh");
    ;}
    break;

  case 541:
#line 5718 "Gmsh.y"
    {
      const char *env = GetEnvironmentVar((yyvsp[(3) - (4)].c));
      if(!env) env = "";
      (yyval.c) = (char *)Malloc((sizeof(env) + 1) * sizeof(char));
      strcpy((yyval.c), env);
      Free((yyvsp[(3) - (4)].c));
    ;}
    break;

  case 542:
#line 5726 "Gmsh.y"
    {
      std::string s = Msg::GetString((yyvsp[(3) - (6)].c), (yyvsp[(5) - (6)].c));
      (yyval.c) = (char *)Malloc((s.size() + 1) * sizeof(char));
      strcpy((yyval.c), s.c_str());
      Free((yyvsp[(3) - (6)].c));
      Free((yyvsp[(5) - (6)].c));
    ;}
    break;

  case 543:
#line 5734 "Gmsh.y"
    {
      std::string s = Msg::GetOnelabString((yyvsp[(3) - (4)].c));
      (yyval.c) = (char *)Malloc((s.size() + 1) * sizeof(char));
      strcpy((yyval.c), s.c_str());
      Free((yyvsp[(3) - (4)].c));
    ;}
    break;

  case 544:
#line 5741 "Gmsh.y"
    {
      std::string s = Msg::GetOnelabString((yyvsp[(3) - (6)].c), (yyvsp[(5) - (6)].c));
      (yyval.c) = (char *)Malloc((s.size() + 1) * sizeof(char));
      strcpy((yyval.c), s.c_str());
      Free((yyvsp[(3) - (6)].c));
      Free((yyvsp[(5) - (6)].c));
    ;}
    break;

  case 545:
#line 5751 "Gmsh.y"
    {
      (yyval.c) = treat_Struct_FullName_String(NULL, (yyvsp[(3) - (5)].c2).char2, 1, 0, (yyvsp[(4) - (5)].c), 2);
    ;}
    break;

  case 546:
#line 5756 "Gmsh.y"
    {
      (yyval.c) = treat_Struct_FullName_dot_tSTRING_String((yyvsp[(3) - (7)].c2).char1, (yyvsp[(3) - (7)].c2).char2, (yyvsp[(5) - (7)].c), 0, (yyvsp[(6) - (7)].c), 2);
    ;}
    break;

  case 547:
#line 5761 "Gmsh.y"
    {
      int size = 1;
      for(int i = 0; i < List_Nbr((yyvsp[(3) - (4)].l)); i++)
        size += strlen(*(char**)List_Pointer((yyvsp[(3) - (4)].l), i)) + 1;
      (yyval.c) = (char*)Malloc(size * sizeof(char));
      (yyval.c)[0] = '\0';
      for(int i = 0; i < List_Nbr((yyvsp[(3) - (4)].l)); i++){
        char *s;
        List_Read((yyvsp[(3) - (4)].l), i, &s);
        strcat((yyval.c), s);
        Free(s);
      }
      List_Delete((yyvsp[(3) - (4)].l));
    ;}
    break;

  case 548:
#line 5776 "Gmsh.y"
    {
      (yyval.c) = (char *)Malloc((strlen((yyvsp[(3) - (4)].c)) + 1) * sizeof(char));
      int i;
      for(i = strlen((yyvsp[(3) - (4)].c)) - 1; i >= 0; i--){
	if((yyvsp[(3) - (4)].c)[i] == '.'){
	  strncpy((yyval.c), (yyvsp[(3) - (4)].c), i);
	  (yyval.c)[i]='\0';
	  break;
	}
      }
      if(i <= 0) strcpy((yyval.c), (yyvsp[(3) - (4)].c));
      Free((yyvsp[(3) - (4)].c));
    ;}
    break;

  case 549:
#line 5790 "Gmsh.y"
    {
      (yyval.c) = (char *)Malloc((strlen((yyvsp[(3) - (4)].c)) + 1) * sizeof(char));
      int i;
      for(i = strlen((yyvsp[(3) - (4)].c)) - 1; i >= 0; i--){
	if((yyvsp[(3) - (4)].c)[i] == '/' || (yyvsp[(3) - (4)].c)[i] == '\\')
	  break;
      }
      if(i <= 0)
	strcpy((yyval.c), (yyvsp[(3) - (4)].c));
      else
	strcpy((yyval.c), &(yyvsp[(3) - (4)].c)[i+1]);
      Free((yyvsp[(3) - (4)].c));
    ;}
    break;

  case 550:
#line 5804 "Gmsh.y"
    {
      std::string input = (yyvsp[(3) - (8)].c);
      std::string substr_old = (yyvsp[(5) - (8)].c);
      std::string substr_new = (yyvsp[(7) - (8)].c);
      std::string ret = ReplaceSubString(substr_old, substr_new, input);
      (yyval.c) = (char *)Malloc((ret.size() + 1) * sizeof(char));
      strcpy((yyval.c), ret.c_str());
      Free((yyvsp[(3) - (8)].c));
      Free((yyvsp[(5) - (8)].c));
      Free((yyvsp[(7) - (8)].c));
    ;}
    break;

  case 551:
#line 5816 "Gmsh.y"
    {
      int size = 1;
      for(int i = 0; i < List_Nbr((yyvsp[(3) - (4)].l)); i++)
        size += strlen(*(char**)List_Pointer((yyvsp[(3) - (4)].l), i)) + 1;
      (yyval.c) = (char*)Malloc(size * sizeof(char));
      (yyval.c)[0] = '\0';
      for(int i = 0; i < List_Nbr((yyvsp[(3) - (4)].l)); i++){
        char *s;
        List_Read((yyvsp[(3) - (4)].l), i, &s);
        strcat((yyval.c), s);
        Free(s);
        if(i != List_Nbr((yyvsp[(3) - (4)].l)) - 1) strcat((yyval.c), "\n");
      }
      List_Delete((yyvsp[(3) - (4)].l));
    ;}
    break;

  case 552:
#line 5832 "Gmsh.y"
    {
      int i = 0;
      while ((yyvsp[(3) - (4)].c)[i]) {
        (yyvsp[(3) - (4)].c)[i] = toupper((yyvsp[(3) - (4)].c)[i]);
        i++;
      }
      (yyval.c) = (yyvsp[(3) - (4)].c);
    ;}
    break;

  case 553:
#line 5841 "Gmsh.y"
    {
      int i = 0;
      while ((yyvsp[(3) - (4)].c)[i]) {
        (yyvsp[(3) - (4)].c)[i] = tolower((yyvsp[(3) - (4)].c)[i]);
        i++;
      }
      (yyval.c) = (yyvsp[(3) - (4)].c);
    ;}
    break;

  case 554:
#line 5850 "Gmsh.y"
    {
      int i = 0;
      while ((yyvsp[(3) - (4)].c)[i]) {
        if (i > 0 && (yyvsp[(3) - (4)].c)[i-1] != '_')
          (yyvsp[(3) - (4)].c)[i] = tolower((yyvsp[(3) - (4)].c)[i]);
        i++;
      }
      (yyval.c) = (yyvsp[(3) - (4)].c);
    ;}
    break;

  case 555:
#line 5860 "Gmsh.y"
    {
      if((yyvsp[(3) - (8)].d)){
        (yyval.c) = (yyvsp[(5) - (8)].c);
        Free((yyvsp[(7) - (8)].c));
      }
      else{
        (yyval.c) = (yyvsp[(7) - (8)].c);
        Free((yyvsp[(5) - (8)].c));
      }
    ;}
    break;

  case 556:
#line 5871 "Gmsh.y"
    {
      std::string in = (yyvsp[(3) - (8)].c);
      std::string out = in.substr((int)(yyvsp[(5) - (8)].d), (int)(yyvsp[(7) - (8)].d));
      (yyval.c) = (char *)Malloc((out.size() + 1) * sizeof(char));
      strcpy((yyval.c), out.c_str());
      Free((yyvsp[(3) - (8)].c));
    ;}
    break;

  case 557:
#line 5879 "Gmsh.y"
    {
      std::string in = (yyvsp[(3) - (6)].c);
      std::string out = in.substr((int)(yyvsp[(5) - (6)].d), std::string::npos);
      (yyval.c) = (char *)Malloc((out.size() + 1) * sizeof(char));
      strcpy((yyval.c), out.c_str());
      Free((yyvsp[(3) - (6)].c));
    ;}
    break;

  case 558:
#line 5887 "Gmsh.y"
    {
      (yyval.c) = (yyvsp[(3) - (4)].c);
    ;}
    break;

  case 559:
#line 5891 "Gmsh.y"
    {
      char tmpstring[5000];
      int i = printListOfDouble((yyvsp[(3) - (6)].c), (yyvsp[(5) - (6)].l), tmpstring);
      if(i < 0){
	yymsg(0, "Too few arguments in Sprintf");
	(yyval.c) = (yyvsp[(3) - (6)].c);
      }
      else if(i > 0){
	yymsg(0, "%d extra argument%s in Sprintf", i, (i > 1) ? "s" : "");
	(yyval.c) = (yyvsp[(3) - (6)].c);
      }
      else{
	(yyval.c) = (char*)Malloc((strlen(tmpstring) + 1) * sizeof(char));
	strcpy((yyval.c), tmpstring);
	Free((yyvsp[(3) - (6)].c));
      }
      List_Delete((yyvsp[(5) - (6)].l));
    ;}
    break;

  case 560:
#line 5910 "Gmsh.y"
    {
      std::string tmp = FixRelativePath(gmsh_yyname, (yyvsp[(3) - (4)].c));
      (yyval.c) = (char*)Malloc((tmp.size() + 1) * sizeof(char));
      strcpy((yyval.c), tmp.c_str());
      Free((yyvsp[(3) - (4)].c));
    ;}
    break;

  case 561:
#line 5917 "Gmsh.y"
    {
      std::string tmp = SplitFileName(GetAbsolutePath(gmsh_yyname))[0];
      (yyval.c) = (char*)Malloc((tmp.size() + 1) * sizeof(char));
      strcpy((yyval.c), tmp.c_str());
    ;}
    break;

  case 562:
#line 5923 "Gmsh.y"
    {
      std::string tmp = SplitFileName((yyvsp[(3) - (4)].c))[0];
      (yyval.c) = (char*)Malloc((tmp.size() + 1) * sizeof(char));
      strcpy((yyval.c), tmp.c_str());
      Free((yyvsp[(3) - (4)].c));
    ;}
    break;

  case 563:
#line 5930 "Gmsh.y"
    {
      std::string tmp = GetAbsolutePath((yyvsp[(3) - (4)].c));
      (yyval.c) = (char*)Malloc((tmp.size() + 1) * sizeof(char));
      strcpy((yyval.c), tmp.c_str());
      Free((yyvsp[(3) - (4)].c));
    ;}
    break;

  case 564:
#line 5937 "Gmsh.y"
    { init_options(); ;}
    break;

  case 565:
#line 5939 "Gmsh.y"
    {
      std::string val((yyvsp[(3) - (6)].c));
      Msg::ExchangeOnelabParameter("", val, floatOptions, charOptions);
      (yyval.c) = (char*)Malloc((val.size() + 1) * sizeof(char));
      strcpy((yyval.c), val.c_str());
      Free((yyvsp[(3) - (6)].c));
    ;}
    break;

  case 566:
#line 5947 "Gmsh.y"
    {
      std::string out;
      const std::string * key_struct = NULL;
      switch (gmsh_yynamespaces.get_key_struct_from_tag(struct_namespace,
                                                        (int)(yyvsp[(3) - (4)].d), key_struct)) {
      case 0:
        out = *key_struct;
        break;
      case 1:
        yymsg(1, "Unknown NameSpace '%s' of Struct", struct_namespace.c_str());
        break;
      case 2:
        yymsg(1, "Unknown Struct of index %d", (int)(yyvsp[(3) - (4)].d));
        break;
      default:
        break;
      }
      (yyval.c) = (char*)Malloc((out.size() + 1) * sizeof(char));
      strcpy((yyval.c), out.c_str());
    ;}
    break;

  case 567:
#line 5971 "Gmsh.y"
    { struct_namespace = std::string(""); (yyval.d) = (yyvsp[(2) - (2)].d); ;}
    break;

  case 568:
#line 5973 "Gmsh.y"
    { struct_namespace = (yyvsp[(1) - (4)].c); Free((yyvsp[(1) - (4)].c)); (yyval.d) = (yyvsp[(4) - (4)].d); ;}
    break;

  case 569:
#line 5979 "Gmsh.y"
    { (yyval.l) = (yyvsp[(3) - (4)].l); ;}
    break;

  case 570:
#line 5984 "Gmsh.y"
    { (yyval.l) = (yyvsp[(1) - (1)].l); ;}
    break;

  case 571:
#line 5986 "Gmsh.y"
    { (yyval.l) = (yyvsp[(1) - (1)].l); ;}
    break;

  case 572:
#line 5991 "Gmsh.y"
    { (yyval.l) = (yyvsp[(2) - (3)].l); ;}
    break;

  case 573:
#line 5996 "Gmsh.y"
    {
      (yyval.l) = List_Create(20,20,sizeof(char*));
      List_Add((yyval.l), &((yyvsp[(1) - (1)].c)));
    ;}
    break;

  case 574:
#line 6001 "Gmsh.y"
    { (yyval.l) = (yyvsp[(1) - (1)].l); ;}
    break;

  case 575:
#line 6003 "Gmsh.y"
    {
      List_Add((yyval.l), &((yyvsp[(3) - (3)].c)));
    ;}
    break;

  case 576:
#line 6007 "Gmsh.y"
    {
      for(int i = 0; i < List_Nbr((yyvsp[(3) - (3)].l)); i++){
	char* c;
	List_Read((yyvsp[(3) - (3)].l), i, &c);
	List_Add((yyval.l), &c);
      }
      List_Delete((yyvsp[(3) - (3)].l));
    ;}
    break;

  case 577:
#line 6019 "Gmsh.y"
    {
      (yyval.l) = List_Create(20, 20, sizeof(char *));
      if(!gmsh_yystringsymbols.count((yyvsp[(1) - (3)].c)))
	yymsg(0, "Unknown string variable '%s'", (yyvsp[(1) - (3)].c));
      else{
        std::vector<std::string> &s(gmsh_yystringsymbols[(yyvsp[(1) - (3)].c)]);
	for(unsigned int i = 0; i < s.size(); i++) {
          char * val_ = strsave((char*)s.at(i).c_str());
	  List_Add((yyval.l), &val_);
        }
      }
      Free((yyvsp[(1) - (3)].c));
    ;}
    break;

  case 578:
#line 6033 "Gmsh.y"
    {
      (yyval.l) = treat_Struct_FullName_dot_tSTRING_ListOfString(NULL, (yyvsp[(1) - (5)].c), (yyvsp[(3) - (5)].c));
    ;}
    break;

  case 579:
#line 6037 "Gmsh.y"
    {
      (yyval.l) = treat_Struct_FullName_dot_tSTRING_ListOfString((yyvsp[(1) - (7)].c), (yyvsp[(3) - (7)].c), (yyvsp[(5) - (7)].c));
    ;}
    break;

  case 580:
#line 6044 "Gmsh.y"
    {
      char tmpstr[256];
      sprintf(tmpstr, "_%d", (int)(yyvsp[(4) - (5)].d));
      (yyval.c) = (char *)Malloc((strlen((yyvsp[(1) - (5)].c))+strlen(tmpstr)+1)*sizeof(char));
      strcpy((yyval.c), (yyvsp[(1) - (5)].c)); strcat((yyval.c), tmpstr);
      Free((yyvsp[(1) - (5)].c));
    ;}
    break;

  case 581:
#line 6052 "Gmsh.y"
    {
      char tmpstr[256];
      sprintf(tmpstr, "_%d", (int)(yyvsp[(4) - (5)].d));
      (yyval.c) = (char *)Malloc((strlen((yyvsp[(1) - (5)].c))+strlen(tmpstr)+1)*sizeof(char)) ;
      strcpy((yyval.c), (yyvsp[(1) - (5)].c)) ; strcat((yyval.c), tmpstr) ;
      Free((yyvsp[(1) - (5)].c));
    ;}
    break;

  case 582:
#line 6060 "Gmsh.y"
    {
      char tmpstr[256];
      sprintf(tmpstr, "_%d", (int)(yyvsp[(7) - (8)].d));
      (yyval.c) = (char *)Malloc((strlen((yyvsp[(3) - (8)].c))+strlen(tmpstr)+1)*sizeof(char));
      strcpy((yyval.c), (yyvsp[(3) - (8)].c)); strcat((yyval.c), tmpstr);
      Free((yyvsp[(3) - (8)].c));
    ;}
    break;

  case 583:
#line 6071 "Gmsh.y"
    { (yyval.c) = (yyvsp[(1) - (1)].c); ;}
    break;

  case 584:
#line 6073 "Gmsh.y"
    { (yyval.c) = (yyvsp[(1) - (1)].c); ;}
    break;

  case 585:
#line 6076 "Gmsh.y"
    { (yyval.c) = (yyvsp[(3) - (4)].c); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 13335 "Gmsh.tab.cpp"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 6079 "Gmsh.y"


void assignVariable(const std::string &name, int index, int assignType,
                    double value)
{
  if(!gmsh_yysymbols.count(name)){
    if(!assignType){
      gmsh_yysymbol &s(gmsh_yysymbols[name]);
      s.list = true;
      s.value.resize(index + 1, 0.);
      s.value[index] = value;
    }
    else
      yymsg(0, "Unknown variable '%s'", name.c_str());
  }
  else{
    gmsh_yysymbol &s(gmsh_yysymbols[name]);
    if(s.list){
      if((int)s.value.size() < index + 1) s.value.resize(index + 1, 0.);
      switch(assignType){
      case 0 : s.value[index] = value; break;
      case 1 : s.value[index] += value; break;
      case 2 : s.value[index] -= value; break;
      case 3 : s.value[index] *= value; break;
      case 4 :
        if(value) s.value[index] /= value;
        else yymsg(0, "Division by zero in '%s[%d] /= %g'",
                   name.c_str(), index, value);
        break;
      }
    }
    else
      yymsg(0, "Variable '%s' is not a list", name.c_str());
  }
}

void assignVariables(const std::string &name, List_T *indices, int assignType,
                     List_T *values)
{
  if(List_Nbr(indices) != List_Nbr(values)){
    yymsg(0, "Incompatible array dimensions in affectation");
  }
  else{
    if(!gmsh_yysymbols.count(name)){
      if(!assignType){
        gmsh_yysymbol &s(gmsh_yysymbols[name]);
        s.list = true;
        for(int i = 0; i < List_Nbr(indices); i++){
          int index = (int)(*(double*)List_Pointer(indices, i));
          s.value.resize(index + 1, 0.);
          s.value[index] = *(double*)List_Pointer(values, i);
        }
      }
      else
        yymsg(0, "Unknown variable '%s'", name.c_str());
    }
    else{
      gmsh_yysymbol &s(gmsh_yysymbols[name]);
      if(s.list){
        for(int i = 0; i < List_Nbr(indices); i++){
          int index = (int)(*(double*)List_Pointer(indices, i));
          double d = *(double*)List_Pointer(values, i);
          if((int)s.value.size() < index + 1) s.value.resize(index + 1, 0.);
          switch(assignType){
          case 0 : s.value[index] = d; break;
          case 1 : s.value[index] += d; break;
          case 2 : s.value[index] -= d; break;
          case 3 : s.value[index] *= d; break;
          case 4 :
            if(d) s.value[index] /= d;
            else yymsg(0, "Division by zero in '%s[%d] /= %g'", name.c_str(), index, d);
            break;
          }
        }
      }
      else
        yymsg(0, "Variable '%s' is not a list", name.c_str());
    }
  }
}

void incrementVariable(const std::string &name, int index, double value)
{
  if(!gmsh_yysymbols.count(name))
    yymsg(0, "Unknown variable '%s'", name.c_str());
  else{
    gmsh_yysymbol &s(gmsh_yysymbols[name]);
    if(s.list){
      if((int)s.value.size() < index + 1) s.value.resize(index + 1, 0.);
      s.value[index] += value;
    }
    else
      yymsg(0, "Variable '%s' is not a list", name.c_str());
  }
}

int printListOfDouble(char *format, List_T *list, char *buffer)
{
  // if format does not contain formatting characters, dump the list (useful for
  // quick debugging of lists)
  int numFormats = 0;
  for(unsigned int i = 0; i < strlen(format); i++)
    if(format[i] == '%') numFormats++;
  if(!numFormats){
    strcpy(buffer, format);
    for(int i = 0; i < List_Nbr(list); i++){
      double d;
      List_Read(list, i, &d);
      char tmp[256];
      sprintf(tmp, " [%d]%g", i, d);
      strcat(buffer, tmp);
    }
    return 0;
  }

  char tmp1[256], tmp2[256];
  int j = 0, k = 0;
  buffer[j] = '\0';

  while(j < (int)strlen(format) && format[j] != '%') j++;
  strncpy(buffer, format, j);
  buffer[j] = '\0';
  for(int i = 0; i < List_Nbr(list); i++){
    k = j;
    j++;
    if(j < (int)strlen(format)){
      if(format[j] == '%'){
	strcat(buffer, "%");
	j++;
      }
      while(j < (int)strlen(format) && format[j] != '%') j++;
      if(k != j){
	strncpy(tmp1, &(format[k]), j-k);
	tmp1[j-k] = '\0';
	sprintf(tmp2, tmp1, *(double*)List_Pointer(list, i));
	strcat(buffer, tmp2);
      }
    }
    else
      return List_Nbr(list) - i;
  }
  if(j != (int)strlen(format))
    return -1;
  return 0;
}

void PrintParserSymbols(bool help, std::vector<std::string> &vec)
{
  if(help){
    vec.push_back("//");
    vec.push_back("// Numbers");
    vec.push_back("//");
  }
  for(std::map<std::string, gmsh_yysymbol>::iterator it = gmsh_yysymbols.begin();
      it != gmsh_yysymbols.end(); it++){
    gmsh_yysymbol s(it->second);
    std::ostringstream sstream;
    sstream.precision(12);
    sstream << it->first;
    if(s.list){
      sstream << "[] = {";
      for(unsigned int i = 0; i < s.value.size(); i++){
        if(i) sstream << ", ";
        sstream << s.value[i];
      }
      sstream << "}";
    }
    else
      sstream << " = " << s.value[0];
    sstream << ";";
    vec.push_back(sstream.str());
  }
  if(help){
    vec.push_back("//");
    vec.push_back("// Strings");
    vec.push_back("//");
  }
  for(std::map<std::string, std::vector<std::string> >::iterator it =
        gmsh_yystringsymbols.begin(); it != gmsh_yystringsymbols.end(); it++){
    if(it->second.size() == 1)
      vec.push_back(it->first + " = \"" + it->second[0] + "\";");
    else{
      std::string s = it->first + "[] = Str({";
      for(unsigned int i = 0; i < it->second.size(); i++){
        if(i) s += ", ";
        s += std::string("\"") + it->second[i] + "\"";
      }
      s += "});";
      vec.push_back(s);
    }
  }
  if (gmsh_yynamespaces.size()){
    if(help){
      vec.push_back("//");
      vec.push_back("// Structures");
      vec.push_back("//");
    }
    std::vector<std::string> strs;
    gmsh_yynamespaces.sprint(strs);
    vec.insert(vec.end(), strs.begin(), strs.end());
  }
}

fullMatrix<double> ListOfListOfDouble2Matrix(List_T *list)
{
  // Warning: this returns a fullMatrix copy, and deletes the input list
  int M = List_Nbr(list);
  int N = 0;
  for(int i = 0; i < M; i++){
    List_T *line = *(List_T**)List_Pointer_Fast(list, i);
    N = std::max(N, List_Nbr(line));
  }
  fullMatrix<double> mat(M, N);
  for(int i = 0; i < M; i++){
    List_T *line = *(List_T**)List_Pointer_Fast(list, i);
    for(int j = 0; j < List_Nbr(line); j++){
      double val;
      List_Read(line, j, &val);
      mat(i, j) = val;
    }
  }
  for(int i = 0; i < List_Nbr(list); i++)
    List_Delete(*(List_T**)List_Pointer(list, i));
  List_Delete(list);
  return mat;
}

void ListOfDouble2Vector(List_T *list, std::vector<int> &v)
{
  v.clear();
  if(!list) return;
  v.reserve(List_Nbr(list));
  for(int i = 0; i < List_Nbr(list); i++){
    double d;
    List_Read(list, i, &d);
    v.push_back((int)d);
  }
}

void ListOfDouble2Vector(List_T *list, std::vector<double> &v)
{
  v.clear();
  if(!list) return;
  v.reserve(List_Nbr(list));
  for(int i = 0; i < List_Nbr(list); i++){
    double d;
    List_Read(list, i, &d);
    v.push_back(d);
  }
}

void ListOfShapes2VectorOfPairs(List_T *list, std::vector<std::pair<int, int> > &v)
{
  for(int i = 0; i < List_Nbr(list); i++){
    Shape s;
    List_Read(list, i, &s);
    int dim = s.Type / 100 - 1;
    if(dim >= 0 && dim <= 3) v.push_back(std::pair<int, int>(dim, s.Num));
  }
}

void VectorOfPairs2ListOfShapes(const std::vector<std::pair<int, int> > &v, List_T *list)
{
  for(unsigned int i = 0; i < v.size(); i++){
    int dim = v[i].first;
    int tag = v[i].second;
    Shape s;
    s.Type = (dim == 3) ? MSH_VOLUME : (dim == 2) ? MSH_SURF_PLAN :
      (dim == 1) ? MSH_SEGM_LINE : MSH_POINT;
    s.Num = tag;
    List_Add(list, &s);
  }
}

void yyerror(const char *s)
{
  Msg::Error("'%s', line %d : %s (%s)", gmsh_yyname.c_str(), gmsh_yylineno - 1,
             s, gmsh_yytext);
  gmsh_yyerrorstate++;
}

void yymsg(int level, const char *fmt, ...)
{
  va_list args;
  char tmp[1024];

  va_start(args, fmt);
  vsprintf(tmp, fmt, args);
  va_end(args);

  if(level == 0){
    Msg::Error("'%s', line %d : %s", gmsh_yyname.c_str(), gmsh_yylineno - 1, tmp);
    gmsh_yyerrorstate++;
  }
  else if(level == 1){
    Msg::Warning("'%s', line %d : %s", gmsh_yyname.c_str(), gmsh_yylineno - 1, tmp);
  }
  else{
    Msg::Info("'%s', line %d : %s", gmsh_yyname.c_str(), gmsh_yylineno - 1, tmp);
  }
}

void addPeriodicFace(int iTarget, int iSource,
                     const std::vector<double>& affineTransform)
{
  if(GModel::current()->getOCCInternals() &&
     GModel::current()->getOCCInternals()->getChanged())
    GModel::current()->getOCCInternals()->synchronize(GModel::current());
  if(GModel::current()->getGEOInternals()->getChanged())
    GModel::current()->getGEOInternals()->synchronize(GModel::current());

  GFace *target = GModel::current()->getFaceByTag(std::abs(iTarget));
  GFace *source = GModel::current()->getFaceByTag(std::abs(iSource));
  if (!target || !source) {
    Msg::Error("Could not find edge slave %d or master %d for periodic copy",
               iTarget, iSource);
  }
  else target->setMeshMaster(source, affineTransform);
}

void addPeriodicFace(int iTarget, int iSource,
                     const std::map<int,int>& edgeCounterparts)
{
  if(GModel::current()->getOCCInternals() &&
     GModel::current()->getOCCInternals()->getChanged())
    GModel::current()->getOCCInternals()->synchronize(GModel::current());
  if(GModel::current()->getGEOInternals()->getChanged())
    GModel::current()->getGEOInternals()->synchronize(GModel::current());

  Msg::Info("Encoding periodic connection between %d and %d", iTarget, iSource);
  std::map<int,int>::const_iterator sIter = edgeCounterparts.begin();
  for (; sIter != edgeCounterparts.end(); ++sIter) {
    Msg::Info("%d - %d", sIter->first, sIter->second);
  }

  GFace *target = GModel::current()->getFaceByTag(std::abs(iTarget));
  GFace *source = GModel::current()->getFaceByTag(std::abs(iSource));
  if (!target || !source) {
    Msg::Error("Could not find surface slave %d or master %d for periodic copy",
               iTarget,iSource);
  }
  else target->setMeshMaster(source, edgeCounterparts);
}

void addPeriodicEdge(int iTarget,int iSource,
                     const std::vector<double>& affineTransform)
{
  if(GModel::current()->getOCCInternals() &&
     GModel::current()->getOCCInternals()->getChanged())
    GModel::current()->getOCCInternals()->synchronize(GModel::current());
  if(GModel::current()->getGEOInternals()->getChanged())
    GModel::current()->getGEOInternals()->synchronize(GModel::current());

  GEdge *target = GModel::current()->getEdgeByTag(std::abs(iTarget));
  GEdge *source = GModel::current()->getEdgeByTag(std::abs(iSource));
  if (!target || !source)
    Msg::Error("Could not find surface %d or %d for periodic copy",
               iTarget,iSource);
  if (affineTransform.size() >= 12) {
    target->setMeshMaster(source, affineTransform);
  }
  else {
    target->setMeshMaster(source, iSource * iTarget < 0 ? -1 : 1);
  }
}

void computeAffineTransformation(SPoint3& origin, SPoint3& axis,
                                 double angle, SPoint3& translation,
                                 std::vector<double>& tfo)
{
  tfo.resize(16,0.0);

  double ca = cos(angle);
  double sa = sin(angle);

  double ux = axis.x();
  double uy = axis.y();
  double uz = axis.z();

  tfo.resize(16);

  tfo[0*4+0] = ca + ux*ux*(1.-ca);
  tfo[0*4+1] = ux*uy*(1.-ca) - uz * sa;
  tfo[0*4+2] = ux*uz*(1.-ca) + uy * sa;

  tfo[1*4+0] = ux*uy*(1.-ca) + uz * sa;
  tfo[1*4+1] = ca + uy*uy*(1.-ca);
  tfo[1*4+2] = uy*uz*(1.-ca) - ux * sa;

  tfo[2*4+0] = ux*uz*(1.-ca) - uy * sa;
  tfo[2*4+1] = uy*uz*(1.-ca) + ux * sa;
  tfo[2*4+2] = ca + uz*uz*(1.-ca);

  int idx = 0;
  for (size_t i = 0; i < 3; i++,idx++) {
    int tIdx = i*4+3;
    tfo[tIdx] = origin[i] + translation[i];
    for (int j = 0; j < 3; j++,idx++) tfo[tIdx] -= tfo[idx] * origin[j];
  }

  for (int i = 0; i < 4; i++) tfo[12+i] = 0;
  tfo[15] = 1;
}

void addEmbedded(int dim, std::vector<int> tags, int dim2, int tag2)
{
  if(GModel::current()->getOCCInternals() &&
     GModel::current()->getOCCInternals()->getChanged())
    GModel::current()->getOCCInternals()->synchronize(GModel::current());
  if(GModel::current()->getGEOInternals()->getChanged())
    GModel::current()->getGEOInternals()->synchronize(GModel::current());

  if(dim2 == 2){
    GFace *gf = GModel::current()->getFaceByTag(tag2);
    if(!gf){
      yymsg(0, "Unknown model face with tag %d", tag2);
      return;
    }
    for(unsigned int i = 0; i < tags.size(); i++){
      if(dim == 0){
        GVertex *gv = GModel::current()->getVertexByTag(tags[i]);
        if(gv)
          gf->addEmbeddedVertex(gv);
        else
          yymsg(0, "Unknown model vertex %d", tags[i]);
      }
      else if(dim == 1){
        GEdge *ge = GModel::current()->getEdgeByTag(tags[i]);
        if(ge)
          gf->addEmbeddedEdge(ge);
        else
          yymsg(0, "Unknown model edge %d", tags[i]);
      }
    }
  }
  else if(dim2 == 3){
    GRegion *gr = GModel::current()->getRegionByTag(tag2);
    if(!gr){
      yymsg(0, "Unknown model region with tag %d", tag2);
      return;
    }
    for(unsigned int i = 0; i < tags.size(); i++){
      if(dim == 0){
        GVertex *gv = GModel::current()->getVertexByTag(tags[i]);
        if(gv)
          gr->addEmbeddedVertex(gv);
        else
          yymsg(0, "Unknown model vertex with tag %d", tags[i]);
      }
      else if(dim == 1){
        GEdge *ge = GModel::current()->getEdgeByTag(tags[i]);
        if(ge)
          gr->addEmbeddedEdge(ge);
        else
          yymsg(0, "Unknown model edge with tag %d", tags[i]);
      }
      else if(dim == 2){
        GFace *gf = GModel::current()->getFaceByTag(tags[i]);
        if(gf)
          gr->addEmbeddedFace(gf);
        else
          yymsg(0, "Unknown model face with tag %d", tags[i]);
      }
    }
  }
}

void getAllElementaryTags(int dim, List_T *out)
{
  if(GModel::current()->getOCCInternals() &&
     GModel::current()->getOCCInternals()->getChanged())
    GModel::current()->getOCCInternals()->synchronize(GModel::current());
  if(GModel::current()->getGEOInternals()->getChanged())
    GModel::current()->getGEOInternals()->synchronize(GModel::current());

  std::vector<GEntity*> entities;
  GModel::current()->getEntities(entities, dim);
  for(unsigned int i = 0; i < entities.size(); i++){
    double tag = entities[i]->tag();
    List_Add(out, &tag);
  }
}

void getAllPhysicalTags(int dim, List_T *out)
{
  if(GModel::current()->getGEOInternals()->getChanged())
    GModel::current()->getGEOInternals()->synchronize(GModel::current());

  std::map<int, std::vector<GEntity*> > groups;
  GModel::current()->getPhysicalGroups(dim, groups);
  for(std::map<int, std::vector<GEntity*> >::iterator it = groups.begin();
      it != groups.end(); it++){
    double d = it->first;
    List_Add(out, &d);
  }
}

void getElementaryTagsForPhysicalGroups(int dim, List_T *in, List_T *out)
{
  if(GModel::current()->getGEOInternals()->getChanged())
    GModel::current()->getGEOInternals()->synchronize(GModel::current());

  std::map<int, std::vector<GEntity*> > groups;
  GModel::current()->getPhysicalGroups(dim, groups);
  for(int i = 0; i < List_Nbr(in); i++){
    double num;
    List_Read(in, i, &num);
    std::map<int, std::vector<GEntity*> >::iterator it = groups.find(num);
    if(it != groups.end()){
      for(unsigned j = 0; j < it->second.size(); j++){
        double d = it->second[j]->tag();
        List_Add(out, &d);
      }
    }
  }
}

void getElementaryTagsInBoundingBox(int dim, double x1, double y1, double z1,
                                    double x2, double y2, double z2, List_T *out)
{
  if(GModel::current()->getOCCInternals() &&
     GModel::current()->getOCCInternals()->getChanged())
    GModel::current()->getOCCInternals()->synchronize(GModel::current());
  if(GModel::current()->getGEOInternals()->getChanged())
    GModel::current()->getGEOInternals()->synchronize(GModel::current());

  SBoundingBox3d box(x1, y1, z1, x2, y2, z2);
  std::vector<GEntity*> entities;
  GModel::current()->getEntitiesInBox(entities, box, dim);
  for(unsigned int i = 0; i < entities.size(); i++){
    double d = entities[i]->tag();
    List_Add(out, &d);
  }
}

void setVisibility(int dim, int visible, bool recursive)
{
  if(GModel::current()->getOCCInternals() &&
     GModel::current()->getOCCInternals()->getChanged())
    GModel::current()->getOCCInternals()->synchronize(GModel::current());
  if(GModel::current()->getGEOInternals()->getChanged())
    GModel::current()->getGEOInternals()->synchronize(GModel::current());

  std::vector<GEntity*> entities;
  GModel::current()->getEntities(entities, dim);
  for(unsigned int i = 0; i < entities.size(); i++){
    entities[i]->setVisibility(visible);
  }
}

void setVisibility(const std::vector<std::pair<int, int> > &dimTags,
                   int visible, bool recursive)
{
  if(GModel::current()->getOCCInternals() &&
     GModel::current()->getOCCInternals()->getChanged())
    GModel::current()->getOCCInternals()->synchronize(GModel::current());
  if(GModel::current()->getGEOInternals()->getChanged())
    GModel::current()->getGEOInternals()->synchronize(GModel::current());

  for(unsigned int i = 0; i < dimTags.size(); i++){
    GEntity *ge = GModel::current()->getEntityByTag
      (dimTags[i].first, std::abs(dimTags[i].second));
    if(ge) ge->setVisibility(visible, recursive);
  }
}

void setColor(const std::vector<std::pair<int, int> > &dimTags,
              unsigned int val, bool recursive)
{
  if(GModel::current()->getOCCInternals() &&
     GModel::current()->getOCCInternals()->getChanged())
    GModel::current()->getOCCInternals()->synchronize(GModel::current());
  if(GModel::current()->getGEOInternals()->getChanged())
    GModel::current()->getGEOInternals()->synchronize(GModel::current());

  for(unsigned int i = 0; i < dimTags.size(); i++){
    GEntity *ge = GModel::current()->getEntityByTag
      (dimTags[i].first, std::abs(dimTags[i].second));
    if(ge) ge->setColor(val, recursive);
  }
}

double treat_Struct_FullName_Float
(char* c1, char* c2, int type_var, int index, double val_default, int type_treat)
{
  double out;
  if(!c1 && gmsh_yysymbols.count(c2)){
    if (type_treat == 1) out = 1.; // Exists (type_treat == 1)
    else { // Get (0) or GetForced (2)
      if (type_var == 1) {
        gmsh_yysymbol &s(gmsh_yysymbols[c2]);
        if(s.value.empty()){
          out = val_default;
          if (type_treat == 0) yymsg(0, "Uninitialized variable '%s'", c2);
        }
        else
          out = s.value[0];
      }
      else if (type_var == 2) {
        gmsh_yysymbol &s(gmsh_yysymbols[c2]);
        if((int)s.value.size() < index + 1){
          out = val_default;
          if (type_treat == 0) yymsg(0, "Uninitialized variable '%s[%d]'", c2, index);
        }
        else
          out = s.value[index];
      }
      else {
        out = val_default;
      }
    }
  }
  else if(!c1 && type_treat == 1 && gmsh_yystringsymbols.count(c2)) {
    out = 1.;
  }
  else{
    if (type_var == 1) {
      std::string struct_namespace(c1? c1 : std::string("")), struct_name(c2);
      if(gmsh_yynamespaces.getTag(struct_namespace, struct_name, out)) {
        out = val_default;
        if (type_treat == 0) yymsg(0, "Unknown variable '%s'", struct_name.c_str());
      }
    }
    else {
      out = val_default;
      if (type_treat == 0) yymsg(0, "Unknown variable '%s(.)'", c2);
    }
  }
  Free(c1); Free(c2);
  return out;
}

double treat_Struct_FullName_dot_tSTRING_Float
(char* c1, char* c2, char* c3, int index, double val_default, int type_treat)
{
  double out;
  std::string struct_namespace(c1? c1 : std::string("")), struct_name(c2);
  std::string key_member(c3);
  switch (gmsh_yynamespaces.getMember
          (struct_namespace, struct_name, key_member, out, index)) {
  case 0:
    if (type_treat == 1) out = 1.; // Exists (type_treat == 1)
    break;
  case 1:
    if (!NumberOption(GMSH_GET, c2, 0, c3, out, type_treat==0))
      out = val_default;
    break;
  case 2:
    if (type_treat != 0) {
      const std::string * out_dummy = NULL;
      out = (gmsh_yynamespaces.getMember
             (struct_namespace, struct_name, key_member, out_dummy))?
        val_default : 1.;
    }
    else {
      out = val_default;
      if (type_treat == 0)
        yymsg(0, "Unknown member '%s' of Struct %s", c3, struct_name.c_str());
    }
    break;
  case 3:
    out = val_default;
    if (type_treat == 0)
      yymsg(0, "Index %d out of range", index);
    break;
  }
  Free(c1); Free(c2);
  if (flag_tSTRING_alloc) Free(c3);
  return out;
}

List_T * treat_Struct_FullName_dot_tSTRING_ListOfFloat
(char* c1, char* c2, char* c3)
{
  List_T * out, * val_default = NULL;
  const std::vector<double> * out_vector; double val_;
  std::string struct_namespace(c1? c1 : std::string("")), struct_name(c2);
  std::string key_member(c3);
  switch (gmsh_yynamespaces.getMember_Vector
          (struct_namespace, struct_name, key_member, out_vector)) {
  case 0:
    out = List_Create(out_vector->size(), 1, sizeof(double));
    for(unsigned int i = 0; i < out_vector->size(); i++) {
      val_ = out_vector->at(i);
      List_Add(out, &val_);
    }
    break;
  case 1:
    yymsg(0, "Unknown Struct: %s", struct_name.c_str());
    out = val_default;
    break;
  case 2:
    out = val_default;
    yymsg(0, "Unknown member '%s' of Struct %s", c3, struct_name.c_str());
    break;
  }
  Free(c1); Free(c2);
  if (flag_tSTRING_alloc) Free(c3);
  return out;
}

int treat_Struct_FullName_dot_tSTRING_Float_getDim
(char* c1, char* c2, char* c3)
{
  int out;
  std::string struct_namespace(c1? c1 : std::string("")), struct_name(c2);
  std::string key_member(c3);
  switch (gmsh_yynamespaces.getMember_Dim
          (struct_namespace, struct_name, key_member, out)) {
  case 0:
    break;
  case 1:
    out = 0;
    break;
  case 2:
    out = 0;
    yymsg(0, "Unknown member '%s' of Struct %s", c3, struct_name.c_str());
    break;
  }
  Free(c1); Free(c2);
  if (flag_tSTRING_alloc) Free(c3);
  return out;
}

char * treat_Struct_FullName_String
(char* c1, char* c2, int type_var, int index, char * val_default, int type_treat)
{
  std::string string_default(val_default? val_default : std::string(""));
  const std::string * out = NULL;
  std::string out_tmp;
  if(!c1 && gmsh_yystringsymbols.count(c2)){
    // Get (0) or GetForced (2)
    if(gmsh_yystringsymbols[c2].size() != 1){
      out = &string_default;
      if (type_treat == 0)
        yymsg(0, "Expected single valued string variable '%s'", c2);
    }
    else {
      out_tmp = gmsh_yystringsymbols[c2][0];
      out = &out_tmp;
    }
  }
  else{
    out = &string_default;
    if (type_treat == 0) yymsg(0, "Unknown string variable '%s'", c2);
  }
  char* out_c = (char*)Malloc((out->size() + 1) * sizeof(char));
  strcpy(out_c, out->c_str());
  Free(c1); Free(c2);
  return out_c;
}

char* treat_Struct_FullName_dot_tSTRING_String
(char* c1, char* c2, char* c3, int index, char * val_default, int type_treat)
{
  std::string string_default(val_default? val_default : std::string(""));
  const std::string * out = NULL;
  std::string out_tmp; // PD: we should avoid that -> StringOption() to be changed
  std::string struct_namespace(c1? c1 : std::string("")), struct_name(c2);
  std::string key_member(c3);
  switch (gmsh_yynamespaces.getMember
          (struct_namespace, struct_name, key_member, out, index)) {
  case 0:
    break;
  case 1:
    if (StringOption(GMSH_GET, c2, 0, c3, out_tmp, type_treat==0))
      out = &out_tmp;
    else
      out = &string_default;
    break;
  case 2:
    out = &string_default;
    if (type_treat == 0)
      yymsg(0, "Unknown member '%s' of Struct %s", c3, struct_name.c_str());
    break;
  case 3:
    out = &string_default;
    if (type_treat == 0)
      yymsg(0, "Index %d out of range", index);
    break;
  }
  char* out_c = (char*)Malloc((out->size() + 1) * sizeof(char));
  strcpy(out_c, out->c_str());
  Free(c1); Free(c2);
  if (flag_tSTRING_alloc) Free(c3);
  return out_c;
}

List_T * treat_Struct_FullName_dot_tSTRING_ListOfString
(char* c1, char* c2, char* c3)
{
  List_T * out, * val_default = NULL;
  const std::vector<std::string> * out_vector; char * val_;
  std::string struct_namespace(c1? c1 : std::string("")), struct_name(c2);
  std::string key_member(c3);
  switch (gmsh_yynamespaces.getMember_Vector
          (struct_namespace, struct_name, key_member, out_vector)) {
  case 0:
    out = List_Create(out_vector->size(), 1, sizeof(char *));
    for(unsigned int i = 0; i < out_vector->size(); i++) {
      val_ = strsave((char*)out_vector->at(i).c_str());
      List_Add(out, &val_);
    }
    break;
  case 1:
    yymsg(0, "Unknown Struct: %s", struct_name.c_str());
    out = val_default;
    break;
  case 2:
    out = val_default;
    yymsg(0, "Unknown member '%s' of Struct %s", c3, struct_name.c_str());
    break;
  }
  Free(c1); Free(c2);
  if (flag_tSTRING_alloc) Free(c3);
  return out;
}

