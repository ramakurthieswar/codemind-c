#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int a[n],i,j;
    for(i=0;i<n;i++)
    {
        int s=0;
        for(j=0;j<m;j++){
           scanf("%d",&a[i]); 
        s=s+a[i];
        
    }printf("%d ",s);
    }
}