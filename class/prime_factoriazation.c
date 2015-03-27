#include <stdio.h>
#include <stdlib.h>

int print_prime_factorization(n) {
    int smallest_prime;

    if (n <= 1) {
        return 0;
    }

    for (smallest_prime = 2; n % smallest_prime; ++smallest_prime);

    printf("%d ", smallest_prime);

    return 1 + print_prime_factorization(n / smallest_prime);
}

int main(int argc, char const *argv[])
{
    int n;
    printf("Please enter a number: ");

    if (scanf("%d", &n) != 1) {
        printf("Invalid input.\n");
        exit(EXIT_FAILURE);
    }

    printf("The prime factorization of %d is: ", n);
    print_prime_factorization(n);
    printf("\n");
    return 0;
}
