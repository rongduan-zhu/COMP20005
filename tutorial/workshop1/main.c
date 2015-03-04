#include <stdio.h>

#include "print_name.h"
#include "incorrect_import.h"

#ifndef CHAR_ARR_SIZE
    #define CHAR_ARR_SIZE 64
#endif

void get_name(char *);
void print_name(char*);

int main(int argc, char *argv[]) {
    printf("Hello, World!\n");

    char name[CHAR_ARR_SIZE];

    get_name(name);
    print_name(name);

    return 0;
}
