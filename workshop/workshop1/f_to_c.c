#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    double celcius, fahrenheit;

    printf("Please enter the Fahrenheit: ");
    if (scanf("%lf", &fahrenheit) != 1) {
        printf("Invalid input\n");
        exit(1);
    }

    celcius = (fahrenheit - 32) * 5 / 9;

    printf("Celcius is: %.2f\n", celcius);

    return 0;
}
