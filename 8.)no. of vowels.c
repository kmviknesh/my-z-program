#include<stdio.h>
#include<string.h>

int main()
{
	char str[25],ch[5]={'a','e','i','o','u'};
	int i=0,j,count;
	
	printf("Enter the string...");
	scanf("%s",str);
	
	while(i<5)
	{
		count = 0;
		for(j=0;j<strlen(str);j++)
		{
			if(str[j] == ch[i])
			{
				count++;
			}
		}
		printf("%c : %d\n",ch[i],count);
		i++;
	}
}
