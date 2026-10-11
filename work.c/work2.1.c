
/*
#include <stdio.h>
int main() {
    int a, b;
    scanf("%d", &a);
    b=(a-32)*5/9;
    printf("%d摄氏度", b);
    return 0;
}
*/
/*
#include <stdio.h>
int main() {
    int a=26;
    float b;
    b=a*9.0/5.0+32;
    printf("%f华氏度", b);
    return 0;
}
*/
/*
#include <stdio.h>
int main (){
    float a,b,c,x;
    scanf("%f %f %f",&a,&b,&c);
    x=(a+b+c)/3.0;
    printf("%.4f",x);
    return 0;
}
*/
#include <stdio.h>
#include <math.h>
int main (){
    float a,b,c,x;
    scanf("%f %f %f",&a,&b,&c);
    x=fmax(fmax(a,b),c);
    printf("%.4f",x);
    return 0;
}
