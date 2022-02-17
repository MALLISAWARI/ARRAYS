#include<stdio.h>
int main()
{
	int x[10],even[10],odd[10],i,j=0,k=0;
	for(i=0;i<10;i++)
	scanf("%d",&x[i]);
	for(i=0;i<10;i++)
	{
		if(x[i]%2==0)
		even[j++]=x[i];
		else
		odd[k++]=x[i];
	}
	for(i=0;i<j;i++)
	printf("%d",odd[j]);
	for(i=0;i<k;i++)
	printf("%d",even[k]);
	return 0;
}
