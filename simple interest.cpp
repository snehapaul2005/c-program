#include<stdio.h>
int main()
{
	float Si,p,r,t;
	printf("p is=");
	scanf("%f",&p);
	printf("r is=");
	scanf("%f",&r);
	printf("t is=");
	scanf("%f",&t);
	Si=p*r*t/100;
	printf("interest is %f and %f",Si);
	return 0;
}
