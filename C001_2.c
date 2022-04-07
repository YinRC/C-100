// 递推法：当得到问题规模为n-1的解后，可以得出问题规模为n的解。
// 因此，从规模为0或1的解可以依次递推出任意规模的解.
#include <stdio.h>

int fish(int n, int x);

int main() {
    int fish[6], i;
    // 一个能够想得到的最小初始值
    fish[5] = 6;
    while (1) {
        // y = (x-1)*4/5 => x = y*5/4+1
        for (i = 4; i > 0; i--) {
            // 防止出现下面算式除不尽的情况
            if (fish[i + 1] % 4 != 0)
                break;
            // 倒推的算式
            fish[i] = fish[i + 1] * 5 / 4 + 1;
            // 逆推得到的结果应该合乎情理
            if (fish[i] % 5 != 1)
                break;
        }
        // 历经了四重关卡，得胜即为 answer
        if (i == 0)
            break;
        // 如果没有达到期望，就修改初始值
        // -1 而后 5 的倍数
        fish[5] += 5;
    }
    for (i = 1; i <= 5; i++) {
        printf("fish[%d]=%d\n", i, fish[i]);
    }
    return 0;
}