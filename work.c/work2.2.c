#include <stdio.h>
int main()
{
    printf("请输入一个绝对值不超过10000的整数：");
    int a,sum=0;
    scanf("%d",&a);
    if(a<0)
        a=-a;
    while(a!=0){
        sum=a%10+sum;
        a=a/10;
    }
    printf("%d\n",sum);
    return 0;
}