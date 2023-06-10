  #include<stdio.h>
  int main()
  {int space=7/2;
  int star=1;
  int mid=(7/2)+1;
    for(int i=1;i<=7;i++)
    {
        for(int j=1;j<=space;j++)
        {
            printf(" ");
        }
        for(int k=1;k<=star;k++)
        {
            printf("*");
        }
        if(i<mid){
        space--;
        star+=2;}
        else
        {
            space++;
            star-=2;
        }
         printf("\n");
    }
         return 0;
    }
  
