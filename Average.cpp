#include<stdio.h>

int main()
{
	printf("\n\n\tstudytonight-Best place to learn\n\n\n");
	
	int n,i;
	float sum = 0,x;
	
	printf("Enter number of element:");
	scanf("%d",&n);
	printf("\n\n\nEnter %d element\n\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%f",&x);
		sum+=x;
		
	}
	printf("\n\n\nAvarge of the entered number is = %f",(sum/n));
	printf("\n\n\n\n\tcoding is fun!\n\n\n");
	return 0;
}
