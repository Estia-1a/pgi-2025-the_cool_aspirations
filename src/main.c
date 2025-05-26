// src/main.c
#include <stdio.h>
#include <string.h>
#include "features.h"

int main(int argc, char *argv[]) {
    if (argc != 3) {
        fprintf(stderr, "Usage : %s dimension <chemin_vers_image>\n", argv[0]);
        return 1;
    }

    if (strcmp(argv[1], "dimension") == 0) {
        dimension(argv[2]);
    } else {
        fprintf(stderr, "Commande inconnue : %s\n", argv[1]);
        return 1;
    }

    return 0;
}