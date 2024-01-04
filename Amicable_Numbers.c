#include <stdio.h>
int sumOfDivisors(int num)
{
    int sum = 1;
    for (int i = 2; i * i <= num; i++) 
    {
        if (num % i == 0) 
        {
            sum += i;
            if (i * i != num)
            {
                sum += num / i;
            }
        }
    }
    return sum;
}
int areAmicable(int num1, int num2) {
    return (sumOfDivisors(num1) == num2 && sumOfDivisors(num2) == num1);
}

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    if (areAmicable(n, m))
    {
        printf("Amicable
");
    }else {
        printf("Not Amicable
");
    }

    return 0;
}
