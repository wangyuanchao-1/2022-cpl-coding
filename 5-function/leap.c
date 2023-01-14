//
// Created by HP on 2022/12/14.
//
#include <stdio.h>
#include <stdbool.h>


bool IsLeapYear(int year);

int main() {
    int year = 0;
    scanf("%d", &year);

    // copy code from `leap-elseif.c` add modify it here
    bool leap = IsLeapYear(year);

    if (!leap) {
        printf("The year %d is a common year.\n", year);
    } else {
        printf("The year %d is a leap year.\n", year);
    }

    if (leap != 0) {

    }

    return 0;
}
bool IsLeapYear(int year) {
    return ((year % 4 == 0 && year % 100 != 0) ||
            (year % 400 == 0));
}