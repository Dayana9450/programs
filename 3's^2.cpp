#include<stdio.h>
int main()
{
	int i,n,even_sum=0,odd_sum=0;
	printf("enter a no:");
	scanf("%d",&n);
	for(i=3;i<=n;i++)
	{
		if(i%3==0)
		printf(" %d ",i*i);
	}
	return 0;
}
