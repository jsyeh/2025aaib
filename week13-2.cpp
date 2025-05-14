/// week13-2.cpp
/// 稱衡程そ计, よ獽だだダだ
#include <stdio.h>
int main()
{
    int a = 1510000000, b = 2100000068;
    int ans = 1;
    for(int i=1; i<=b; i++){ /// 刚筁┮Τ计
        if( a%i==0 && b%i==0 ) ans = i;
    }
    printf("т %d %d 程そ计: %d\n", a, b, ans);
    printf("%d/%d だ, 跑Θ %d/%d\n",
            a, b,           a/ans, b/ans );
}

