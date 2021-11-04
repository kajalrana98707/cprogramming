#include <stdio.h>

int main()
{
    int a = 34;
    int *ptr = &a;
    if (ptr != NULL){
	
    printf("The address of  a is %d\n",*ptr);
}
    else{
    	printf("The pointer is a null pointr and cannot be dereferenced");
	}
    
    return 0;
}

