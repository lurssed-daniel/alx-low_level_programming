#include "main.h"
#include <string.h>

/**
 * _strspn - Prototype function
 *
 * @s: - value
 * @accept: - value
 *
 * Return: len
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;
	int i, j;
	int accept_len = strlen(accept);

	for (i = 0; s[i]; i++)
	{
		for (j = 0; j < accept_len; j++)
		{
			if (s[i] == accept[j])
			{
				len++;
				break;
			}
		}
		if (j == accept_len)
		{
			/*character in s not found in accept*/
			return (len);
		}
	}
	return (len);
}
