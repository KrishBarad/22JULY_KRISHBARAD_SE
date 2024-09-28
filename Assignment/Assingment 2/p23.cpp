//WAP to find factorial using recursion 

#include <stdio.h>

int factorial(int i)
{
    if (i > 0)
    {
        return i * factorial(i - 1);
    }
    else
    {
        return 1;
    }
}
main()
{
    int k;

    printf("Enter number:- ");
    scanf("%d", &k);

    printf("%d", factorial(k));
	return 0;
}
