#include<stdio.h>
int main()
{
    int a,j,i;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        for(j=1;j<=a;j++)
        {
            if(i+j<a+1)
            printf("*");
            else
            printf("%d",i);
        }printf("
");
    }
}