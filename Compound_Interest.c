#include<stdio.h>
#include<math.h>
int main()
{
    float principal,rate,time;
    scanf("%f%f%f",&principal,&rate,&time);
    float compoundinterest=principal*(pow(1+rate/100,time)-1);
    printf("%.2f
",compoundinterest);

}