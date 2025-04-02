#include<stdio.h>
int main()
{
	int a,b;
	printf("a is=");
	scanf("%d",&a);
	printf("b is=");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("number is %d\n",a);
	printf("number is %d\n",b);
	return 0;
}
