//
// Created by HP on 2022/12/11.
//
#include <stdio.h>
int main()
{
    int a=0;
    int b=0;
    scanf("%d%d",&a,&b);

    int min;
    if(a>=b){
        min=a;
    } else {
        min=b;
    }

    //min= a>=b ? b : a;双目运算符；

    printf("min{%d,%d} = %d",a,b,min);

    return 0;
}