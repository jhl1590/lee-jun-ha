#include<stdio.h>
int main(void)
{
	int num;
	printf("정수를 입력아시오:");
	scanf("%d", &num);

	printf("2의 보수:%d",~num+1);


	return 0;
}