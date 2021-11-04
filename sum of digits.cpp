#include<stdio.h>

int main()
{
	printf("\n\n\tstudytonight-Best place to learn\n\n\n");
	
	int n,sum =0,c,remainder;
	printf("Enter the number you want to add digits of:");
	scanf("%d",&n);
	
	while(n!=0)
	{
		remainder=n%10;
		sum+=remainder;
		n=n/10;
		
	}
	printf("\n\nsum of the digits of the entered number is = %d\n\n",sum);
	printf("\n\n\n\n\t\t\tcoding is fun!\n\n\n");
	
	return 0;
}
