#include<stdio.h>
int main ()
{
    int m,n,i,a;
    scanf("%d%d",&m,&n);
    for(i=1;i<=n;i++)
    {
    a=i*m;
    if(a%n==0)
    {
        printf("%d",a);
        break;
        
    }
}
}