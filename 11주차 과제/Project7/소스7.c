#include<stdio.h>
#define PIE 3.141592
int main(void)
{
	double r;
	printf("구의 반지름을 입력하시오:");
	scanf("%lf", &r);
	printf("표면적은 %lf입니다.\n",4.0*r*r*PIE);
	printf("체적은 %lf입니다.", (4.0/3.0)*PIE*r*r*r);
	
	return 0;
}