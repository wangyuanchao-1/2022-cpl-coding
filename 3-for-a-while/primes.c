//
// Created by HP on 2022/12/11.
//
#include <stdio.h>
#include <stdbool.h>

int main() {
    int max = 0;
    int count = 0;
    scanf("%d", &max);
    for (int number = 2; number <= max; number++) {
        bool is_prime = true;
        for (int i = 2; i * i <= number; i++) {
            if (number % i == 0) {
                is_prime = false;
                break;
            }
        }

        if (is_prime) {
            printf("%d ", number);
            count++;
        }
    }
    printf("\n");
    printf("count=%d", count);

    return 0;
}