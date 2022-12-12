//
// Created by HP on 2022/12/12.
//
#include <stdio.h>

int main()
{
    int number=0;
    scanf("%d",&number);

    int num_of_digits=0;

    while(number>0){
        number/=10;
        num_of_digits++;
    }

    printf("Number of digiys is %d.\n")
}