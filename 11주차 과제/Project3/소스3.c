#include<stdio.h>
int main(void)
{
	int k, ft;
	double  in;
	printf("키를 입력하시오(cm):");
	scanf("%d", &k);

	
	in = k / 2.54;
	ft = in / 12;
	in = in - (ft * 12);
	printf("%dcm는 %d피트 %lf인치입니다",k,ft,in);

	return 0;
}