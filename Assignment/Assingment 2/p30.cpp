#include<stdio.h>
struct Student
{
	int roll;
	char grd;
};
union Demo
{
	int num;
	char ch;
		
};
int main()
{
	struct Student s1;
	union Demo d1;
	s1.roll = 10;
	s1.grd = 'A';
	printf("\n structur:------");
	printf("\nValue of num = %d",s1.roll);
	printf("\nValue of ch = %c",s1.grd);
	
	printf("\n -------------------------------------------------------------------------- \n ");
	
	printf("\n union:------");
	d1.num = 65;
	d1.ch = 'Z';
	printf("\nValue of num = %d",d1.num);
	printf("\nValue of ch = %c",d1.ch);
	
	
	return 0;
}

