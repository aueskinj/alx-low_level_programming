#include "main.h"
/**
 * factorial-returns the factorial of a number
 * @n: input value for function
 *
 * Return: -1 if -ve, if 0, return 1, else give the factorial
 */
int factorial(int n) {
    if (n < 0) {
        return -1;  // Return -1 to indicate an error for negative inputs
    } else if (n == 0) {
        return 1;   // Factorial of 0 is 1
    } else {
        return n * factorial(n - 1);  // Recursive calculation of factorial
    }
}
