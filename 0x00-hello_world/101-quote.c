#include <stdio.h>
#define MSG "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        if (write(STDERR_FILENO, MSG, sizeof(MSG)-1) == -1) {
        return 1;
    }
    return 1;
}
