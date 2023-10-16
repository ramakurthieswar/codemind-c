#include<stdio.h>
int main()
{
    int days;
    scanf("%d",&days);
    if(days==1)
    {
        printf("Monday");
    }
    else if(days==2)
    {
        printf("Tuesday");
    }
    else if(days==3)
    {
        printf("Wednesday");
    }
    else if(days==4)
    {
        printf("Thursday");
    }
    else if(days==5)
    {
        printf("Friday");
    }
    else if(days==6)
    {
        printf("Saturday");
    }
    else if(days==7)
    {
        printf("Sunday");
    }
    else
    {
        printf("Invalid input");
    }
}