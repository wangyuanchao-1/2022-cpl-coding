//
// Created by HP on 2022/12/15.
//
#include <stdio.h>

#define NUM 5

int Min(const int nums[], int len);

int main() {
    int numbers[NUM] = {25, 34, 37, 45, 43};

    int min = Min(numbers, NUM);
    printf("min = %d\n", min);

    return 0;
}

int Min(const int nums[], int len) {
    if (len == 1) {
        return nums[0];
    }

    int partial_min = Min(nums, len - 1);
    return nums[len - 1] < partial_min ? nums[len - 1] : partial_min;
}