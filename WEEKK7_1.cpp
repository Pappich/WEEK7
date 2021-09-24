#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS 
int main()
{
	char text[100];
	char A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z;
	char a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z;
	scanf_s("%s",&text);
	for(int i=0;i<text[i];i++)
	{
	switch (text[i])
	{
		case 'a':
		case 'A':
			printf(".- ");
			break;
		case 'b':
		case 'B':
			printf("-... ");
			break;
		case 'c':
		case 'C':
			printf("-.-. ");
			break;
		case 'd':
		case 'D':
			printf("-.. ");
			break;
		case 'e':
		case 'E':
			printf(". ");
			break;
		case 'f':
		case 'F':
			printf("..-. ");
			break;
		case 'g':
		case 'G':
			printf("--. ");
			break;
		case 'h':
		case 'H':
			printf(".... ");
			break;
		case 'i':
		case 'I':
			printf(".. ");
			break;
		case 'j':
		case 'J':
			printf(".--- ");
			break;
		case 'k':
		case 'K':
			printf("-.- ");
			break;
		case 'l':
		case 'L':
			printf(".-.. ");
			break;
		case 'm':
		case 'M':
			printf("-- ");
			break;
		case 'n':
		case 'N':
			printf("-. ");
			break;
		case 'o':
		case 'O':
			printf("--- ");
			break;
		case 'p':
		case 'P':
			printf(".--. ");
			break;
		case 'q':
		case 'Q':
			printf("--.- ");
			break;
		case 'r':
		case 'R':
			printf(".-. ");
			break;
		case 's':
		case 'S':
			printf("... ");
			break;
		case 't':
		case 'T':
			printf("- ");
			break;
		case 'u':
		case 'U':
			printf("..- ");
			break;
		case 'v':
		case 'V':
			printf("...- ");
			break;
		case 'w':
		case 'W':
			printf(".-- ");
			break;
		case 'x':
		case 'X':
			printf("-..- ");
			break;
		case 'y':
		case 'Y':
			printf("-.-- ");
			break;
		case 'z':
		case 'Z':
			printf("--.. ");
			break;	
	}
	}
	return 0;
}
