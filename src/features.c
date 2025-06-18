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


void min_pixel(char *source_path){
    int width = 0, height = 0, channels;
    int min = 900, xmin = 0, ymin = 0, rmin = 0, gmin = 0, bmin = 0;
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

            if (somme < min) {
                min = somme;
                xmin = x;
                ymin = y;
                rmin = r;
                gmin = g;
                bmin = b;
            }
        }
    }

    printf("min_pixel (%d, %d): %d, %d, %d\n", xmin, ymin, rmin, gmin, bmin);

    free(data);  // Libère la mémoire allouée
}
