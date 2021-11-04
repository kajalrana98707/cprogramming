#include <stdio.h>


int main()
{
	int marks[2][4]= {{45,38,55,8},
						{1,2,3,4}};
	int i;
		for(i=0; i<2; i++)
	{
		int j;
		for(j=0; j<4; j++)
		{
		//printf("The value of %d,%d element of the arrey is %d\n",i,j,marks[i][j]);
		printf("%d ",marks[i][j]);
		
		}
		printf("\n");	
	  
	}

	
	
	
	
		
    	
     return 0;
}

