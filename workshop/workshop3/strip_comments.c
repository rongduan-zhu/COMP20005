#include <stdio.h>

int main(int argc, char const *argv[])
{
    int current, potential_start, potential_end, in_comment;
    potential_start = potential_end = 0;
    in_comment = 0;

    while ((current = getchar()) != EOF) {
        if (!in_comment) {
            if (potential_start) {
                if (current == '*') {
                    potential_start = 0;
                    in_comment = 1;
                    continue;
                } else {
                    printf("/%c", current);
                    potential_start = 0;
                }
            } else {
                if (current == '/') {
                    potential_start = 1;
                    continue;
                } else {
                    putchar(current);
                }
            }
        } else {
            if (potential_end) {
                if (current == '/') {
                    in_comment = 0;
                    potential_end = 0;
                    continue;
                }
            } else {
                if (current == '*') {
                    potential_end = 1;
                    continue;
                }
            }
        }
    }
    return 0;
}
