#include<stdio.h>
int main(void)
{
	int a, b, c;
	printf("3���� ������ �Է��Ͻÿ�:");
	scanf("%d %d %d", &a, &b, &c);
	
	printf("�ִ밪:%d\n", a > b ? (a > c ? a : c) : (b > c ? b : c));



	return 0;
}