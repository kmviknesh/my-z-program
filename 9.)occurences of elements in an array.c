#include<stdio.h>

int search(int*,int,int);

int main()
{
	int arr[15],i,k,n;
	
	printf("Enter number of elements...");
	scanf("%d",&n);
	printf("Enter array elements...");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("Enter search key...");
	scanf("%d",&k);
	
	printf("%d\n",search(arr,n,k));
	
}

int search(int *a,int n,int k)
{
	int i,count=0;
	
	for(i=0;i<n;i++)
	{
		if(a[i]==k)
		{
			break;
		//count++;
		}
	}
	/*here the first occurence of a number is taken 
	eg:
	i/p: 11323145
	search key: 1
	o/p: 2
	the first 2 times occuring 1 is taken in count and the future 1 is discarded*/
	while(a[i] == k)
	{
		count++;i++;
	}
	return count;
}
