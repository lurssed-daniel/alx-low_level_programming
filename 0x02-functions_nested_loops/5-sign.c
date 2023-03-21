#include <stdio.h>

/**
 * print_sign - Prints the sign of a number.
 *
 * @n: The number to be checked.
 *
 * Return: 1 and prints + if n is greater than zero, 0 and prints 0
 * if n is zero, -1 and prints - if n is less than zero.
 */
int print_sign(int n)
{
    if (n > 0)
    {
        putchar('+');
        return (1);
    }
    else if (n == 0)
    {
        putchar('0');
        return (0);
    }
    else
    {
        putchar('-');
        return (-1);
    }
}


/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	{
    int r;

    r = print_sign(98);
    putchar(',');
    putchar(' ');
    putchar(r + '0');
    putchar('\n');
    r = print_sign(0);
    putchar(',');
    putchar(' ');
    putchar(r + '0');
    putchar('\n');
    r = print_sign(0xff);
    putchar(',');
    putchar(' ');
    putchar(r + '0');
    putchar('\n');
    r = print_sign(-1);
    putchar(',');
    putchar(' ');
    putchar(r + '0');
    putchar('\n');
    return (0);
}
