#include <stdio.h>

/**
 * add - adds two integers
 * @a: the first integer
 * @b: the second integer
 *
 * Return: the sum of a and b
 */
int add(int a, int b)
{
        return (a + b);
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int n;

    n = add(89, 9);
    printf("%d\n", n);
    return (0);
}
