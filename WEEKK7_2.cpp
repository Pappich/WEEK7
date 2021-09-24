#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define _CRT_SECURE_NO_WARNINGS 
int indexof(char *alpaben,char c)
{
	for(int i=0;i<strlen(alpaben);i++)
	{
		if(c == alpaben[i])
		{
			return i;
		}
	}
	return -1;
}
	void morse(char *text)
	{
	char str[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *morse[] = {".-","-...","-.-.","-.." ,".","..-.","--." ,"....","..",".---","-.-",".-.."
                	,"--","-.","---",".--.","--.-",".-." ,"..." ,"-"   ,"..-" ,"...-",".--" ,"-..-"
                	,"-.--","--.."};
	for(int i=0;i<strlen(text);i++)
	{
		int position = indexof(str,(char)toupper(text[i]));
		if(position != -1)
		{
			printf("%s ",morse[position]);
		}
	}
	}
int main()
{
	char text[100];
	scanf_s("%s",&text);
	morse(text);
	return 0;
}
