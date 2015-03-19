#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

#define CELCIUS 'c'
#define FAHRENHEIT 'f'

double c_to_f(double c) {
    return c * 9.0 / 5.0 + 32.0;
}

double f_to_c(double f) {
    return (f - 32.0) * 5.0 / 9.0;
}

int main(int argc, char *argv[]) {
    double temp;
    char unit;

    printf("Please enter a temperature: ");
    if (scanf("%lf%c", &temp, &unit) != 2) {
        printf("Invalid input.\n");
        exit(EXIT_FAILURE);
    }

    if (tolower(unit) == 'c') {
        printf("The temperature %.1f%c converts to %.1fF\n", temp, toupper(unit), c_to_f(temp));
    } else if (tolower(unit) == 'f') {
        printf("The temperature %.1f%c converts to %.1fC\n", temp, toupper(unit), f_to_c(temp));
    } else {
        printf("Invalid input.\n");
    }

    return 0;
}
