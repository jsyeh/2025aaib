/// week13-2.cpp
/// �Q��̤j���]��, �H��K���l�B�����u�����v
#include <stdio.h>
int main()
{
    int a = 1510000000, b = 2100000068;
    int ans = 1;
    for(int i=1; i<=b; i++){ /// �չL�Ҧ����Ʀr
        if( a%i==0 && b%i==0 ) ans = i;
    }
    printf("��� %d %d ���̤j���]��: %d\n", a, b, ans);
    printf("%d/%d ������, �ܦ� %d/%d\n",
            a, b,           a/ans, b/ans );
}

