//WAP to find reverse of string using recursion

#include<stdio.h>
main()
{
	char k[10];
	char s[10];
	int i=0,n=0,j=0;
	printf("Enter a your string : ");
	gets(k);
	while(k[i]!='\0')
	{
		i++;
		n++;
	}
	printf("string lenght : %d",i);
	printf("\nNEW: %s",k);
	for(int j=0;j<i;j++)
	{
		s[n]=k[j];
		n--;	
	}
	printf("\nreverse string is : %s",s);
	
}
