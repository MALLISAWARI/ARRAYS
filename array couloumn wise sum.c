#include<stdio.h>
int main()
{
	int a[10][10],rs,cs,i,j,csum=0;
	scanf("%d%d",&rs,&cs);
	for(i=0;i<rs;i++)
	{
		for(j=0;j<rs;j++)
		{
			csum=csum+a[j][i];
		}
   printf("%d",csum);
   csum=0;
   printf("\n");
	}
}
