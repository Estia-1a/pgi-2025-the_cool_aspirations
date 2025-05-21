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

void dimension(char *source_path) {
    unsigned char *data = NULL;
    int width = 0, height = 0, channels = 0;

    // read_image_data renvoie 0 en cas de succès (défini dans estia-image.h)
    if (read_image_data(source_path, &data, &width, &height, &channels) != 0) {
        fprintf(stderr, "Erreur : impossible de lire l'image \"%s\"\n", source_path);
        return;
    }

    // Affichage du résultat
    printf("dimension: %d, %d\n", width, height);

    // Libération de la mémoire allouée par read_image_data
    free(data);
}