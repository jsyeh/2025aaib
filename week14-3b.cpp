// not homework
// SOIT108_Base_013A
#include <stdio.h>
int main()
{
	int now;
	scanf("%d", &now);
	int mm = now, MM = now;

	while( scanf("%d", &now) == 1 ){
		if(now>MM) MM = now;
		if(now<mm) mm = now;
	}
	printf("[%d,%d]", mm,MM);
}
