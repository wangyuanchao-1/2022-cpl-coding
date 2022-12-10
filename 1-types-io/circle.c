//
// Created by HP on 2022/12/9.
//

#include <stdio.h>

int main()
{
    int radius = 10;
    const double pi=3.14159;

    double circumference = 2*pi*radius;
    double area = pi*radius*radius;

    printf("circumference = %.2f\narea =%.2f\n",
           circumference,area);
    return 0;
}
