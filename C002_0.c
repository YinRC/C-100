/***
 有5个人坐在一起，问第5个人多少岁，
 他说比第4个人大2岁。问第4个人多少岁，
 他说比第3个人大2岁。问第3人多少岁，
 他说比第2个人大2岁。问第2个人多少岁，
 他说比第1个人大2岁。最后问第1个人，
 他说他是10岁。
 编写程序，当输入第几个人时求出其对应的年龄。
 */

// [5]-[4]=2
// [4]-[3]=2
// [3]-[2]=2
// [2]-[1]=2
// [1]=10

#include<stdio.h>

int func(int x){
    if(x == 1)
        return 10;
    return func(x-1) + 2;
}

int main(){
    int n, x;
    while(1){
        if(scanf("%d", &n) && n>=1 && n<=5){
            printf("%d\n", func(n));
            break;
        }
        printf("咱这输入得不对啊！再输一遍！\n");
    }
    return 0;
}