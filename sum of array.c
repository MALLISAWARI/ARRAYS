#include<stdio.h>
int main()
{
	int a[10][10],rs,cs,i,j,s=0;
	scanf("%d%d",&rs,&cs);
	for(i=0;i<rs;i++)
	{
	  for(j=0;j<cs;j++)
	  {
	  	scanf("%d",&a[i][j]);
	  }
	}
 for(i=0;i<rs;i++)
 {
 	for(j<0;j<cs;j++)
 	{
 		s=s+a[i][j];
	 }
 }
 printf("%d",s);
}
