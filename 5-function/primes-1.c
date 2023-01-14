//
// Created by HP on 2022/12/14.
//
#include <stdio.h>
#include <stdbool.h>

bool IsPrime(int number);
int main() {
    int max = 0;
    int count = 0;
    scanf("%d", &max);
    for (int number = 2; number <= max; number++) {
        if (IsPrime(number)) {
            printf("%d ", number);
            count++;
        }
    }
    printf("\n");
    printf("count=%d", count);

    return 0;
}

bool IsPrime(int number){
    bool is_prime = true;
    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) {
            is_prime = false;
            return false;
        }
    }
    return true;
}