#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments passed to the program
 * @argc: number of arguments passed
 * @argv: array of arguments counts
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])

{

(void) argv;

	printf("%d\n", argc - 1);

	return (0);

}
