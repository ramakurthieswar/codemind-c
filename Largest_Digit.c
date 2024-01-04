#include <stdio.h>
int findLargestDigit(int num)
{
    int largestDigit = 0;
    while (num > 0)
    {
        int digit = num % 10;
        if (digit > largestDigit)
        {
            largestDigit = digit;
        }
        num /= 10;
    }

    return largestDigit;
}

int main() 
{
    int N;
    scanf("%d", &N);
    int largestDigit = findLargestDigit(N);
    printf("%d
",largestDigit);

    return 0;
}