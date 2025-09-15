#include<stdio.h>
int main()
{
	int i,j,n=4;
	int stars=1,spaces=n-1;
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
		stars+=2;
		spaces--;
		printf("\n");
	}
		stars=stars-4,spaces=1;
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
		stars-=2;
		spaces++;
		printf("\n");
	}
}
