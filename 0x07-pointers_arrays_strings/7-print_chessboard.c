#include "main.h"
#include <string.h>

/**
 * print_chessboard - Prototype function
 *
 * @a: - value
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			char c = a[i][j];

			if (c == ' ')
			{
				_putchar(' ');
			}
			else
			{
				_putchar(c);
			}
		}
		_putchar('\n');
	}
}
