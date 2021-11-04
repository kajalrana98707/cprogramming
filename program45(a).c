#include <stdio.h>

void main()
{
	int a [5];
	int i;
	
	printf("Enter the 7 number\n");

	for(i=0; i<7; i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0; i<7; i++)
	{
		printf("%d",a[i]);
	}
   }

