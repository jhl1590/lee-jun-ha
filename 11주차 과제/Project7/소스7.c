#include<stdio.h>
#define PIE 3.141592
int main(void)
{
	double r;
	printf("���� �������� �Է��Ͻÿ�:");
	scanf("%lf", &r);
	printf("ǥ������ %lf�Դϴ�.\n",4.0*r*r*PIE);
	printf("ü���� %lf�Դϴ�.", (4.0/3.0)*PIE*r*r*r);
	
	return 0;
}