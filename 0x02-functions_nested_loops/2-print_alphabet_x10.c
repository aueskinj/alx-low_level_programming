#include<stdio.h>
/** Write a function that prints 10 times the alphabet, 
 * in lowercase, followed by a new line
 */
void print_alphabet_x10(void);
int main()
{
    int x=0;
    while (x<9)
    {
        print_alphabet_x10();
        printf("\n");
        x++;
        return 0;
    } 
}
void print_alphabet_x10(void)
{
    char c;
    for (c = 'a'; c <= 'z'; ++c)
        printf("%c ", c);
}