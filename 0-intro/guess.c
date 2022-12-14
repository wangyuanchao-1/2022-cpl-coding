//
// Created by HP on 2022/12/8.
//

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    int high=100;
    int number_of_tries=7;
    printf("Let us play The Guess Number game.\n"
           "the number is generate a number between 1 and %d.\n"
           "you have %d tries.\n",high,number_of_tries);
    srand(time(NULL));
    int secret=rand()%high+1;
    printf("Test: secret =%d.\n",secret);
    printf("Please input your guess.\n"
           "You still have %d tries.\n",number_of_tries);
    while(number_of_tries>0) {
        int guess = 0;
        scanf("%d", &guess);
        printf("your guess is %d.\n", guess);
        if (guess == secret) {
            printf("You Win!\n");
            break;
        } else if (guess > secret) {
            printf("guess < secret\n");
        } else {
            printf("guess < secret\n");
        }
        number_of_tries--;
    }

    return 0;
}
