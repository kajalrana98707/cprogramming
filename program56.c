#include <stdio.h>

int b = 34;//this is a global variable since it is declared inside main()
int func1(int b1)
{
	static int myvar = 0;
	printf("The value of myvar is %d\n",myvar);
	myvar++;
	return b1*myvar;
}
int main()
{
	int b = 344;

	int val = func1(b);
    val = func1(b);
    val = func1(b);
    val = func1(b);
    val = func1(b);
    val = func1(b);
	int * ptr = &val;

    
    return 0;
}

