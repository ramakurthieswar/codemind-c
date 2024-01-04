#include<stdio.h>
#include<string.h>
int main()
{
    char str[40];
    scanf("%[^
]s",str);
    if(strlen(str)>=7)
    {
        printf("%c",str[6]);
    }
}