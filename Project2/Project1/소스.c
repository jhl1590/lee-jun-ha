#include<stdio.h>
int main(void)
{
	int score=0;
	printf("������ �Է��Ͻÿ�:");
	scanf("%d", &score);
	switch (score)
	{
		case 90:
			printf("%d�� A�Դϴ�\n");
			break;
		case 80:
			printf("%d�� B�Դϴ�\n");
			break;
		case 70:
			printf("%d�� C�Դϴ�\n");
			break;
		case 60:
			printf("%d�� D�Դϴ�\n");
			break;
		default:
			break;
	}
	return 0;
}