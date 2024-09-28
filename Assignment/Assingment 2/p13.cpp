
//WAP to print factorial of given number  

#include<stdio.h>
main()
{
	int i,k = 1,num;
	printf("Enter any number :");
	scanf("%d", &num);
	
	for(i=1; i<=num; i++)
		k = k * i;
		
		
		printf("The factorial of %d : %d", num, k);
	
}

