#include<stdio.h>
int main()
{
	int arr[5]={1,2,3,4,5};
	int n=sizeof(arr)/sizeof(arr[0]);
	int i;
	printf("Original array:");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n Reversed array:");
	{
		for(i=n-1;i>=0;i--)
		{
			printf("%d ",arr[i]);
		}
		return 0;
	}
}
