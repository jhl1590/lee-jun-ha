#include<stdio.h>
int main(void)
{
	int score;

	printf("������ �Է��Ͻÿ�");
	scanf("%d", &score);
	if (score > 100)
	{
		printf("�ٽ� �Է��Ͻÿ�\n");
	}
	else if (score > 90)
	{
		printf("%d�� A�Դϴ�\n", score);
	}
	else if (score > 80)
	{
		printf("%d�� B�Դϴ�\n", score);
	}
	else if(score > 70)
	{
		printf("%d�� C�Դϴ�\n", score);
	}
	else if(score > 60)
	{
		printf("%d�� D�Դϴ�\n", score);
	}
	else if(score <= 60)
	{
		printf("%d�� F�Դϴ�\n", score);
	}
		
		



	return 0;
}