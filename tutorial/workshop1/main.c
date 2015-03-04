#include <stdio.h>

#include "print_name.c"
#include "incorrect_import.c"

int main(int argc, char *argv[]) {
    printf("Hello, World!\n");

    char name[CHAR_ARR_SIZE];

    get_name(name);
    print_name(name);

    return 0;
}
