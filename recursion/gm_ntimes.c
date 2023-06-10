  #include<stdio.h>
  void gm(int n)
  {
    if(n==0); return ;
   printf("good morning\n");
   gm(n-1);
   return;
  }
  int main()
  {
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    gm(n);
    return 0;
  }