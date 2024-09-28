
//A
//B C
//D E F
//G H I J
//K L M N O


#include<stdio.h>
main()
{
	char s='A';
	int k;
	printf("Enter any value :");
	scanf("%d", &k);
	for(int i=1;i<=k;i++)
	{
		for(int j=1;j<=i;j++)
		{
			printf("%c ", s);
			s++;
		}
		printf("\n");
	}
	
}
