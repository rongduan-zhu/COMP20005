#include <stdio.h>

#include "print_name.c"

#define CHAR_ARR_SIZE 64

void get_name(char *name) {
    printf("Please enter your name: ");
    scanf("%s", name);
}
