#include<stdio.h>
int main()
{
  int i,n,j;
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    for(j=n;j>=1;j--)
    {
      if(i>=j)
      printf("* ");
      else
      printf(" ");
    }
    printf("
");
}
}