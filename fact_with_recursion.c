#include <stdio.h>
int fact (int);
void main (void)
{
int num ;
int result ;
printf ("enter the number to git factorial : ");
scanf("%d",&num);
result = fact(num);
printf ("the factorial of %d is = %d \n",num,result);
}
int fact (int x)
{
    if (x == 1) return 1;
    else return x*fact(x-1);
}