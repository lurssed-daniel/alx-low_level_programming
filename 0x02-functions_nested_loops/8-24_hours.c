#include "main.h"
/**
 * jack_bauer -  prints every minute of the day of Jack Bauer.
 *
 * Return: sucess (always).
 */
void jack_bauer(void)
{
int i = 0;
int j = 0;
for (i = 0; i <= 23 ; i++)
{
	for (j = 0; j <= 59 ; j++)
	{
	_putchar((i / 10) + 48);
	_putchar((i % 10) + 48);
	_putchar(':');
	_putchar((j / 10) + 48);
	_putchar((j % 10) + 48);
	_putchar('\n');
	}
}
}
