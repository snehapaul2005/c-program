#include<stdio.h>
int main()
{
	int n,r,rev=0;
	printf("Enter n=");
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		n=n/10;
		rev=(rev*10)+r;
	}
	printf("Reverse of a number is %d",rev);
	return 0;
}
