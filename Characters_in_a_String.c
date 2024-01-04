#include<stdio.h>
int main()
{
    char str[50];
    scanf("%[^
]s",str);
    int i,c=0;
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]>=48&&str[i]<=57)
        {
            break;
        }
        else
        {
            c++;
        }
    }
    str[i]=NULL;
    printf("%d",c);
}