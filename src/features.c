#include <estia-image.h>
#include <stdio.h>

#include "features.h"
#include "utils.h"
#include <stdlib.h>

/**
 * @brief Here, you have to code features of the project.
 * Do not forget to commit regurlarly your changes.
 * Your commit messages must contain "#n" with: n = number of the corresponding feature issue.
 * When the feature is totally implemented, your commit message must contain "close #n".
 */

void helloWorld() {
    printf("Hello World !");
}
void tenth_pixel(char *source_path){
    unsigned char *data = NULL;
    int width = 0, height = 0, channels = 0;

    if (read_image_data(source_path, &data, &width, &height, &channels) != 0) {
        fprintf(stderr, "Erreur : impossible de lire '%s'\n", source_path);
        return;
    }

    if (width < 10) {
        fprintf(stderr, "Erreur : l'image doit avoir au moins 10 pixels de large (ici %d)\n", width);
        free(data);
        return;
    }

    unsigned long idx = 9UL * channels;

    unsigned int R = data[27];
    unsigned int G = data[28];
    unsigned int B = data[29];

    printf("tenth_pixel: %u, %u, %u\n", R, G, B);

    free(data);
}

