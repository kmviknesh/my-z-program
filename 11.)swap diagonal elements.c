
#include <stdio.h>
 
void main ()
{
    static int array[10][10];
    int i, j, n, a;
 
    printf("Enter the order of the matix \n");
    scanf("%d",&n);
        printf("Enter the elements of the matrix\n");
        for (i = 0; i < n; ++i)
        {
            for (j = 0; j < n; ++j)
            {
                scanf("%dx%d", &array[i][j]);
            }
        }
        printf("The given matrix is \n");
        for (i = 0; i < n; ++i)
        {
            for (j = 0; j < n; ++j)
            {
                printf(" %d", array[i][j]);
            }
            printf("\n");
        }
        for (i = 0; i < n; ++i)
        {
            a = array[i][i];
            array[i][i] = array[i][m - i - 1];
            array[i][m - i - 1] = a;
        }
        printf("After changing diagonals\n");
        for (i = 0; i < n; ++i)
        {
            for (j = 0; j < n; ++j)
            {
                printf(" %d", array[i][j]);
            }
            printf("\n");
        }
    }
