#include<stdio.h>
int main(void)
{
	int h,x,r;
	printf("�������� ���̸� �Է��Ͻÿ�:");
	scanf("%d", &h);
	printf("������ �׸����� ���̸� �Է��Ͻÿ�:");
	scanf("%d", &x);
	printf("�Ƕ�̵������ �Ÿ��� �Է��Ͻÿ�:");
	scanf("%d", &r);
	double rh;
	rh = (h * r) / x;
	printf("�Ƕ�̵��� ���̴� %lf�Դϴ�", rh);


	return 0;
}