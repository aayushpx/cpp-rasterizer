#ifndef PIXEL_H
#define PIXEL_H

#include <fstream>

class Pixel {
private:
    int red, green, blue;

public:
    void loadData(int v1, int v2, int v3);
    void dataToFile(std::fstream &ppmfile);

    int getR();
    int getG();
    int getB();
};

#endif
