#include<stdio.h>
int main()
{int n,m;
printf("Enter the row nos:");
scanf("%d",&n);
printf("Enter the column nos:");
scanf("%d",&m);
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            printf("*");
            
        }
      printf("\n");  
    }
    return 0;
}