#include<stdio.h>
int main()
{
	int mat[100][100],i,j,n;
	printf("enter the rows of square matrix\n");
	scanf("%d",&n);
	printf("enter the matrix\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&mat[i][j]);
		}
		printf("\n");
	} 
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if((i==0)||(i==n-1)||(j==0)||(j==n-1))
			{
				mat[i][j]=1;
			}
			printf("%d",mat[i][j]);
			printf("\t");
		}
		printf("\n");
	}
}
