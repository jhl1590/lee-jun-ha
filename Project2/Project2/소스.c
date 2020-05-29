#include<stdio.h>
int main(void)
{
	int score;

	printf("성적을 입력하시오");
	scanf("%d", &score);
	if (score > 100)
	{
		printf("다시 입력하시오\n");
	}
	else if (score > 90)
	{
		printf("%d은 A입니다\n", score);
	}
	else if (score > 80)
	{
		printf("%d은 B입니다\n", score);
	}
	else if(score > 70)
	{
		printf("%d은 C입니다\n", score);
	}
	else if(score > 60)
	{
		printf("%d은 D입니다\n", score);
	}
	else if(score <= 60)
	{
		printf("%d은 F입니다\n", score);
	}
		
		



	return 0;
}