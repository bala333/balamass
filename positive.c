#include<stdio.h>
int main()
{
	int i,sum=0,n;
	printf("enter the positive number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	sum=sum+i;
	printf("sum=%d",sum);
}
    
