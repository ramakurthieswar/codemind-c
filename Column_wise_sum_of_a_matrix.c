#include<stdio.h>
int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    int a[n][m],i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(j=0;j<m;j++)
    {
        int s=0;
        for(i=0;i<n;i++){
            s=s+a[i][j];
        }
        printf("%d ",s);
    }
    
}