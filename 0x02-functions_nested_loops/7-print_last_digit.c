#include <stdio.h>

/**
 * print_last_digit - Prints the last digit of a number.
 *
 * @n: The number to be processed.
 *
 * Return: The value of the last digit.
 */
int print_last_digit(int n)
{
    int last_digit;

    if (n < 0)
        n = -n;

    last_digit = n % 10;
    putchar(last_digit + '0');

    return (last_digit);
}

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = print_last_digit(98);
    putchar('\n');
    r = print_last_digit(0);
    putchar('\n');
    r = print_last_digit(-402);
    putchar('\n');

    return (0);
}

