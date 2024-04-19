///week09-1.cpp了解函式的定義
#include <stdio.h>
int myAdd(int a, int b){ ///函式定義
    return a+b; ///進來2個數,出去1個數
}
void myPrint(int a){
    for(int i=1;i<=a;i++) printf("*");
    printf("\n");
}

int main()  ///main()函式
{
    int ans = myAdd(3,4); ///函式呼叫
    printf("Hello ans: %d\n",ans);
    myPrint(ans); ///函式呼叫(請他幫我做事)
}
