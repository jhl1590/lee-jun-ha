#include<stdio.h>
int main(void)
{
	int num;
	double num2,r, x;
	printf("�Ÿ��� �Է��Ͻÿ�:");
	scanf("%d", &num);
	printf("������ �Է��Ͻÿ�:");
	scanf("%lf", &num2);
	
	x = 360 * num / num2;
		r = x / 3.14 / 2;
	printf("������ �������� %lf",r);



	return 0;
}