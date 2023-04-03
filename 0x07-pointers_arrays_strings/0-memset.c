#include "main.h"
#include <string.h>

/**
 * _memset - Prototype function
 *
 * @s: - value
 * @b: - value
 * @n: - value
 *
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	/* loop through first n bytes of s */
	for (i = 0; i < n; i++)
	{
		/* break if n > length of s */
		/* if (s[i] == '\0') */
		/*	break; */

		/* fill s with char b */
		s[i] = b;
	}
	return (s);
}
