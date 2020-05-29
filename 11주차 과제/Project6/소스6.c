#include<stdio.h>
int main(void)
	{
	int num, num2, ans;
	printf("정수를 입력하시오:");
	scanf("%d", &num);

	printf("2를 곱하고 싶은 횟수:");
	scanf("%d", &num2);
	ans = 10 << 3;
	printf("10<<3의 값: %d", ans);
			
		return 0;
	}