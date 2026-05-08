#ifndef RENDERER_H
#define RENDERER_H

#include "pixel.h"

extern Pixel picture[600][400];

void fillRectangle(int x1, int y1,
                   int x2, int y2,
                   int r, int g, int b);

void colombiaFlag();

#endif
