#include<stdio.h>
int main()
{
 int n;
 printf("Enter the number of rows:");
 scanf("%d",&n);
 for(int i=1;i<=n;i++)
 {
    int a=i-1;
    for(int j=1;j<=n-i;j++)
    {
        printf(" ");
    }
    for(int k=1;k<=i;k++)
    {
        printf("%d",k);
    }
    for(int p=1;p<=i-1;p++)
    {
        printf("%d",a);
        a--;
    }
    printf("\n");
 }
 return 0;
}