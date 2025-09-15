#include<stdio.h>
int main()
{
	int n,i;
	printf("multiplication of table 5:");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		printf(" 5 * %d = %d\n ",i,i*5);
	}
	return 0;
}
