#include<stdio.h>
int main()
{
	int n,fact=1,i;
	scanf("%d",&n);
	printf("the no is %d",n);
	printf("%d");
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("\n anwser:%d",fact);
	return 0;
}
