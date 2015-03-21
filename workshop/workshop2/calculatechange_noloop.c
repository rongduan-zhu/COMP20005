#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int input;
    int reminder;

    printf("Please enter the amount (between 0 - 99 inclusive): ");
    if (!scanf("%d", &input)) {
        printf("Invalid input.\n");
        exit(EXIT_FAILURE);
    }

    if (input < 0 || input > 99) {
        printf("%d is not within the range of 0 to 99 inclusive\n", input);
        exit(EXIT_FAILURE);
    }

    printf("The amount required to make %d cents are: ", input);
    if (input > 20) {
        reminder = input / 20;
        input /= 20;
        printf("%*d ", reminder, );
    }

    return 0;
}
