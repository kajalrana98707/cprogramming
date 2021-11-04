#include <stdio.h>

int b = 34;
int func1(int b1)
{
	printf("The value od b inside funce is %d\n",b);
	//printf("The adderss of b inside func1 is %d\n",&b);
	return b1*10;
}
int main()
{
	int b = 344;
	//printf("The adderss of b inside main is %d\n",&b);
	int val = func1(b);
	int * ptr = &val;
	printf("The value of func1 %d",val);
    
    return 0;
}

