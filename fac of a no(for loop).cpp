#include<stdio.h>
int main()
{
	int i,n,factorial;
	printf("Enter n=");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		factorial=factorial*i;
	}
	printf("factorial of a number is %d",factorial);
	return 0;
}
