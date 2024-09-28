//WAP of Addition, Subtraction, Multiplication and Division using Switch case.(Must Be Menu Driven)  

#include<stdio.h>
main()
{
	int k,s;
	char choose;
	printf("Enter a value of k :");
	scanf("%d",&k);
	printf("\nEnter a value of s :");
	scanf("%d",&s);
	printf("\nEnter any operator (+,-,*,/,%%) :");
	scanf(" %c",&choose);
	
	switch(choose)
	{
		case '+':
		printf("\nadd:%d",k+s);
		break;
		
		case '-':
		printf("\nsub:%d",k-s);
		break;
		
		case '*':
		printf("\nmul:%d",k*s);
		break;
		
		case '/':
		printf("\ndiv:%d",k/s);
		break;
		
		default:
		printf("\nError!plz Enter a valid choice");
	}

}
