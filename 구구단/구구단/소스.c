#include<stdio.h>
int main(void)
{
	int i = 1;
	int j = 2;
	for (j = 2; j <= 9; j++)
	{
		printf("%d°ö\n", j);
		for (i = 1; i <= 9; i++)
		{
			printf("%d*%d=%d\n", j, i, i * j);
		}
		printf("\n");
	}
	return 0;
}