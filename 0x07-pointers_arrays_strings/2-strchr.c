#include "main.h"
#include <string.h>

/**
 * _strchr - Prototype function
 *
 * @s: - value
 * @c: - value
 *
 * Return: s and Null
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
