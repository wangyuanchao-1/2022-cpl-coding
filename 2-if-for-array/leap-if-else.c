//
// Created by HP on 2022/12/11.
//

#include <stdio.h>

int main() {
    int year = 0;
    scanf("%d", &year);
    int leap = 0;
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                leap = 1;
            } else {
                leap = 0;
            }
        } else {
            leap = 1;
        }

    } else {
        leap = 0;
    }
    if (leap == 0) {
        printf("The yaer %d is a common year.\n", year);
    } else {
        printf("The year %d is a leap year.\n", year);
    }
    return 0;

}