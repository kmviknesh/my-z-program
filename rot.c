#include<stdio.h>
//#include < conio.h > 
void main()
{
	long n,d,n1;
	int pos,i,x,y,z;
//	clrscr();
	printf("\n Enter a number : ");
	scanf("%ld",&n);
	printf("\n Enter the positions : ");
	scanf("%d",&pos);
	n1=n;
	d=1;
	while (n1>9)
	{
		n1=n1/10;
		d=d*10;
		//printf("\n div = %d  ",div);
	} // while
	
	for(i=1;i <=pos;i++)
	{
		
		x=n/d;
		//printf("\n %d ",x);
		y=n%d;
		//printf("\n %d ",y);
		z=y*10;
		//printf("\n %d ",z);
		n=z+x;
		//printf("\n rotation: %d left shifted number: %ld",i,n);
	} // for
	printf("\n rotation: %d left shifted number: %ld",i-1,n);
} // main
