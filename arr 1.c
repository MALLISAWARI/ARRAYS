#include<stdio.h>
#include<conio.h>
int main()
{
	int marks[6],i,tot=0;
	//reading of marks
	for(i=0;i<6;i++)
	scanf("%d",&marks[i]);
	for(i=0;i<6;i++)
	{
		tot=tot+marks[i];
	}
	printf("%d",tot);
	getch();
	return 0;
}
