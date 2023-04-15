#include <stdio.h>
#include "main.h"
/**
 * main- prints the name of the program
 * @argc: display number of arguments
 * @argv: array of arguments counts
 * Return: Always 0 (Success)
 */

int main(int argc __attribute__((unused)), char *argv[])

{
	printf("%s\n", *argv);

	return (0);
}
