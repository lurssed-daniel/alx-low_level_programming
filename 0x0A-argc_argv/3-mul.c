#include <stdio.h>
#include "main.h"

/**
* _atoi - converts string to an integer
* @s:The string to be converted
* Return: int converted from the string
*/

int _atoi(char *s)

{

	int j, e, k, l, g, num;

	j = 0;

	e = 0;

	k = 0;

	l = 0;

	g = 0;

	num = 0;

	while (s[l] != '\0')

		l++;

	while (j < l && g == 0)

	{

		if (s[j] == '-')

			++e;

		if (s[j] >= '0' && s[j] <= '9')

		{

			num = s[j] - '0';


				if (e % 2)
			{

				num = -num;

				k = k * 10 + num;

				g = 1;
			}

			if (s[j + 1] < '0' || s[j + 1] > '9')

				break;

			g = 0;

		}

		j++;

	}

	if (g == 0)

		return (0);

	return (k);

}

/**
* main - multiplies two numbers
* @argc: number of arguments
* @argv: array of arguments
* Return: 0 (Success), 1 (Error)
*/

int main(int argc, char *argv[])

{

	int result, num1, num2;

	if (argc < 3 || argc > 3)

	{

		printf("Error\n");

		return (1);

	}

	num1 = _atoi(argv[1]);

	num2 = _atoi(argv[2]);

	result = num1 * num2;

	printf("%d\n", result);

	return (0);

}
