
//WAP to make simple calculator (operation include Addition, Subtraction, Multiplication, Division, modulo)  

#include<stdio.h>
main()
{
	int k,s;
	char b;
	printf("Enter a value of k :");
	scanf("%d",&k);
	printf("\nEnter a value of s :");
	scanf("%d",&s);
	printf("\nEnter any operator (+,-,*,/,%%) :");
	scanf(" %c",&b);
	
	if(b=='+'){
		printf("\nadd= %d",k+s);
	}
	else if(b=='-')
	{
		printf("\nsub= %d",k-s);
	}
	else if(b=='*')
	{
		printf("\nmul= %d",k*s);
	}
	else if(b=='/')
	{
		printf("\ndiv= %d",k/s);
	}
	else
	{
		printf("\nError");
	}
}
