#include <stdio.h>

int func1(int array[])
{
	int i;
	for( i = 0 ; i < 4 ; i++)
	{
		printf("The value at %d is %d\n",i,array[i]);
	}
	//array[0]= 345;//verry important point that if you chage any value here, it gets reflected in main()
	return 0;
}


void func2(int* ptr)
{
	int i;
	for( i = 0 ; i < 4 ; i++)
	{
		printf("The value at %d is %d\n",i,*(ptr+i));
	}
	*(ptr+2) = 6534;
}

void func3(int arr[2][2])
{
	int i;
	for(i = 0; i <2; i++)
	{
		int j;
		for(j = 0; j < 2; j++)
		{
	    	printf("The value at %d, %d is %d\n",i,j,arr[i][j]);
		}
	}
}
int main()
{
   int arr[][2] = {{2, 3},{9, 3}};
   //printf("The value at index 0 is %d\n",arr[0]);
   //func1(arr);
   //printf("The value at index 0 is %d\n",arr[0]);
   //func2(arr);
   //func2(arr);
   func3(arr);
    return 0;
}

