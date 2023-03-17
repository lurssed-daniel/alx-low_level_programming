#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints he alphabet in lowercase, and then in uppercase, followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main() {
    char c;

    // print lowercase alphabet
    for (c = 'a'; c <= 'z'; ++c) {
        putchar(c);
    }

    // print uppercase alphabet
    for (c = 'A'; c <= 'Z'; ++c) {
        putchar(c);
    }

    // print newline character
    putchar('\n');

    return 0;
}
