#include<stdio.h>
int main()
{
 int n;
 printf("Enter the number :");
 scanf("%d",&n);
 int factorial=fact(n);
 printf("%d",factorial);
 return 0;
}
int fact(int n)
{
    if(n==1) return 1;
    else
    return (n*fact(n-1));
}

