#include <stdio.h>

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: the table size
 *
 * Return: void
 */
void print_times_table(int n)
{
        int i, j;

        if (n > 15 || n < 0) {
                return;
        }

        for (i = 0; i <= n; i++) {
                for (j = 0; j <= n; j++) {
                        printf("%d", i * j);
                        if (j != n) {
                                printf(", ");
                        } else {
                                printf("\n");
                        }
                }
        }
}


/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    print_times_table(3);
    putchar('\n');
    print_times_table(5);
    putchar('\n');
    print_times_table(98);
    putchar('\n');
    print_times_table(12);
    return (0);
}
