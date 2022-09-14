#include <stdio.h>
/**
 * main - entry point 
 * 
 * Return:Always 0
 */ 
int main() {
    char c;
    for (c = 'a'; c <= 'z'; ++c)
        printf("%c ", c);
    printf('\n');
    return 0;
}
