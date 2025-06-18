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

    unsigned char *data;
    int width, height, channels;
    int read_image_data(const char *filename, unsigned char **data, int *width, int *height, int *channel_count);
    int R = data[0];
    int G = data[1];
    int B = data[2];
    printf ("first_pixel: %d, %d, %d\n", R, G, B);
}

void min_pixel(const char*filename){
    Image*img= read_image_data(filename);
    int min_val=767;
    int min_x = -1;
    int min_y = -1;
    Pixel min_p = {0};

    for (int y=0; y < img->height; y++) {
        for (int x=0; x<img ->width; x++){
            Pixel p= img->data [y * img->width + x];
            int sum = p.r+ p.g+p.b; 
            if(sum< min_val){
                min_val= sum;
                min_p = p;
                min_x = x;
                min_y = y;
            }
            }
        }
        printf("min_pixel (%d, %d): %d, %d, %d/n", min_x, min_y, min_p.r, min_p.g,minp.b);

        free(img->data);
        free(img);
    }
}
