# C++ Software Rasterizer

### Mandelbrot Set
![Mandelbrot Set](images/mandelbrot.png)

A CPU-based software rasterizer that generates .ppm images from scratch using raw pixel manipulation in C++.

---

## How it works

A screen is made of pixels, where each pixel stores an RGB colour.

Images are constructed by filling a 2D grid of pixels (framebuffer).

---

## Pixel Coordinates

Screens use a 2D coordinate system:

- x increases → right  
- y increases → down  

<img src="images/xy_p.png" width="550">

Each (x, y) maps directly to a pixel in memory.

---

## RGB Colour Model

Each pixel is:

R G B

Each channel ranges:
- 0 = OFF  
- 255 = FULL INTENSITY  

Examples:
- Black → 0 0 0  
- White → 255 255 255  
- Red → 255 0 0  

Reference: https://en.wikipedia.org/wiki/RGB_color_model

---

## PPM Format

Images are stored as plain text `.ppm` files:

```text
P3
# image.ppm
600 400
256
```

Followed by RGB values for each pixel.

More info: https://en.wikipedia.org/wiki/Netpbm

---

## What this project includes

- Pixel framebuffer in C++
- Manual RGB image generation
- Rectangle filling
- Flag rendering using layered regions
- Mandelbrot fractal generation
- Export to `.ppm` format

---

## Example Output

Colombia Flag generated using pure C++:

![Colombia Flag](images/colombia_flag.png)

---

## Build & Run

```bash
g++ main.cpp pixel.cpp renderer.cpp -o raster
./raster
xdg-open output.ppm
```

