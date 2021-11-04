#include <stdio.h>

void swap(int *a, int *b)
{
	*a =*a+*b;
	*b =(*a-*b)-*b;
	
	
}
int main()
{
	int a , b;
	printf("Enter value of a and b");
	//scanf("%d%d",&a&b);
	callbyref(&a,&b);
	printf("The values of a=%d and b= %d",a,b);
	
   
}


//quick quiz:
//Given two number a and b, add them then subtract them and assign them to a and b using call by reference.

//a =4
//b =3

///after running the function, the values of a and b should be:
//a= 7
//b= 1
