#include<stdio.h>
int main(void)
{
	unsigned int num=0;
	char ch;
	printf("ù��° ���ڸ� �Է��Ͻÿ�:");
	scanf("%c", &ch);
	num = num | ch;
	
	printf("�ι�° ���ڸ� �Է��Ͻÿ�:");
	scanf("%c\n", &ch);
	num <<= 8;
	num = num | ch;
	
	printf("����° ���ڸ� �Է��Ͻÿ�:");
	scanf("%c\n", &ch);
	num <<= 8;
	num = num | ch;
	
	printf("�׹�° ���ڸ� �Է��Ͻÿ�:");
	scanf("%c\n", &ch);
	num <<= 8;
	num = num | ch;
	printf("�����:%08x",num);

	return 0;
}