
#include <stdio.h>

int test_prime(int n)
{
    int i;

    if (n < 2)
    {
        return 0;
    }

    for (i = 2; i <= n / i; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }

    return 1;
}

int main(void)
{
    int N, num = 2, count = 0;

    printf("Enter the value of N: ");
    scanf("%d", &N);

    if (N <= 0)
    {
        printf("Please enter a positive number.\n");
        return 1;
    }

    printf("The first %d prime numbers are:\n", N);

    while (count < N)
    {
        if (test_prime(num))
        {
            printf("%d ", num);
            count++;
        }

        num++;
    }

    printf("\n");
    return 0;
}
