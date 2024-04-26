///week10-1week10-1函式呼叫函式Recrusion遞迴N階層 C
///以前是用for迴圈寫,今天用[函式呼叫函式]來寫
#include <stdio.h>
int func(int n){
    if(n==1) return 1; ///終止條件,像[數學歸納法]N=1成立
    return n * func(n-1);
}
int main()
{
    printf("請輸入N:");
    int N;
    scanf("%d",&N);
    int ans = func(N);
    printf("%d",ans);

}
