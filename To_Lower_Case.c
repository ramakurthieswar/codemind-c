#include<stdio.h>
int main()
{
    char str[40];
    scanf("%[^
]s",str);
    int i;
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]>=65&&str[i]<=90)
        {
           str[i]+=32;
        }
    }
    printf("%s",str);
}