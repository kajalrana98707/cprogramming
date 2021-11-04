#include <stdio.h>
/*
print a multiplication table of a number entered by the user in prettyform

Examlpe:
Input
Enter the numbr you want multiplication table of:
6


Output:
Table of 6:
6*1 =6
6*2 =12
6*3 =18
6*4 =24
6*5 =30
6*6 =36
6*7 =42
6*8 =48
6*9 =54
6*10 =60
*/
int main()
{
 int a= 18;
 int b=1 ;
 printf("%d*%d=%d",a,b,a*b);
 printf("\n%d*%d=%d",a,b,a*(++b));
 printf("\n%d*%d=%d",a,b,a*(++b));
 printf("\n%d*%d=%d",a,b,a*(++b));
 printf("\n%d*%d=%d",a,b,a*(++b));
 printf("\n%d*%d=%d",a,b,a*(++b));
 printf("\n%d*%d=%d",a,b,a*(++b));
 printf("\n%d*%d=%d",a,b,a*(++b));
 printf("\n%d*%d=%d",a,b,a*(++b));
 printf("\n%d*%d=%d",a,b,a*(++b));
  return 0;
}

