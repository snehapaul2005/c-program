#include<stdio.h>
int main()
{
	int a,b,c;
	printf("a is=");
	scanf("%d",&a);
	printf("b is=");
	scanf("%d",&b);
	c=a;
	a=b;
	b=c;
	printf("number is %d\n",a);
	printf("number is %d\n",b);
	return 0;
}
