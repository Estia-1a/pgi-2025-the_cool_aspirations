#include <estia-image.h>
#include <stdio.h>
#include <stdlib.h>

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
    int resultat = read_image_data(source_path, &data, &width, &height, &channels);
    if (resultat){
        int R = data[0];
        int G = data[1];
        int B = data[2];
        printf ("first_pixel: %d, %d, %d\n", R, G, B);
    }
}

void max_pixel(char *source_path){
    int width = 0, height = 0, channels;
    int max = 0, xmax = 0, ymax = 0, rmax = 0, gmax = 0, bmax = 0;
    unsigned char *data;

    int resultat = read_image_data(source_path, &data, &width, &height, &channels);
    if (!resultat) {
        printf("Erreur de lecture...\n");
        return;
    }

    // On parcourt tous les pixels dans les limites correctes
    for (int x = 0; x < width;  x++) {
        for (int y = 0; y < height; y++) {
            int index = (y * width + x) * channels;
            int r = data[index];
            int g = data[index + 1];
            int b = data[index + 2];
            int somme = r + g + b;

            if (somme > max) {
                max = somme;
                xmax = x;
                ymax = y;
                rmax = r;
                gmax = g;
                bmax = b;
            }
        }
    }

    printf("max_pixel (%d, %d): %d, %d, %d\n",
           xmax, ymax, rmax, gmax, bmax);

    free(data);  // Libère la mémoire allouée
}

/*void min_pixel(const char*filename){
    Image* img= read_image_data(filename);
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
}*/
