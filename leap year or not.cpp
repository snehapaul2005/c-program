#include<stdio.h>
int main()
{
	int year;
	printf("Enter the year:");
	scanf("%d",&year);
	if(year%400==0&&year%100==0)
	{
		printf("Its a leap year");
	}
	else if(year%4==0)
	{
	printf("Its a leap year");	
	}
	else
	{
		printf("Its not a leap year");	
	}
	return 0;
}
