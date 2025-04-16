// week09-3.cpp
// YEH001_Star
#include <stdio.h>
int main()
{
    printf("請輸入大小: ");
	int n;
	scanf("%d", &n);

	for(int i=1; i<=n; i++){
		for(int j=1; j<=i; j++){
			printf("*");
		}
		printf("i:%d \n", i);
	}

	for(int i=n-1; i>=0; i--){
		for(int j=1; j<=i; j++){
			printf("*");
		}
		printf("i:%d \n", i);
	}
}
