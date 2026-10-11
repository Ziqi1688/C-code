#include <stdio.h>
int main()
{
    int a=3,s;
    s=(a++)+(++a);
    printf("%d %d\n",a,s);
    return 0;
}