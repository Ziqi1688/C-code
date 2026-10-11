#include <stdio.h>  // 包含标准输入输出头文件

int main() {  // 主函数开始
    char ch[5];  // 用来存放 5 个字符
    int freq[256] = {0};  // 记录每个字符出现多少次，ASCII 码范围 0~255
    int cnt[5] = {0};  // 记录不同字符的出现次数，最多 5 个不同字符
    int n = 0;  // 记录有多少种不同字符

    scanf(" %c %c %c %c %c", &ch[0], &ch[1], &ch[2], &ch[3], &ch[4]);  // 读取 5 个字符，前面的空格用于跳过空白字符

    for (int i = 0; i < 5; i++) {  // 遍历 5 个字符
        freq[(unsigned char)ch[i]]++;  // 让对应字符的出现次数加 1
    }

    for (int i = 0; i < 256; i++) {  // 遍历所有 ASCII 码
        if (freq[i] > 0) {  // 只记录出现过的字符
            cnt[n++] = freq[i];  // 记录该字符出现的次数
        }
    }

    for (int i = 0; i < n; i++) {  // 冒泡排序，把出现次数从大到小排列
        for (int j = i + 1; j < n; j++) {  // 比较后面的元素
            if (cnt[i] < cnt[j]) {  // 如果前面的比后面小，就交换
                int temp = cnt[i];
                cnt[i] = cnt[j];
                cnt[j] = temp;
            }
        }
    }

    if (n == 1) {  // 只有一种字符，说明是 5 个都相同
        printf("5\n");
    } else if (cnt[0] == 4 && cnt[1] == 1) {  // 4+1
        printf("4+1\n");
    } else if (cnt[0] == 3 && cnt[1] == 2) {  // 3+2
        printf("3+2\n");
    } else if (cnt[0] == 3 && cnt[1] == 1 && cnt[2] == 1) {  // 3+1+1
        printf("3+1+1\n");
    } else if (cnt[0] == 2 && cnt[1] == 2 && cnt[2] == 1) {  // 2+2+1
        printf("2+2+1\n");
    } else if (cnt[0] == 2 && cnt[1] == 1 && cnt[2] == 1 && cnt[3] == 1) {  // 2+1+1+1
        printf("2+1+1+1\n");
    } else {  // 其余情况就是 1+1+1+1+1
        printf("1+1+1+1+1\n");
    }

    return 0;  // 程序正常结束
}  // 主函数结束