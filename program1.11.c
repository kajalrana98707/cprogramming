#include <stdio.h>

int main()
{
	int r = 8;
	float PI = 3.14;
	float perimeter;
	float area;
	perimeter = 2*PI*r;
	area = PI*r*r;
	printf("perimeter of the Circle =%f inches\n",perimeter);
	printf("area of the Circle = %f square inches",area);
	
	return 0;
}
