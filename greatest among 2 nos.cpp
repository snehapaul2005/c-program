#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter a=");
	scanf("%d",&a);
	printf("Enter b=");
	scanf("%d",&b);
	if(a>b)
	{
		printf("Greatest number is %d",a);
	}
	else
	{
		printf("Greatest number is %d",b);
	}
	return 0;
	}
