#include<stdio.h>
int main()
{
	int n,i,flag=1;
	
	printf("Enter The n number:");
	scanf("%d",&n);
	
	if(n==1)
	{
		flag=1;
	}
	else
	{
		for(i=2;i<=n;i++)
		{
			if(n%i==0)
			{
				flag=0;
				break;
			}
		}
	}
	if(flag==1)
	{
		printf("This is prime no");
	}
	else
	{
		printf("This is not prime no");
	}
	
	return 0;
}