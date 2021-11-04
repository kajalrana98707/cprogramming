//#include <stdio.h>




//int main()
//{
//	int a= 4;
//	int b= 5;
//	int c;
//	printf("a=>%d\nb=>%d",a,b);
	
	//c= b;//b=5, c=5
	//b= a;//a=4, b=4
//	a= c;//c=5, a=5
	
//	printf("\na=>%d\nb=>%d",a,b);
	
	
   // return 0;
//}





//#include <stdio.h>

//void my_function(int num){
//	num= 5;
//}
//int main()
//{
//	int a= 4;
	
//	printf("a=>%d",a);
//	my_function(a);
//	printf("\n\na=>%d",a);
	
//	    return 0;
//}




#include <stdio.h>

void my_function(int *num){
	*num= 5;
}
int main()
{
	int a= 4;
	
	printf("a=>%d",a);
	my_function(&a);
	printf("\n\na=>%d",a);
	
	    return 0;
}


