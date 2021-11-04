#include <stdio.h>

void changevalue(int* address)
{
	*address =345;
	
}
int main()
{
	int a =34, b= 54;
	printf("%d\n",a);
	changevalue(&a);
	printf("%d\n",a);
	
	
    
    return 0;
}

