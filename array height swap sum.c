#include<stdio.h>
int main()
{
	int x[100],n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&x[i]);
    for(i=0;i<n/2;i++)
	{
	   int temp=x[i];
		x[i]=x[n-i-1];
		x[n-i-1]=temp;
		}
	for(i=0;i<n;i++)
	printf("%d",x[i]);		
}
