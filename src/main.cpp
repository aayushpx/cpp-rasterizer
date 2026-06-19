#include <iostream>
#include <fstream>

#include "pixel.h"
#include "renderer.h"

Pixel picture[600][400];

int main() {

  mandelbrot();

  std::fstream myfile;
  myfile.open("mandelbrot.ppm",
              std::fstream::out);

  myfile << "P3\n";
  myfile << "# mandelbrot.ppm\n";
  myfile << "600 400\n";
  myfile << "256\n";

  for (int y = 0; y < 400; y++) {
    for (int x = 0; x < 600; x++) {
      picture[x][y].dataToFile(myfile);
    }

    myfile << std::endl;
  }

  myfile.close();

  return 0;
}
