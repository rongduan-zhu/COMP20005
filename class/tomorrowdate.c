#include <stdio.h>
#include <stdlib.h>

#define JAN 1
#define FEB 2
#define MAR 3
#define APR 4
#define MAY 5
#define JUN 6
#define JUL 7
#define AUG 8
#define SEP 9
#define OCT 10
#define NOV 11
#define DEC 12

#define FEB_DAYS 28
#define FEB_LEAP_DAYS 29
#define SMALL_MONTH_DAYs 30
#define BIG_MONTH_DAYS 31

#define DEBUG 1

int is_leap_year(int year) {
    return (!(year % 4) && year % 100) || !(year % 400);
}

int days_in_month(int month, int year) {
    if (month == FEB) {
        if (is_leap_year(year)) {
            return FEB_LEAP_DAYS;
        } else {
            return FEB_DAYS;
        }
    } else if (JAN <= month && month <= JUL) {
        return month & 1 ? BIG_MONTH_DAYS : SMALL_MONTH_DAYs;
    } else if (AUG <= month && month <= DEC) {
        return month & 1 ? SMALL_MONTH_DAYs : BIG_MONTH_DAYS;
    } else {
        printf("Invalid month.\n");
        exit(EXIT_FAILURE);
    }
}

int main(int argc, char const *argv[])
{
    int dd;
    int mm;
    int yyyy;
    int current_month_days;
    int months_to_add = 0;
    int years_to_add = 0;

    printf("Please enter today's date (dd/mm/yyyy): ");
    if (scanf("%d/%d/%d", &dd, &mm, &yyyy) != 3) {
        printf("Please enter a valid date.\n");
        exit(EXIT_FAILURE);
    }

    #ifdef DEBUG
    printf("days in Jan: %d\n", days_in_month(1, 1992));
    printf("days in Feb 2004: %d\n", days_in_month(2, 2004));
    printf("days in Feb 4000: %d\n", days_in_month(2, 2004));
    printf("days in Feb 100: %d\n", days_in_month(2, 100));
    printf("days in Apr: %d\n", days_in_month(4, 2004));
    printf("days in Aug: %d\n", days_in_month(8, 2004));
    printf("days in Sep: %d\n", days_in_month(9, 2004));
    #endif

    current_month_days = days_in_month(mm, yyyy);

    if (dd + 1 > current_month_days) {
        dd = 1;
        ++months_to_add;
    } else {
        ++dd;
    }

    if (mm + months_to_add > DEC) {
        mm = 1;
        ++years_to_add;
    } else {
        mm += months_to_add;
    }

    yyyy += years_to_add;

    printf("Tomorrow's date is %2d/%2d/%4d\n", dd, mm, yyyy);

    return 0;
}
