#include <stdio.h>


int fib_recursive(int n)
{
	if(n==1||n==2){
	
	return n-1;
	
}
	else{
		return fib_recursive(n-1)+fib_recursive(n-2);
		
	}
}

int fib_iterative(int n)
{
	return 0;
}
int main()
{
	int number;
    printf("Enter the index to get fibonsacci series\n");
    scanf("%d",&number);
    printf("The value of fibonacci number at position no %d using iterative approach is %d\n",number,fib_iterative(number));
    printf("The value of fibonacci number at position no %d using recursive approach is %d\n",number,fib_recursive(number));
    return 0;
}

