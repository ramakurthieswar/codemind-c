#include<stdio.h>
int main()
{
    int i,a,b=0,c=1,d;
    scanf("%d",&a);
    printf("%d %d ",b,c);
    for(i=2;i<a;i++)
    {
        d=b+c;
        printf("%d ",d);
        b=c;
        c=d;
    }
}