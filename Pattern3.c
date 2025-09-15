#include<stdio.h>
int main()
{
	int i,j,n,stars,spaces;
	printf("enter the number of rows:");
	scanf("%d",&n);
	stars=1;spaces=n-1;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=spaces;j++)
		{
			printf(" ");
		}
		for(j=1;j<=stars;j++)
		{
			printf("*");
	    }
	    stars++;
	    spaces--;
		printf("\n");
	}
}
