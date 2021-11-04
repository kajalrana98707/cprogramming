#include <stdio.h>

int main()
{
    printf("Letslearn about pointers\n");
    int a=76;
    int* ptra= &a;
    printf("The addretss of pointers to a is %p\n",&ptra);
    printf("The value of a is %p\n",*ptra);
    return 0;
}

