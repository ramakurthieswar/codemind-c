#include<stdio.h>
int main()
{
    int n,i,a[10],s=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++)
    {
        s=s+a[i];
    }
    printf("%d",s);
}