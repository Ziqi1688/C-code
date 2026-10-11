#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MIN_GAP 2
#define MAX_GAP 9
#define MIN_POWER 1
#define MAX_POWER 9

static void print_title(void) {
    printf("\n==============================\n");
    printf("         跳一跳小游戏\n");
    printf("==============================\n");
    printf("输入 1-%d 蓄力并跳跃，输入 q 退出。\n", MAX_POWER);
}

static void print_scene(int score, int gap) {
    int i;

    printf("\n分数：%d\n", score);
    printf("当前平台");
    for (i = 0; i < gap; ++i) {
        printf(" ");
    }
    printf("目标平台\n");
    printf("   [====] ");
    for (i = 0; i < gap; ++i) {
        printf(" ");
    }
    printf("[====]\n");
}

static int read_power(void) {
    char input[32];
    char *end;
    long power;

    printf("\n蓄力值（%d-%d）：", MIN_POWER, MAX_POWER);
    if (fgets(input, sizeof(input), stdin) == NULL) {
        return -1;
    }

    if (input[0] == 'q' || input[0] == 'Q') {
        return -1;
    }

    power = strtol(input, &end, 10);
    if (end == input || power < MIN_POWER || power > MAX_POWER) {
        printf("请输入 %d-%d 之间的数字。\n", MIN_POWER, MAX_POWER);
        return 0;
    }

    return (int)power;
}

int main(void) {
    int score = 0;
    int gap;
    int power;

    srand((unsigned int)time(NULL));
    print_title();
    gap = MIN_GAP + rand() % (MAX_GAP - MIN_GAP + 1);

    while (1) {
        print_scene(score, gap);
        power = read_power();

        if (power == -1) {
            printf("\n游戏结束！最终得分：%d\n", score);
            return 0;
        }
        if (power == 0) {
            continue;
        }

        printf("小黑跳出了 %d 格，目标距离是 %d 格……\n", power, gap);
        if (power != gap) {
            printf("没踩中平台，游戏结束！\n");
            printf("最终得分：%d\n", score);
            return 0;
        }

        ++score;
        printf("完美落地！\n");
        gap = MIN_GAP + rand() % (MAX_GAP - MIN_GAP + 1);
    }
}
