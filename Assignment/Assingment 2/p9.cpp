//WAP to find number is even or odd using ternary operator  

#include<stdio.h>
main()
{
	int k;
	char r,e[]={"even"};
	char o[]={"odd"};
	
	printf("Enter any number ");
	scanf("%d",&k);
	
	
	printf("%s",(k%2==0)?e:o);
	
}
