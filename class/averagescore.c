#include <stdio.h>
#include <stdlib.h>

#define MIN_SCORE 0.0
#define MAX_SCORE 10.0
#define MIN_NUM_OF_SCORES 3

int main(int argc, char *argv[]) {
    int num_read = 0;
    double sum = 0.0, current_score, max_score = MIN_SCORE, min_score = MAX_SCORE;

    printf("Please enter in the judges scores (at least 3): ");
    while (scanf("%lf", &current_score) == 1) {
        if (current_score < MIN_SCORE || current_score > MAX_SCORE) {
            printf("Invalid score. Score must be between 0 and 10");
            continue;
        }

        ++num_read;

        sum += current_score;

        min_score = current_score < min_score ? current_score : min_score;
        max_score = current_score > max_score ? current_score : max_score;
    }

    if (num_read < MIN_NUM_OF_SCORES) {
        printf("There needs to be at least 3 scores.\n");
        exit(EXIT_FAILURE);
    }

    sum -= max_score + min_score;

    printf("The sum is (without the max and min score): %.2f.\nThe average score is %.2f\n", sum, sum / num_read);

    return 0;
}
