#include<stdio.h>
int main()
{
	int mat[2][2],trans[2][2],i,j;
	printf("Enter Matrix Elements: ");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{ 
			scanf("%d",&mat[i][j]);
		}
	}
     printf("Matrix Elements:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d ",mat[i][j]);
		}
		printf("\n");
	}
		for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			trans[j][i]=mat[i][j];
		}
	}
	printf("Transpose Elements:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d ",trans[i][j]);
		}
		printf("\n");
	}
	return 0;
	}
