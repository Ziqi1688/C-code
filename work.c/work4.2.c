#include <stdio.h>

int main() {
    char a, b, c;

    // 先跳过前面的空白字符，再读取三个字符
    scanf(" %c %c %c", &a, &b, &c);

    if (a > b && a > c) {
        printf("%c %d\n", a, a);
    } else if (b > a && b > c) {
        printf("%c %d\n", b, b);
    } else {
        printf("%c %d\n", c, c);
    }//注意不要陷入if的分支

    return 0;
}