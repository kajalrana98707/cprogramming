#include <stdio.h>
#include <stdlib.h>

int main()
{
   /*	//use of malloc
 	int n;
 	printf("Enter the size of the array you wnt to create\n");
 	scanf("%d",&n);
 	int* ptr;
 	ptr = (int*)malloc(3 * sizeof(int));
 	int i;
 	for(i = 0; i<n; i++)
 	{
 		printf("Enter the value no %d of this array\n",i);
 		scanf("%d",&ptr[i]);
	 }
	 
	 
 	for(i = 0; i<n; i++)
 	{
 		printf("Enter the value at %d of this array is %d\n",i,ptr[i]);
	 }*/
 	
 	
 	//use of calloc
 	int n;
 	printf("Enter the size of the array you wnt to create\n");
 	scanf("%d",&n);
 	int* ptr;
 	ptr = (int*)calloc(n , sizeof(int));
 	int i;
 	for(i = 0; i<n; i++)
 	{
 		printf("Enter the value no %d of this array\n",i);
 		scanf("%d",&ptr[i]);
	 }
	 
	 //int i;
 	for(i = 0; i<n; i++)
 	{
 		printf("Enter the value at %d of this array is %d\n",i,ptr[i]);
	 }
	 
	 
	//use of realloc
 
 	printf("Enter the size of the new array you want to create\n");
 	scanf("%d",&n);
 	int* ptr;
 	ptr = (int*)realloc(ptr , n*sizeof(int));
 	int i;
 	for(i = 0; i<n; i++)
 	{
 		printf("Enter the new value no %d of this array\n",i);
 		scanf("%d",&ptr[i]);
	 }
	 
	 int i;
 	for(i = 0; i<n; i++)
 	{
 		printf("Enter the new value at %d of this array is %d\n",i,ptr[i]);
	 }
  
    
    return 0;
}

