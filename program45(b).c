#include <stdio.h>

void main()
{
	int a [5];
	int i;
	
	printf("Enter  5 number\n");

	for(i=0; i<5; i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Even number");
	
	for(i=0; i<5; i++)
	{
		if(a[i]%2==0){
			
			printf("%d",a[i]);
		}
	}
	
	
   }

