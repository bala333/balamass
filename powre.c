#include <stdio.h>
int main()
{
    int base, exponent;
    long result = 1;
    printf("Enter a base number");
    scanf("%d", &base);
    printf("\n Enter an exponent");
    scanf("%d", &exponent);
    while (exponent != 0)
    {
        result *= base;
        --exponent;
    }
    printf("\n Answer = %ld", result);
}
