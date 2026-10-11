#include <stdio.h>

int main() {
    char x, y;

    scanf(" %c %c", &x, &y);  // 先跳过前面的空白字符，再读取两个字符

    if (x > y) {
        printf("%c %d\n", x, x);
    } else {
        printf("%c %d\n", y, y);
    }

    return 0;
}