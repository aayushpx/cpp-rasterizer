# C++ Software Rasterizer

A low-level 2D graphics project exploring how images are generated programmatically using pixels, RGB colour values, and the Portable Pixel Map (PPM) image format.

This project focuses on building images from scratch **without external graphics libraries**, using only standard C++ and direct pixel manipulation.

---

## Screens and Pixels

A screen consists of thousands (or millions) of tiny picture elements called **pixels**.

The origin of the term *picture element* is thought to trace back to Germany in 1880 with the word *Bildpunkt* (“picture point”), which later translated into English as *picture element*.

Each pixel produces one colour. An image is therefore created from a large collection of pixels, each set to a specific colour.

The number of pixels used in a display is called the **resolution**.

For example:

```txt
1920 × 1080
```

means:

* 1920 pixels across the screen
* 1080 pixels down the screen

---

## 2D Screen Coordinates

Most displays use a two-dimensional `(x, y)` coordinate system.

Unlike a traditional Cartesian plane:

* the `x` axis increases to the right
* the `y` axis increases *downwards*

This means screen-space coordinates behave differently from standard mathematical graphs.

<!-- Insert coordinate system image here -->

---

## The RGB Colour Model

Each pixel is composed of three overlapping light channels:

* Red
* Green
* Blue

Each channel has an intensity ranging from:

```txt
0 → OFF
255 → Full intensity
```

By combining different intensity values, a large range of colours can be produced.

### Examples

```txt
0   0   0     = Black
255 255 255   = White
255 0   0     = Red
0   255 0     = Green
0   0   255   = Blue
```

---

## The PPM File Format

This project uses the **Portable Pixel Map (PPM)** format because it is simple and programmer-friendly.

A `.ppm` file stores raw RGB pixel data as plain ASCII text.

Example header:

```txt
P3
# myimage.ppm
500 300
256
```

### Header Breakdown

1. File format identifier

```txt
P1 = portable bitmap ASCII
P2 = portable greymap ASCII
P3 = portable pixelmap ASCII
P4 = portable bitmap rawbits
P5 = portable greymap rawbits
P6 = portable pixelmap rawbits
```

This project uses:

```txt
P3
```

which stores RGB values as ASCII text.

---

2. Filename comment

```txt
# myimage.ppm
```

---

3. Image resolution

```txt
500 300
```

meaning:

* 500 pixels wide
* 300 pixels tall

---

4. Intensity range

```txt
256
```

representing intensity values from:

```txt
0 → 255
```

for each RGB channel.

---

## Current Experiments

* Colombia flag renderer
* Rectangle rasterization
* Pixel framebuffer manipulation
* RGB colour experimentation

---

## Example Output

## Colombia Flag
![Columbia Flag](images/colombia_flag.png)

---

## Build and Run

Compile:

```bash
g++ src/colombia_flag.cpp -o raster
```

Run:

```bash
./raster
```

Open generated image:

```bash
xdg-open colombia_flag.ppm
```

---

## Goals

* Understand low-level raster graphics fundamentals
* Explore image generation from raw pixel data
* Build reusable rendering primitives
* Experiment with software-based rendering techniques

---

This is a learning project exploring the foundations of computer graphics and rasterization in C++.

