// week09-3.cpp
// YEH001_Star
#include <stdio.h>
int main()
{
    printf("�п�J�j�p: ");
	int n;
	scanf("%d", &n);

	for(int i=1; i<=n; i++){
		for(int j=1; j<=i; j++){
			printf("*");
		}
		//printf("i:%d \n", i);
		printf("\n");
	}
}
