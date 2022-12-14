//
// Created by HP on 2022/12/11.
//

#include <stdio.h>
int main()
{
    int min;
    int a;
    int b;
    int c;

    scanf("%d%d%d",&a,&b,&c);
    if(a>b){
        if(b>c){
            min=c;
        } else{
            min=b;
        }
    } else{
       if(a>c){
           min=c;
       } else{
           min=a;
       }
    }

    printf("min{%d,%d,%d} = %d\n",a,b,c,min);

    return 0;
}