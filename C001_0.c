/***
A、B、C、D、E这5个人合伙夜间捕鱼，
凌晨时都已经疲惫不堪，于是各自在河边的树丛中找地方睡着了。
第二天日上三竿时，A第一个醒来，他将鱼平分为5份，把多余的一条扔回河中，
然后拿着自己的一份回家去了；B第二个醒来，但不知道A已经拿走了一份鱼，
于是他将剩下的鱼平分为5份，扔掉多余的一条，然后只拿走了自己的一份；
接着C、D、E依次醒来，也都按同样的办法分鱼。问这5人至少合伙捕到多少条鱼？
每个人醒来后所看到的鱼是多少条？*/
#include<stdio.h>
#include<math.h>


int func(int sum, int *cnt){   
    if((sum-1)%5 != 0)
        return *cnt;
    *cnt += 1;
    return func((sum-1)*4/5, cnt);
}

int main(){
    // int ans = 0;
    int cnt = 0;
    int i = 5;
    while(1){
        i++;
        if(func(i, &cnt) == 5)
            break;
        cnt = 0;
    }
    printf("%d", i);
    return 0;
}