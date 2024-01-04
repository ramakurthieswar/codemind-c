#include <stdio.h>
int isAbundant(int num) {
    int sum = 1;
    for (int i = 2; i * i <= num; i++) 
    {
        if (num % i == 0) 
        {
            sum += i;
            if (i != num / i)
            {
                sum += num / i;
            }
        }
    }
    return sum > num;
}
int main() 
{
    int N;
    scanf("%d", &N);
    printf("%s
", isAbundant(N) ? "True" : "False");
    return 0;
}