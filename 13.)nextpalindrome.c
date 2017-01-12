#include <stdio.h>
#include<string.h>

int main()
{
	int n,rem,rev,a,b,flag;
	flag=0;
	scanf("%d",&n);
	n=n+1;
	a=b=n;
	while(1)
	{
		rev=0;
		
		while(a>0)
		{
			rem=a%10;
			rev=rev*10+rem;
			a=a/10;
		}
		if(rev==b)
		{
			printf("%d",b);
			break;
		}
		b++;
	}
	return 0;
}

