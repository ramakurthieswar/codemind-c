#include<stdio.h>
int main(){
int n,i,fact=1;
scanf("%d",&i);
for(n=1;n<=i;n++){
    fact=fact*n;
}
printf("%d",fact);
return 0;
}