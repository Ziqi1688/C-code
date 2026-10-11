#include<stdio.h>
#include<math.h>
int main(){
    int a, b, c;
    printf("请输入三角形的三条边：");
    scanf("%d %d %d", &a, &b, &c);
    if((a + b > c) && (a + c > b) && (b + c > a)) {
        double p = (a + b + c)/2;
        double s = sqrt(p*(p-a)*(p-b)*(p-c));
        printf("YES\n%.2f\n",s);
    } else {
        printf("NO\n");
    }
    return 0;
}