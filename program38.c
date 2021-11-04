#include <stdio.h>

int main()
{
	int num;
	printf("Enter a number you want multiplication table of:\n");
	scanf("%d",&num);
	
	printf("multiplication table of %d is as follows:\n",num);
	
	//printf("%d x 1 =%d\n",num,num*1);
	
	for(int i =1; i <10; i++)
	{
		
		printf("%d *%d = %d\n",num,i,num*i);
	}
    return 0;
}

