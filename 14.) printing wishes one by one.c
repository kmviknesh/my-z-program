#include <stdio.h>
#include<windows.h>
#include<string.h>
int main() 
{
    char a[]="HAPPY PONGAL";
    int i,j;
    j = strlen(a);
    for(i=0;i<12;i++)
    {
        printf("%c",a[i]);
		fflush(stdout);
        Sleep(500);
    }
	return 0;
}
