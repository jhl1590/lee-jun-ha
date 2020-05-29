#include<stdio.h>
int main(void)
{
	int num;
	double num2,r, x;
	printf("거리를 입력하시오:");
	scanf("%d", &num);
	printf("각도를 입력하시오:");
	scanf("%lf", &num2);
	
	x = 360 * num / num2;
		r = x / 3.14 / 2;
	printf("지구의 반지름은 %lf",r);



	return 0;
}