#include<stdio.h>
int main()
{
	char ch;
	printf("Enter an uppercase character");
	scanf("%c",&ch);
	if (ch=='Head')
	{
		printf("Head");
	}
	else
	{
		printf("Tail");
	}
	return 0;
}
