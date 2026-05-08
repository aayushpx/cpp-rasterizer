#include "pixel.h"

void Pixel::loadData(int v1, int v2, int v3) {
    red = v1;
    green = v2;
    blue = v3;
}

void Pixel::dataToFile(std::fstream &ppmfile) {
    ppmfile << red << " "
            << green << " "
            << blue << " ";
}

int Pixel::getR() {
    return red;
}

int Pixel::getG() {
    return green;
}

int Pixel::getB() {
    return blue;
}
