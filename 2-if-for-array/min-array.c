//
// Created by HP on 2022/12/11.
//

#include <stdio.h>

int main() {
    const int NUM = 5;
    int numbers[NUM] = {23, 56, 19, 11, 78};

    int min = numbers[0];
    for (int i = 1; i < NUM; i++) {
        if (numbers[i] < min) {
            min = numbers[i];
        }
    }
    return 0;
}
