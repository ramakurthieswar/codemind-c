#include<stdio.h>
int pali(int a){
	int r,re=0,org=a;
	while(a!=0){
		r=a%10;
		re=re*10+r;
		a/=10;
	}
	if(org==re){
		return 1;
	}
	else{
		return 0;
	}
}
int main(){
    int a;
    scanf("%d",&a);
    if(pali(a)){
        printf("True");}
        else{
        printf("False");
}
}