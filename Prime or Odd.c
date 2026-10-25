#include <stdio.h>

int main() {
    int n, count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            count++;
        }
    }

    if (count == 2) {
        int factorial = 1;
        for (int i = 1; i <= n; i++) {
            factorial = factorial * i;
        }
        printf("%d is prime. Factorial: %d\n", n, factorial);
    } 
    else {
        int sum = 0;
        for (int i = 1; i <= n; i++) {
            sum = sum + i;
        }
        printf("%d is not prime. Sum up to %d: %d\n", n, n, sum);
    }

    return 0;
}
