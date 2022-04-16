#include <stdio.h>

// 当前第几个人：他面对的数量（未分）
int fish(int n, int x) {
    if ((x - 1) % 5 != 0)
        // 除不尽的话一定没戏！
        return 0;
    // 5 个人 4 个变化 满足 5 次条件
    if (n == 1)
        // 减到一的话就可以了
        return 1;
    else
        return fish(n - 1, (x - 1) * 4 / 5);
}

int main() {
    int i = 0, flag = 0, x;
    while (1) {
        // 规模增长：每次加 5
        i++;
        x = i * 5 + 1;
        if (fish(5, x)) {
            printf("ans = %d\n", x);
            break;
        }
    }
    return 0;
}