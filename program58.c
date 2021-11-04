#include <stdio.h>

int myfunc(int a, int b)
{
	//auto int sum;
	//extern int sum;
    static int myvar;
    myvar++;
    printf("The sum is %d\n",myvar);
	 //sum = a+b;
	return myvar;
}
//int sum = 345;

int main()
{
	//int sum = myfunc(3,4);
    int myvar = myfunc(3,4);
    myvar = myfunc(3,4);
    myvar = myfunc(3,4);
    myvar = myfunc(3,4);
    //printf("The sum is %d\n",myvar);
    
    return 0;
}

