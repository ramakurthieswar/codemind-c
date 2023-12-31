#include<stdio.h>
int main ()
{
    float n,i;
    float x,c=0;
    scanf("%f",&n);
    for(i=1;i<=n;i++)
    {
        x=1/i;
        {
            c=c+x;
        }
    }
    printf("%.2f",c);
}