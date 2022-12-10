//
// Created by HP on 2022/12/10.
//
#include <stdio.h>
#include <math.h>
#include <ctype.h>

int main()
{
    char first_name[10];
    char last_name[10];
    char gender;

    int birth_year;
    int birth_month;
    int birth_day;
    char weekday[10];

    int c_score;
    int music_score;
    int medicine_score;
    int rank;

    double mean =(c_score+music_score+medicine_score)/3.0;
    double sd=sqrt((pow(c_score-mean,2) + pow(music_score-mean,2)+pow(medicine_score-mean,2))/3.0);

    scanf("%9s%9s %c %d-%d-%d %9  s %d%d%d %*lf%*lf %d%%",//只识别不保存数据。
          first_name,last_name,&gender,
          &birth_year,&birth_month,&birth_day,weekday,
          &c_score,&music_score,&medicine_score,
          &mean,&sd,&rank);



    printf("%s %s \t %c\n"
           "%.2d-%d-%d \t %.3s.\n"
           "C=%d \t Music=%d \t Medicine=%d\n"
           "Mean=%.1f \t SD=%.2f \t  Rnk=%d%%\n",
           first_name,last_name,toupper(gender),
           birth_month,birth_day,birth_year,weekday,
           c_score,music_score,medicine_score,
           mean,sd,rank);

    return 0;
}