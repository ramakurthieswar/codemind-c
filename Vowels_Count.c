#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    scanf("%[^
]s",str);
    int vow=0,i;
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]=='a' ||str[i]=='e' ||str[i]=='i' ||str[i]=='o'||str[i]=='u')
        {
            vow=vow+1;
        }
    }
    printf("%d",vow);
}