#include<stdio.h>
int main(void)
{
	int a, b, c;
	printf("3개의 정수를 입력하시오:");
	scanf("%d %d %d", &a, &b, &c);
	
	printf("최대값:%d\n", a > b ? (a > c ? a : c) : (b > c ? b : c));



	return 0;
}