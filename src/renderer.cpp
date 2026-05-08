#include "renderer.h"

void fillRectangle(int x1, int y1,
                   int x2, int y2,
                   int r, int g, int b) {

    for (int y = y1; y < y2; y++) {
        for (int x = x1; x < x2; x++) {
            picture[x][y].loadData(r, g, b);
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
