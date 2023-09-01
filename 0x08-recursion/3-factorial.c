#include "main.h"
/**
 * factorial-returns the factorial of a number
 * @n: input value for function
 *
 * Return: -1 if -ve, if 0,1, give the factorial
 */
int factorial(int n) {
    if (n < 0) {
        return -1;  
    } else if (n == 0) {
        return 1;   
    } else {
        return n * factorial(n - 1);  
    }
}
