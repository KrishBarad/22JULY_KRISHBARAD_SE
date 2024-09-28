
//WAP to find simple interest 
 
#include<stdio.h>
main()
{
	float k,s,b;
	float SI;
	
	printf("Enter a value of Principal :",k);
	scanf("%f",&k);
	
	printf("\nEnter a value of Rate :",s);
	scanf("%f",&s);
	
	printf("\nEnter a value of Time :",b);
	scanf("%f",&b);
	
	SI=(k * s * b)/100;
	printf("\nThe simple interest is :%f",SI);
	
}
