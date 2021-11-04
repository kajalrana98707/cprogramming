#include<stdio.h>

int main()
{
	float w1 = 15;
	float n1 = 5;
	float v1 = w1+n1;
	float w2 = 25;
	float n2 = 4;
	float v2 = w2+n2;
	float a;
	a = ((w1*n1)+(w2*n2))/(n1+n2);
	
	printf("average value = %f",a);
	
	return 0;
}
