#include<stdio.h>
int main(void)
{
	int x, y;
	printf("x 좌표를 입력하시오:");
	scanf("%d", &x);
	printf("y 좌표를 입력하시오:");
	scanf("%d", &y);
	(x > 0 && y > 0) ? printf("1사분면"):printf("");
	return 0;
}