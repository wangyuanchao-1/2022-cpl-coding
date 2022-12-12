//
// Created by HP on 2022/12/12.
//
#include <stdio.h>

#define  LEN 20
int numbers[LEN]={0};

int main()
{
    int len=-1;
    while (scanf("%d",&numbers[++len])!=EOF);

    for(int i=0;i<len;i++){
        printf("%d ",numbers[i]);
    }
    printf("\n");

    for(int i=0;i<len;i++){
        int min=numbers[i];
        int min_index=i;

        for(int j=i+1;j<=len-1;j++){
            if(numbers[j]<min){
                min=numbers[j];
                min_index=j;
            }
        }

         int temp=numbers[min_index];
        numbers[min_index]=numbers[i];
        numbers[i]=temp;
    }
    for (int i = 0; i < len; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}