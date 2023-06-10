#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the a:");
    scanf("%d",&a);
    printf("Enter the b:");
    scanf("%d",&b);
    int rem=a%b;
    printf("The remainder: %d",rem);
    return 0;
}