#include <estia-image.h>
#include <stdlib.h>
#include <stdio.h>

#include "utils.h"

/**
 * @brief Here, you have to define functions of the pixel struct : getPixel and setPixel.
 * 
 */
pixelRGB* getPixel(unsigned char* data, int width, int height, int channels, int x, int y) {
    if (!data || x >= width || y >= height || x<0 || y<0) return NULL;

    int index = (y * width + x) * channels;
    pixelRGB* px = malloc(sizeof(pixelRGB));

    px->R = data[index];
    px ->G = channels >= 2 ? data[index + 1] : 0;
    px ->G = channels >= 3 ? data[index + 2] : 0;

    return px;
}
