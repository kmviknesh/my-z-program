// NOTE : to understand the sequence of program eliminate the command lines in the program

#include <stdio.h>
int isprime(int n)
{
	//printf("in fn %d\n",n);
    int i,f=1;
    for(i=2;i<n/2;i++)
    {
        if(n%i==0)
        {
            f=0;
            break;
        }
    }
    return f;
}

int main(void) 
{
    int n;
    scanf("%d",&n);
    n++;
    //printf("%d\n",n);
    while(isprime(n++)!=1);
    //printf("%d\n",n);
    n--;
    printf("%d\n",n);
	return 0;
}
