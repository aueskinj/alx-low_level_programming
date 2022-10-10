#include <stdio.h>

/**
 * main - main block
 * Description: prints decimals upto 9 from 0
 * Return: 0
 */

int main(void)
{
        int num = 48, alph = 97;

        while (num <58)
        {
                putchar(num);
                num++;
        }
        while (alph < 103)
        {
                putchar(alph);
                alph++;
        }

        putchar('\n');
        return (0);
}
