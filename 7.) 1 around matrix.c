#include<stdio.h>
int main()
{
	int mat[100][100],i,j,r,c;
	printf("enter order matrix\n");
	scanf("%d%d",&r,&c);
	printf("enter the matrix\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&mat[i][j]);
		}
		printf("\n");
	} 
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if((i==0)||(i==r-1)||(j==0)||(j==c-1))
			{
				mat[i][j]=1;
			}
			printf("%d",mat[i][j]);
			printf("\t");
		}
		printf("\n");
	}
}
