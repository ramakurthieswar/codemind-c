#include<stdio.h>
int main()
{
    int s,x,y;
    scanf("%d",&s);
    x=s/365;
    y=(s%365)/7;
    printf("%d
%d",x,y);
    
}