
//WAP to take two Array input from user and sort them in ascending or descending order as per user’s choice  


#include <stdio.h>
main()
{
    int k,r;
    printf("Enter number of elements :- ");
    scanf("%d", &k);
    
    int s[k],b[k];
    printf("Enter value of A : \n");
    for (int i=0;i<k;i++)
    {
        printf("Enter value :- ");
        scanf("%d", &s[i]);
    }
    printf("\nEnter value of B : \n");
    for (int i=0;i<k;i++)
    {
        printf("Enter value :- ");
        scanf("%d", &b[i]);
    }
    printf("\nFor Ascending order type: 1");
    printf("\nFor Decending order type: 2");
    printf("\nYour Choice :- ");
    scanf("%d", &r);

	// Ascending order
    if (r==1)
    {
        for (int i=0;i<k;i++)
        {
            for (int j=0;j<k;j++)
            {
                if (s[i]<s[j])
                {
                    s[i]=s[i]+s[j];
                    s[j]=s[i]-s[j];
                    s[i]=s[i]-s[j];
                }
            }
        }

        for (int i=0;i<k;i++)
        {
            for (int j=0;j<k;j++)
            {
                if (b[i]<b[j])
                {
                    b[i]=b[i]+b[j];
                    b[j]=b[i]-b[j];
                    b[i]=b[i]-b[j];
                }
            }
        }
		 printf("\nAfter sort A : ");
        for (int i=0;i<k;i++)
        {
            printf("%d ", s[i]);
        }
        printf("\nAfter sort B : ");
        for (int i=0;i<k;i++)
        {
            printf("%d ", b[i]);
        }
    }

    // Decending order
    else if (r==2)
    {
        for (int i=0;i<k;i++)
        {
            for (int j=0;j<k;j++)
            {
                if (s[i]>s[j])
                {
                    s[i]=s[i]+s[j];
                    s[j]=s[i]-s[j];
                    s[i]=s[i]-s[j];
                }
            }
        }
		for (int i=0;i<k;i++)
        {
            for (int j=0;j<k;j++)
            {
                if (b[i]>b[j])
                {
                    b[i]=b[i]+b[j];
                    b[j]=b[i]-b[j];
                    b[i]=b[i]-b[j];
                }
            }
        }

        printf("\nAfter sort A : ");
        for (int i=0;i<k;i++)
        {
            printf("%d ", s[i]);
        }
        printf("\nAfter sort B : ");
        for (int i=0;i<k;i++)
        {
            printf("%d ", b[i]);
        }
    }
    else
    {
        printf("Invalid Input");
    }
}
