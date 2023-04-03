#include "main.h"
#include <string.h>

/**
 * _strpbrk - Prototype function
 *
 * @s: - value
 * @accept: - value
 *
 * Return: NULL
 */

char *_strpbrk(char *s, char *accept)
{
	char *s_ptr = s;

	while (*s_ptr != '\0')
	{
		char *accept_ptr = accept;

		while (*accept_ptr != '\0')
		{
			if (*s_ptr == *accept_ptr)
			{
				return (s_ptr);
			}
			accept_ptr++;
		}
		s_ptr++;
	}
	return (NULL);
}
