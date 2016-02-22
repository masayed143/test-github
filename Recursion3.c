
/*
  GCD using Recursion
  Author : Md.Abu Sayed
 */
#include <stdio.h>

int gcd(int, int);

int main()
{
    int a,b,g;

    printf("Enter the two numbers to find their GCD: ");
    scanf("%d%d",&a,&b);
    g = gcd(a, b);
    printf("The GCD of %d and %d is = %d\n", a, b, g);
}

int gcd(int a, int b)
{
    while (a != b)
    {
        if (a > b)
        {
            return gcd(a - b, b);
        }
        else
        {
            return gcd(a, b - a);
        }
    }
    return a;
}
