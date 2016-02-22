/*HCF using recursive function. */
/* Author : Md.Abu Sayed */
#include <stdio.h>
int hcf(int a, int b);
int main()
{
   int a,b;
   printf("Enter two positive integers: ");
   scanf("%d%d", &a, &b);
   printf("H.C.F of %d and %d = %d", a, b, hcf(a,b));
   return 0;
}
int hcf(int a, int b)
{
    if (b!=0)
       return hcf(b, a%b);
    else
       return a;
}
