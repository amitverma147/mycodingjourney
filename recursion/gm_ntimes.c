  #include<stdio.h>
  void gm(int n)
  {
   for(int i=1;i<=n;i++)
  {
    printf("Good morning \n");
  }
  }
  int main()
  {
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    gm(n);
    return 0;
  }