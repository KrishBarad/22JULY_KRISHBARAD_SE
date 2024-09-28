
// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15


#include<stdio.h>
main()
{
	int k,s=1;
	printf("Enter any value :");
	scanf("%d", &k);
	for(int i=1;i<=k;i++)
	{
		for(int j=1;j<=i;j++)
		{
			printf("%d ", s);
			s++;
		}
		printf("\n");
	}
	
}
