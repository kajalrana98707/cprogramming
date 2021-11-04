#include <stdio.h>

int main()
{
	int arr[]= {11,42,3,4,5,6,7};
	printf("Value at position 3 of the array is %d\n",arr[1]);
	printf("The address of first element of the arrey is %d\n",&arr[0]);
	printf("The address of first element of the arrey is %d\n",arr);
	printf("The address of secend element of the arrey is %d\n",&arr[1]);
	printf("The address of secend element of the arrey is %d\n",arr+1);
	
	

	printf("The value at address of first element of the arrey is %d\n",*(&arr[0]));
	printf("The value at address of first element of the arrey is %d\n",arr[0]);
	printf("The value at address of first element of the arrey is %d\n",*(arr));
	printf("The value at address of secend element of the arrey is %d\n",*(&arr[1]));
	printf("The value at address of secend element of the arrey is %d\n",*(arr+1));

	
	
	
	
    return 0;
}

