#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued terms in the Fibonacci sequence
 *        whose values do not exceed 4,000,000
 *
 * Return: 0 (Success)
 */
int main(void)
{
        int i;
        long int fib1 = 1, fib2 = 2, fib3, sum = 0;

        while (fib2 <= 4000000) {
                if (fib2 % 2 == 0) {
                        sum += fib2;
                }

                fib3 = fib1 + fib2;
                fib1 = fib2;
                fib2 = fib3;
        }

        printf("%ld\n", sum);

        return (0);
}

