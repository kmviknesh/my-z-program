#include<stdio.h>
// magic square for 5 order matrix
void main()
{
  int n=5,p,q,k;
  int matrix[5][5];

  int r = n * n;
  int i=0, j=n/2;     

  for (k=1; k<=r; ++k) 
  {
    matrix[i][j] = k;

    i--;
    j++;

    if (k%n == 0) 
    { 
      i += 2; 
      --j; 
    }
    else 
    {
      if (j==n) 
        j -= n;
      else if (i<0) 
        i += n;
    }
  }
  for(p=0;p<n;p++)
  {
  	for(q=0;q<n;q++)
  	{
  		printf("%d\t",matrix[p][q]);
	}
	printf("\n");
  }
}
