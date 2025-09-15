#include<stdio.h>
int main()
{
	int i,j,n;
	int r=1;
	printf("enter the no:");
	scanf("%d",&n);
	int s=n-1;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=s;j++)
		{
			printf(" ");
		}
		for(j=1;j<=2*r-1;j++)
		{
			printf("*");
	    }
	    r++;
	    s--;
		printf("\n");
	}
}
