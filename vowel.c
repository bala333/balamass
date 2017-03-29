#include<stdio.h>
int main()
{
	char c;
	int lowercasevowel,UPPERCASEVOWEL;
	printf("enter an alphabet");
	scanf("%c",&c);
	lowercasevowel =(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
	UPPERCASEVOWEL =(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
	if(lowercasevowel||UPPERCASEVOWEL)
	{
		printf(" is a vowel");
	}
	else
	printf(" is a consonant");
}
