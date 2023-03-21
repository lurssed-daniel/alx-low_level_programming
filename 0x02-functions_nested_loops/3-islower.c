#include <stdio.h>

/**
 * _islower - Checks for lowercase character.
 *
 * @c: The character to be checked.
 *
 * Return: 1 if c is lowercase, 0 otherwise.
 */
int _islower(int c)
{
    if (c >= 'a' && c <= 'z')
        return (1);
    else
        return (0);
}

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    int r, n;

    n = 'h';
    r = _islower(n);
    printf("%d\n", r);

    n = 'H';
    r = _islower(n);
    printf("%d\n", r);

    return (0);
}

