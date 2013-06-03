#ifndef _DRAW_CONTEXT_FLTK_CAIRO_H_
#define _DRAW_CONTEXT_FLTK_CAIRO_H_
#include "GmshConfig.h"
#if defined(HAVE_CAIRO)
#include "drawContextFltk.h"
typedef struct _cairo_surface cairo_surface_t;
typedef struct _cairo cairo_t;
class drawContextFltkCairo : public drawContextFltk {
  cairo_surface_t *_surface;
  cairo_t *_cr;
  unsigned int _textureId;
  int _currentFontId;
  int _currentFontSize;
  void _resizeSurface(int w, int h);
 public:
  void draw();
  drawContextFltkCairo();
  ~drawContextFltkCairo();
  double getStringWidth(const char *str);
  //int getStringHeight();
  //int getStringDescent();
  void drawString(const char *str);
  void setFont(int fontid, int fontsize);
};
#endif
#endif