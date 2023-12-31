#include<stdio.h>
int main()
{
    float a;
    scanf("%f",&a);
    if(a<=10000)
    printf("%.2f",a+((80/100.0)*a)+((20/100.0)*a));
    else if(a<=20000)
    printf("%.2f",a+((90/100.0)*a)+((25/100.0)*a));
    else if(a>20000)
    printf("%.2f",a+((95/100.0)*a)+((30/100.0)*a));
}