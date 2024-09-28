
//a
//a b
//a b c
//a b c d
//a b c d e

#include<stdio.h>
main()
{
	int k;
	char s;
	printf("Enter any value :");
	scanf("%d", &k);
	for(int i=1;i<=k;i++)
	{
		s='a';
		for(int j=1;j<=i;j++)
		{
			printf("%c ", s);

			s++;
		}
		printf("\n");
	}
	
}
