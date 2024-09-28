
//WAP to print table up to given numbers  

#include<stdio.h>
main()
{
	int k,i;
	printf("Enter any number :");
	scanf("%d", &k);
	for(i=1;i<=10;i++)
	{
		printf("%d * %d = %d\n",k ,i, k*i);
	}
}
