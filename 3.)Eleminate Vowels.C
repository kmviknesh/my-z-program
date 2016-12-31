#include<stdio.h>
#include<string.h>

int main()
{
	char st[50],nst[50],ch;
	int i,j=0,l=0;

	printf("Enter the string...\n");
	/*scanf("%c",&ch);
	while(ch != '\n')
	{
		st[l++] = ch;
		scanf("%c",&ch);
	}*/
	gets(st);

	for(i=0;i<strlen(st);i++)
	{
		ch = st[i];
		if((ch == 'a')||(ch == 'e')||(ch == 'i')||(ch == 'o')||(ch == 'u')||(ch == 'A')||(ch == 'I')||(ch == 'O')||(ch == 'U')||(ch == ' ')||(ch== 'E'))
		{
			continue;
		}
		else
		{
			nst[j] = ch;
			j++;
		}
	}
	nst[j]='\0';
	printf("%s\b",nst);
	return 0;

}
