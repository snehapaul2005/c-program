#include<stdio.h>
int main()
{
	int i,sum=0;
	for(i=1;i<=20;i+2)
	{
		sum=sum+i;
	}
	printf("sum of first 10 odd natural number is %d",sum);
	return 0;
}
