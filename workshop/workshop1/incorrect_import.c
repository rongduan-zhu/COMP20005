#include <stdio.h>

#include "incorrect_import.h"

#define CHAR_ARR_SIZE 64

void get_name(char *name) {
    printf("Please enter your name: ");
    scanf("%s", name);
}
