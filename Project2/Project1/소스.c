#include<stdio.h>
int main(void)
{
	int score=0;
	printf("성적을 입력하시오:");
	scanf("%d", &score);
	switch (score)
	{
		case 90:
			printf("%d은 A입니다\n");
			break;
		case 80:
			printf("%d은 B입니다\n");
			break;
		case 70:
			printf("%d은 C입니다\n");
			break;
		case 60:
			printf("%d은 D입니다\n");
			break;
		default:
			break;
	}
	return 0;
}