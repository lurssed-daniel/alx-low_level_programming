#include <stdio.h>

void times_table(void)
{
    int i, j, result;

    for (i = 0; i <= 9; i++)
    {
        for (j = 0; j <= 9; j++)
        {
            result = i * j;

            if (j == 0)
            {
                putchar('0');
            }
            else if (result < 10)
            {
                putchar(' ');
                putchar(result + '0');
            }
            else
            {
                putchar((result / 10) + '0');
                putchar((result % 10) + '0');
            }

            if (j != 9)
            {
                putchar(',');
                putchar(' ');
            }
            else
            {
                putchar('\n');
            }
        }
    }
}


/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    times_table();
    return (0);
}
