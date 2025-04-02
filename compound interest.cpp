#include<stdio.h>
#include<math.h>
int main()
{
	float A,CI,P,r,t;
	printf("Enter the principle:");
	scanf("%f",&P);
	printf("Enter the rate:");
	scanf("%f",&r);
	printf("Enter the time period:");
	scanf("%f",&t);
	A=P*pow((1+r/100),t);
	CI=A-P;
	printf("Hence %f/n",A);
	printf("The compound interest is %f",CI);
	return 0;
	
	
}
