#include<stdio.h>
int main(void)
{
	double  x, y, sum, a, b, c;
	
	printf("�Ǽ��� �Է��Ͻÿ�:");
	scanf("%lf %lf", &x, &y);
	sum = x + y;
	a = x - y;
	b = x * y;
	c = x / y;
	printf("%lf",sum);
	printf(" ");
	printf("%lf", a);
	printf(" ");
	printf("%lf", b);
	printf(" ");
	printf("%lf", c);
	return 0;
}