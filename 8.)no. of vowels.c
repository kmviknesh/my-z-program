#include<stdio.h>
#include<string.h>
int main()
{
	char str[100],ch;
	int n,a,e,i,o,u;
	a=e=i=o=u=0;
	printf("enter the string\n");
	gets(str);
	//puts(str);
	for(n=0;n<strlen(str);n++)
	{
		ch=str[n];
		//printf("%c\n",ch);
		switch(ch)
		{
			case 'a':
				a++;
				break;
			case 'e':
				e++;
				break;
			case 'i':
				i++;
				break;
			case 'o':
				o++;
				break;
			case 'u':
				u++;
				break;
			case 'A':
				a++;
				break;
			case 'E':
				e++;
				break;
			case 'I':
				i++;
				break;
			case 'O':
				o++;
				break;
			case 'U':
				u++;
				break;		
		}
	}
	printf("a :%d\ne :%d\ni :%d\no :%d\nu :%d\n",a,e,i,o,o,u);
	return 0;
}
