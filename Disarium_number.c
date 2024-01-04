#include <stdio.h>
#include <math.h>
int isDisarium(int num) {
    int originalNum = num;
    int digitCount = floor(log10(num) + 1); 
    int sum = 0;
    while (num > 0)
    {
        int digit = num % 10;
        sum += pow(digit, digitCount);
        num /= 10;
        digitCount--;
    }
    return sum == originalNum;
}

int main() 
{
    int N;
    scanf("%d", &N);
    printf("%s
", isDisarium(N) ? "True" : "False");
    return 0;
}