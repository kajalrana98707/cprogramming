#include<stdio.h>

int main()
{
	printf("\n\n\t\tstudytonight-best place to learn\n\n\n");
	int num,i;
	printf("Enter the number to find the factors of:");
	scanf("%d",&num);
	printf("\n\n\nfactors of %d are \n\n",num);
	
	for(i=1;i<=num/2;i++)
	{
		if(num%i==0)
		printf("\t\t\t%d\n",i);
		
	}
	printf("\n\n\n\n\t\t\tcoding is fun!\n\n\n");
	return 0;
}
