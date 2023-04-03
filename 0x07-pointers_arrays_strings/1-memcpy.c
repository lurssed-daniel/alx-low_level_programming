#include "main.h"
#include <string.h>

/**
 * _memcpy - Prototype function
 *
 * @dest: - value
 * @src: - value
 * @n: - value
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
