#include "main.h"
/**
 * _sqrt_recursion-get the squareroot of a number
 * @n: input value
 * _sqrt_recursion_helper-behaves similar to a binary for the _sqrt_reursion function
 * algo: performs a binary search within a specified range to find the square root or 
 *       the closest lower square root if the exact square root is not found
 * Return: -1 for negative numbers
 * 	   n for 0 & 1
 * 	   squareroot for all other numbers
 */
int _sqrt_recursion_helper(int n, int start, int end) {
    int mid, square;
    if (start > end) {
        return -1; 
    }

    mid = start + (end - start) / 2;
    square = mid * mid;

    if (square == n) {
        return mid;
    } else if (square < n) {
        return _sqrt_recursion_helper(n, mid + 1, end);
    } else {
        return _sqrt_recursion_helper(n, start, mid - 1);
    }
}

int _sqrt_recursion(int n) {
    if (n < 0) {
        return -1; 
    } else if (n == 0 || n == 1) {
        return n; 
    } else {
        return _sqrt_recursion_helper(n, 0, n / 2);
    }
}
