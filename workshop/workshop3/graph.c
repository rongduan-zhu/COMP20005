#include <stdio.h>

#define MAX 70
#define MIN 1

int main(int argc, char const *argv[])
{
    int input, i;
    printf("Enter numbers: ");

    while (scanf("%d", &input) == 1) {
        if (input < MIN || input > MAX) {
            printf("Number must be between 1 and 70 inclusive");
            continue;
        }

        printf("%d |", input);
        for (i = 0; i < input; ++i) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
