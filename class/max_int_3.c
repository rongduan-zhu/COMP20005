#include <stdio.h>

int max_int_3(int a, int b, int c) {
    int max1 = max_int_2(a, b);
    int max2 = max_int_2(b, c);
    return max_int_2(max1, max2);
}

int max_int_2(int a, int b) {
    return a > b ? a : b;
}
