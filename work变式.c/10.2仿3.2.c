#include <stdio.h>
int main(){
    int a,b,c,d,e;
    printf("请输入五个整数：");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    int n,w;
    int A[5]={a,b,c,d,e} ;
    int cool=0,min=6;
    for(w=0;w<5;w++){
        int c=0;
        for(n=0;n<5;n++)
        if(A[n]==A[w])c++;
        if(c<min||(c==min&&cool>A[w])){min=c;cool=A[w];}
    }
        printf("冷门数：%d\n",cool);
    return 0;
}