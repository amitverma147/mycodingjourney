#include<stdio.h>
int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=i;j++)
        {
            int d=j+64;
            char c=(char)d;
            if(i%2==0)
            {
            printf("%c",c);
            }else{
            printf("%d",j);}
        }
        printf("\n");
    }
    return 0;
}
