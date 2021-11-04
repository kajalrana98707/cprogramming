#include <stdio.h>
#include <string.h>
struct student
{
	int id;
	int marks;
	char fav_char;
	char name[34];
};

int main()
{
  struct student Kajal, soni, Jyoti;
  Kajal.id = 1; 
  soni.id  = 2;
  Jyoti.id = 3;
  Kajal.marks = 466;
  soni.marks  = 436;
  Jyoti.marks = 476;
  Kajal.fav_char = 'p';
  soni.fav_char  = 'p';
  Jyoti.fav_char = 'p';
  strcpy(Kajal.name,"Kajal Rana student of the year");  
  printf("Kajal got %d marks\n",Kajal.marks);
  printf("Kajal's name is: %s\n",Kajal.name);
    return 0;
}

