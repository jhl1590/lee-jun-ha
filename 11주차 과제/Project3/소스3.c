#include<stdio.h>
int main(void)
{
	int k, ft;
	double  in;
	printf("Ű�� �Է��Ͻÿ�(cm):");
	scanf("%d", &k);

	
	in = k / 2.54;
	ft = in / 12;
	in = in - (ft * 12);
	printf("%dcm�� %d��Ʈ %lf��ġ�Դϴ�",k,ft,in);

	return 0;
}