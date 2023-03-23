#include <stdio.h>

void jack_bauer(void)
{
    int hour, minute;

    for (hour = 0; hour < 24; hour++)
    {
        for (minute = 0; minute < 60; minute++)
        {
            putchar((hour / 10) + '0');
            putchar((hour % 10) + '0');
            putchar(':');
            putchar((minute / 10) + '0');
            putchar((minute % 10) + '0');
            putchar('\n');
        }
    }
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    jack_bauer();
    return (0);
}