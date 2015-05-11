#include <stdio.h>

int strlen2(char const *str) {
    int count = 0;

    while (*str++ != '\0') {
        ++count;
    }

    return count;
}

void strcpy2(char const *source, char *dest) {
    while ((*dest++ = *source++));
}

void strcat2(char *dest, char const *str1, char const *str2) {
    int str1_len = strlen2(str1);
    int str2_len = strlen2(str2);
    int i;

    for (i = 0; i < str1_len; ++i) {
        dest[i] = str1[i];
    }

    for (i = 0; i < str2_len; ++i) {
        dest[i + str1_len] = str2[i];
    }

    dest[str1_len + str2_len] = '\0';
}

int main(int argc, char *argv[]) {
    char *str = "abc";
    char *str2 = "xyz";
    char strcomb[10];

    strcat2(strcomb, str, str2);

    printf("%s\n", strcomb);

    return 0;
}
