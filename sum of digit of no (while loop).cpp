#include<stdio.h>
int main()
{
	int n,r,sum;
	printf("Enter n=");
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		sum=sum+r;
		n=n/10;
	}
	printf("sum of the digit of the number is %d",sum);
	return 0;
}
