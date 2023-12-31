#include<stdio.h>
int main()
{
int x,n,i,c=0;
scanf("%d",&n);
i=n*n;
while (i!=0)
{
x=i%10;
c=c+x;
i=i/10;
}
if(n==i+c)
printf("Neon Number");
else
printf("Not Neon Number");

}