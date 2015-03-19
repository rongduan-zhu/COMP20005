#include <stdio.h>
#include <stdlib.h>

#define ARR_SIZE 6

int main(int argc, char *argv[]) {
    int arr[ARR_SIZE] = {50, 20, 10, 5, 2, 1};
    int index = 0;
    int input_amount;

    printf("Please enter the amount (between 0 - 99 inclusive): ");
    if (!scanf("%d", &input_amount)) {
        printf("Invalid input.\n");
        exit(EXIT_FAILURE);
    }

    if (input_amount < 0 || input_amount > 99) {
        printf("%d is not within the range of 0 to 99 inclusive\n", input_amount);
        exit(EXIT_FAILURE);
    }

    printf("The amount required to make %d cents are: ", input_amount);
    while (input_amount) {
        if (input_amount - arr[index] >= 0) {
            printf("%d ", arr[index]);
            input_amount -= arr[index];
        } else {
            index += 1;
        }
    }

    printf("\n");

    return 0;
}
