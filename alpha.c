#include<stdio.h>
int main()
{
	char c;
	printf("enter the character");
	scanf("%c",&c);
    if((c>='a' && c<='z')||(c>='A' && c<='Z'))
	{
		printf(" is an alphabet");
	}
	else
	printf(" is not an alphabet");
}
