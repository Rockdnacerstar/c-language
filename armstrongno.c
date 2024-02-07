#include<stdio.h>
int main()
{
	int n,r,temp,sum=0;
	
	printf("Enter The n");
	scanf("%d",&n);
	
	temp=n;
	
	while(n>0)
	{
		r=n%10;
      sum=sum+(r*r*r);
      n=n/10;
	}
	if(sum==temp)
	{
		printf("\nThis is Armstorng no ");
	}
	else 
	{
		printf("\nThis is not Armstong no");
	}
	return 0;
}