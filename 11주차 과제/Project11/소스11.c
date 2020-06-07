#include<stdio.h>
int main(void)
{
	unsigned int num=0;
	char ch;
	printf("첫번째 문자를 입력하시오:");
	scanf("%c", &ch);
	num = num | ch;
	
	printf("두번째 문자를 입력하시오:");
	scanf("%c\n", &ch);
	num <<= 8;
	num = num | ch;
	
	printf("세번째 문자를 입력하시오:");
	scanf("%c\n", &ch);
	num <<= 8;
	num = num | ch;
	
	printf("네번째 문자를 입력하시오:");
	scanf("%c\n", &ch);
	num <<= 8;
	num = num | ch;
	printf("결과값:%08x",num);

	return 0;
}