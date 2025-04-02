#include<stdio.h>
int main()
{
	float f1,f2,c1,c2;
	printf("Enter the temperature in fahrenheit");
	scanf("%f",&f1);
	printf("Temperature in celsius scale is %f",c1=(f1-32)*5/9);
	scanf("%f",&c2);
	printf("Temperature in fahrenheit scale is %f",f2=(1.8*c2)+32);
	return 0;
	
}
