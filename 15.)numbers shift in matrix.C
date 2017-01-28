#include<stdio.h>
#include<conio.h>
void display(int mat[4][4])
{
	int i,j;
	for(i=0;i<4;i++)
	{
		printf("\n-------------\n|");
		for(j=0;j<4;j++)
		{
			if(mat[i][j]==32)
			{
				printf("%c |",mat[i][j]);
			}
			else if(mat[i][j]>9)
			{
				printf("%d|",mat[i][j]);
			}
			else
			{
				printf(" %d|",mat[i][j]);
			}
		}
	}
	printf("\n-------------\n");
}
int main()
{
	clrscr();
	int mat[4][4];
	int i,j,a=0,m=2,n=3;
	char c;
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			if(i==2&&j==3)
			{
				mat[i][j]=32;
			}
			else
			{
				mat[i][j]=a++;
			}
		}
	}
	display(mat);
	do
	{
		printf("u-> up d-> down r-> right l-> left \n Enter the choice:");
		scanf("%c",&c);
		if((c=='u'||c=='U')&&(m!=0))		
		{
			mat[m][n]=mat[m-1][n];
			m--;
			mat[m][n]=32;
		}
		if((c=='d'||c=='D')&&(m!=3))		
		{
			mat[m][n]=mat[m+1][n];
			m++;
			mat[m][n]=32;
		}
		if((c=='l'||c=='L')&&(n!=0))		
		{
			mat[m][n]=mat[m][n-1];
			n--;
			mat[m][n]=32;
		}
		if((c=='r'||c=='R')&&(n!=3))		
		{
			mat[m][n]=mat[m][n+1];
			n++;
			mat[m][n]=32;
		}
		clrscr();
		display(mat);
	}while(c!='q'||c!='Q');
	clrscr();
}
