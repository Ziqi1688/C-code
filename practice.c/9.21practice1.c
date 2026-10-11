#include <stdio.h>
int main()
{
    int Mike_score;
    Mike_score=98;
    int John_score;
    John_score=89;
    printf("Mike的成绩为:%d分\n",Mike_score);
    printf("John的成绩为:%d分\n",John_score);
    John_score=Mike_score;
    Mike_score=89;
    printf("Mike的成绩为:%d分\n",Mike_score);
    printf("John的成绩为:%d分\n",John_score);
    return 0;
}