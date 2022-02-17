#include<stdio.h>
int main()
{
	int a[10][10],rs,cs,i,j;
	scanf("%d%d",&rs,&cs);
	for(i=0;i<rs;i++)
	{
		for(j=0;j<cs;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
}
