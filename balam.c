#include<stdio.h>
int main()
{
	double number;
	printf("enter the number");
	scanf("%d",&number);
	if(number<=0.0)
	{
		if(number==0.0)
		printf("the number is zero");
		else
		printf("the number is nagative");
	}
	else
	printf("the number is pastive");
	return 0;
}
