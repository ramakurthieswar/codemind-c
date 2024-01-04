#include<stdio.h>
int main()
{
    char str[30];
    scanf("%[^
]s",str);
    int i,dc=0;
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]>=97&&str[i]<=122)
        {
            dc=dc+1;
        }
    }
    printf("%d",dc);
}