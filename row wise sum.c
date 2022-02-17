#include<stdio.h>
int main()
{
	int a[10][10],rs,cs,i,j,rsum=0;
	scanf("%d%d",&rs,&cs);
	for(i=0;i<rs;i++)
	{
		for(j=0;j<cs;j++)
		{
			rsum=rsum+a[i][j];
		}
 printf("%d",rsum);
 rsum=0;
 printf("/n");
	}	
}
