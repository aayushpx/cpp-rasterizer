#include "renderer.h"

extern Pixel picture[600][400];

void fillRectangle(int x1, int y1,
                   int x2, int y2,
                   int r, int g, int b) {

  for (int y = y1; y < y2; y++) {
    for (int x = x1; x < x2; x++) {

      if (x >= 0 && x < 600 && y >= 0 && y < 400) {
        picture[x][y].loadData(r, g, b);

      }
    }
  }
}

void colombiaFlag() {

    fillRectangle(0, 0, 600, 200,
                  255, 205, 0);

    fillRectangle(0, 200, 600, 300,
                  0, 48, 135);

    fillRectangle(0, 300, 600, 400,
                  200, 16, 46);
}

void mandelbrot() {
  const int maxIter = 100;

  for (int py = 0; py < 400; py++) {
    for (int px = 0; px < 600; px++) {

      double cx = (px - 300.0) * 3.5 / 600.0 - 0.5;
      double cy = (py - 200.0) * 2.0 / 400.0;

      double x = 0.0;
      double y = 0.0;

      int iter = 0;

      while (x*x + y*y <= 4.0 && iter < maxIter) {
        double xtemp = x*x - y*y + cx;
        y = 2*x*y + cy;
        x = xtemp;
        iter++;
      }

      if (iter == maxIter) {
        picture[px][py].loadData(0, 0, 0);
      } else {
        int colour = iter * 255 / maxIter;
        picture[px][py].loadData(colour, colour, 255);
      }
    }
  }
}
