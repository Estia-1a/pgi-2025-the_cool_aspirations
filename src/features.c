#include <estia-image.h>
#include <stdio.h>

#include "features.h"
#include "utils.h"

/**
 * @brief Here, you have to code features of the project.
 * Do not forget to commit regurlarly your changes.
 * Your commit messages must contain "#n" with: n = number of the corresponding feature issue.
 * When the feature is totally implemented, your commit message must contain "close #n".
 */

void helloWorld() {
    printf("Hello World !");
}

void first_pixel(char *source_path){
    ;
    unsigned char *data;
    int width, height, channels;
    int read_image_data(const char *filename, unsigned char **data, int *width, int *height, int *channel_count);
    int R = data[0];
    int G = data[1];
    int B = data[2];
    printf ("first_pixel: %d, %d, %d\n", R, G, B);
}

voidsecond_line(char *source_path){
    unsigned char *data;
    int width, height, channels;
    int index = width * channels;
    int R = data[index + 0];
    int G = data[index + 1];
    int B = data[index + 2];

    printf("second_line: %d, %d, %d\n", R, G, B,);
}