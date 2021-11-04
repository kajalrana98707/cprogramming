#include <stdio.h>

void printstr(char str[]){
	
	int i=0;
	while(str[i]!='\0')
	{
		printf("%c",str[i]);
		i++;
	}
	printf("\n");
}
int main()
{
    //char str[]=  {'k', 'a', 'j', 'a','l', '\0'};
    //char str[5]="kajal";
    char str[34];
    gets(str);
    printf("Using custom function printstr\n");
    printstr(str);
    printf("Using printf %s\n",str);
    printf("Using puts:\n");
    puts(str);
    
    return 0;
}

