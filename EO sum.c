#include<stdio.h>
int main()
{
	int i,n,even_sum=0,odd_sum=0;
	printf("enter the no:");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		if(i%2==1)
		odd_sum=odd_sum+i;
		else
		even_sum+=i;
	}
	printf("even_sum:%d,odd_sum:%d",even_sum,odd_sum);
	return 0;
}
