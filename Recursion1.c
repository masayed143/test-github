/* fac n number */
/*Tuthor : MD.ABU SAYED */
#include <stdio.h>
int fac(int n);
int main(){
    int n,f;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    f=fac(n);
    printf("Fac=%d",f);
}
int sum(int n){
    if(n==0)
       return n;
    else
       return n+sum(n-1);    /*self call  to function sum() */
}
