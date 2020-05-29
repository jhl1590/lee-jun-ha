#include<stdio.h>
int main(void)
{
	int h,x,r;
	printf("지팡이의 높이를 입력하시오:");
	scanf("%d", &h);
	printf("지팡이 그림자의 길이를 입력하시오:");
	scanf("%d", &x);
	printf("피라미드까지의 거리를 입력하시오:");
	scanf("%d", &r);
	double rh;
	rh = (h * r) / x;
	printf("피라미드의 높이는 %lf입니다", rh);


	return 0;
}