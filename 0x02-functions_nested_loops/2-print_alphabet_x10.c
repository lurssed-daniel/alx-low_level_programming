#include <stdio.h>

/**
 * print_alphabet_x10 - Prints 10 times the alphabet in lowercase followed by a new line.
 */
void print_alphabet_x10(void)
{
    char letter;
    int i;

    for (i = 0; i < 10; i++)
    {
        letter = 'a';

        while (letter <= 'z')
        {
            putchar(letter);
            letter++;
        }

        putchar('\n');
    }
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    print_alphabet_x10();

    return (0);
}

