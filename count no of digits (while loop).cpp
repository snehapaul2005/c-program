#include<stdio.h>
int main()
{
	int n,c=0;
	printf("Enter n=");
	scanf("%d",&n);
	if(n==0)
	{
		printf("There is only one digit in the number",c);
	}
	else
	{
		while(n!=0)
		{
			n=n/10;
			c++;
		}
		printf("There are %d in the number",c);
	}
	return 0;
}
