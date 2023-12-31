#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    float f=(a+b+c+d+e)/5.0;
    if(f>=90)
    printf("Grade A");
    else if(f>80&&f<=90)
    printf("Grade B");
    else if(f>=70&&f<=80)
    printf("Grade C");
    else if(f>=60&&f<=70)
    printf("Grade D");
    else if(f>=40&&f<=60)
    printf("Grade E");
    else 
    printf("Grade F");
}