#include <stdio.h>

void starpattern(int rows)
{
	int i;
	for(i=0; i<rows; i++)
	{
		int j;
		for(j=0; j<=i; j++)
		{
			printf("*");
		}
	printf("\n");
	}
}


void reverseStarpattern(int rows)
{
	int i;
	for(i=0; i<rows; i++)
	{
		int j;
		for(j=0; j<=rows-i-1; j++)
		{
			printf("*");
		}
	printf("\n");
	}
}

int main()
{
	int rows;
    printf("How many rows do you want?\n ");
    scanf("%d",&rows);
    reverseStarpattern(rows);
    
    return 0;
}

