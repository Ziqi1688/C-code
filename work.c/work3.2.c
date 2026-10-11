#include <stdio.h>
#include <math.h>
int main(){
    int A,B,C,D,E;
    printf("请输入五个整数:");
    scanf("%d %d %d %d %d",&A,&B,&C,&D,&E);
    int a[5]={A,B,C,D,E};
    int mode=a[0],max=0;
    int i,j;
    for(i=0;i<5;i+=1){
    int c=0;
    for(j=0;j<5;j+=1)
    if(a[j]==a[i])c+=1;
    if(c>max||(c=max&&a[i]<mode)){max=c;mode=a[i];}    
    }
    printf("众数：%d\n",mode);
    return 0;
}