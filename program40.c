#include <stdio.h>

void printstar(int n)
{
	int i;
	for( i = 0;i < n; i++)
	{
		printf("%c",'*');
	}	

}
void main()
{
	
	printstar(7);
	printf("\n");
	printstar(2);	
    	
     return 0;
}

