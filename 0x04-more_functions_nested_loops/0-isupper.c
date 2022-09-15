#include "main.h"
/**
 * int _isupper(int c) - checks for uppercase character
 * 
 * returns 1 is 'c' is upper case,
 * 0 otherwise 
 */
int _isupper(int c)
{
    if (c>= 65 && c<=90)
        return 1;
    else 
        return 0;
}