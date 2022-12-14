//
// Created by HP on 2022/12/11.
//
#include <stdio.h>

#define NUM 5

int main() {
    //const int NUM=5;
    int numbers[5] = {0};//只有常量可以初始化，NUM就不可以初始化。

    for (int i = 0; i < NUM; i++) {
        scanf("%d", &numbers[i]);
    }

    int min = numbers[0];
    for (int i = 1; i < NUM; i++) {
        if (numbers[i] < min) {
            min = numbers[i];
        }
    }
    printf("min:%d", min);
    return 0;
}