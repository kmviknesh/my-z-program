#include<stdio.h>
#include<string.h>

int main()
{
	char str[25],s1[25];
	int i,j,l;

	printf("Enter the string...");
	gets(str);
	strcpy(s1,str);
	strrev(s1);
	if(strcmp(str,s1)==0)
	{
		printf("%s is a Palindrome",str);
	}
	else
	{
		printf("%s is not a Palindrome",str);
	}
	return 0;
}
