#include<stdio.h>
int main()
{
	char ch,uc,lc;
	printf("enter a character");
	scanf("%c",&ch);
	if(ch>=97 && ch<=122)
	{
		printf("Lowercase");
	}
	else
	printf("Uppercase");
}
