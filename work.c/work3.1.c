/*#include <stdio.h>
#include <math.h>
int main(){
    printf("请输入两个坐标：");
    float xa,ya,xb,yb,d;
    scanf("%f %f %f %f",&xa,&ya,&xb,&yb);
    d=sqrt((xa-xb)*(xa-xb)+(ya-yb)*(ya-yb));
    printf("距离为：%f\n",d);
    return 0;
}
*/
/*
#include <stdio.h>
#include <math.h>
int main(){
    printf("请输入三个不共线的点坐标：");
    float xa,ya,xb,yb,xc,yc,S;
    scanf("%f %f %f %f %f %f",&xa,&ya,&xb,&yb,&xc,&yc);
    S=((xa-xc)*(yb-yc)-(xb-xc)*(ya-yc))/2.0;
    if (S<0)
        S=-S;
    printf("三角形面积为：%f\n",S);
    return 0;
}
*/
/*
#include <stdio.h>
#include <math.h>
int main(){
    printf("请输入五个整数：");
    int A,B,C,D,E,M;
    scanf("%d %d %d %d %d",&A,&B,&C,&D,&E);
    M=A;
    if(B>M) M=B;
    if(C>M) M=C;
    if(D>M) M=D;
    if(E>M) M=E;
    printf("最大整数为：%d\n",M);
    return 0;
}
*/
#include <stdio.h>
#include <math.h>
int main(){
    int A,B,C,D,E,M,pos;
    printf("请输入5个整数：");
    scanf("%d %d %d %d %d",&A,&B,&C,&D,&E);
    M=A;
    if(B>M) M=B;
    if(C>M) M=C;
    if(D>M) M=D;
    if(E>M) M=E;
    pos=(M==A)?1:
        (M==B)?2:
        (M==C)?3:
        (M==D)?4:5;
    printf("最大整数位置为：%d\n",pos);
    return 0;
}
