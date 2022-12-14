//
// Created by HP on 2022/12/12.
//
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#define SIZE 6
#define MAX_ROUND 10
int board[SIZE][SIZE]={
        {0},
        {0,1,1,0,0,0},
        {0,1,1,0,0,0},
        {0,0,0,1,1,0},
        {0,0,0,1,1,0},
        {0}
};


int main()
{
    int old_board[SIZE+2][SIZE+2];
    for(int row=0;row<SIZE+2;row++){
        for(int col=0;col<SIZE+2;col++){
            if(row==0||row==SIZE+1||col==0||col==SIZE+1){
                old_board[row][col]=0;
            } else{
                old_board[row][col]=board[row-1][col-1];
            }
        }
    }

    for(int row=1;row<=SIZE;row++){
        for(int col=1;col<=SIZE;col++){
            printf("%c ",old_board[row][col]?"*":" ");
        }
        printf("\n");
    }
    int next_board[SIZE+2][SIZE+2]={0};
    for(int round=1;round<=MAX_ROUND;round++) {
        for (int row = 1; row <= SIZE + 1; row++) {
            for (int col = 1; col <= SIZE + 1; col++) {
                int neighours =
                        old_board[row - 1][col - 1] +
                        old_board[row - 1][row] +
                        old_board[row - 1][col + 1] +
                        old_board[row][col - 1] +
                        old_board[row][col + 1] +
                        old_board[row - 1][col - 1] +
                        old_board[row - 1][col] +
                        old_board[row - 1][col + 1];

                if (old_board[row][col]) {
                    if (neighours == 2 || neighours == 3) {
                        next_board[row][col] = 1;
                    }
                    next_board[row][col] = (neighours == 2 || neighours == 3);
                } else {
                    next_board[row][col] = (neighours == 3);
                }
            }
        }
        Sleep(1);
        for (int row = 1; row <= SIZE; row++) {
            for (int col = 1; col <= SIZE; col++) {
                printf("%c", old_board[row][col] ? '*' : ' ');
            }
            printf("\n");
        }

        for(int row=0;row<SIZE+2;row++){
            for(int col=0;col<SIZE+2;col++){
                old_board[row][col]=next_board[row][col];
            }
        }
    }

    return 0;
}
