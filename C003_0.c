/*
国际象棋的棋盘为8×8的方格棋盘。
现将“马”放在任意指定的方格中，
按照“马”走棋的规则将“马”进行移动。要求每个方格只能进入一次，
最终使得“马”走遍棋盘的64个方格。

编写一个C程序，实现马踏棋盘操作，
要求用1〜64这64个数字标注马移动的路径，
也就是按照求出的行走路线，
将数字1，2，……64依次填入棋盘的方格中，
并输出。
*/

#include <stdio.h>

int ma[8][8];

void func(int ma[8][8], int i, int j, int cnt) {
    if(ma[i][j] != 0)
        return;
    ma[i][j] = cnt;
    if (i >= 0 && i <= 7 && j >= 0 && j <= 7) {
        func(ma, i - 1, j - 2, cnt++);
        func(ma, i - 1, j + 2, cnt++);
        func(ma, i - 2, j - 1, cnt++);
        func(ma, i - 2, j + 1, cnt++);
        func(ma, i + 2, j - 1, cnt++);
        func(ma, i + 2, j + 1, cnt++);
        func(ma, i + 1, j - 2, cnt++);
        func(ma, i + 1, j + 2, cnt++);
    }
    return;
}

int main() {
    // int cnt = 1;
    func(ma, 2, 0, 1);
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            printf("%3d", ma[i][j]);
        }
        printf("\n");
    }
    return 0;
}