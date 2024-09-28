
// Write a program make a summation of given number (E.g., 1523 Ans: -11)

#include<stdio.h>  
main()    
{    
	int k,sum=0,ans;    
	printf("Enter a number:");    
	scanf("%d",&k);    
	while(k>0)    
	{    
		ans=k%10;    
		sum=sum+ans;    
		k=k/10;    
	}    
		printf("Sum is = %d",sum);    
  
}   
