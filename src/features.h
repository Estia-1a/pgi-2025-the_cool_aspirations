#ifndef FEATURES_H
#define FEATURES_H


void helloWorld();

void first_pixel (char *source_path);

void min_pixel(char* filename);

void max_pixel(char* filename);

void min_component(char* filename, int t);

void max_component(char* filename, int t);

void color_gray(char *source_path);


void color_in_red (char *source_path);

void color_in_blue(char *source_path);

void color_in_gray_luminance(char *source_path);

void color_in_green(char *source_path);

void color_invert(char *source_path);

void mirror_total(char *source_path);

void rotate_cw(char *source_path);

#endif
