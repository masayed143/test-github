/* Sum n number */
/*Tuthor : MD.ABU SAYED */
#include <stdio.h>
int sum(int n);
int main(){
    int num,add;
    printf("Enter a positive integer: ");
    scanf("%d",&num);
    add=sum(num);
    printf("sum=%d",add);
}
int sum(int n){
    if(n==0)
       return n;
    else
       return n+sum(n-1);    /*self call  to function sum() */
}
/*sum(5)
=5+sum(4)
=5+4+sum(3)
=5+4+3+sum(2)
=5+4+3+2+sum(1)
=5+4+3+2+1+sum(0)
=5+4+3+2+1+0
=5+4+3+2+1
=5+4+3+3
=5+4+6
=5+10
=15
*/
