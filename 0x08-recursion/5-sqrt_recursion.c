#include "main.h"
/**
 * _sqrt_recursion-get the squareroot of a number
 * @n: input value
 *
 * algo: performs a binary search within a specified range to find the square root or 
 *       the closest lower square root if the exact square root is not found
 * Return: -1 for negative numbers
 * 	   n for 0 & 1
 * 	   squareroot for all other numbers
 */
int _sqrt_recursion(int n) {
    if (n < 0) {
        return -1; 
    } else if (n == 0 || n == 1) {
        return n; 
    } else {
        int start = 1;
        int end = n / 2;
        int result = -1;

        while (start <= end) {
            int mid = start + (end - start) / 2;
            int square = mid * mid;

            if (square == n) {
                return mid; 
            } else if (square < n) {
                start = mid + 1; 
                result = mid; 
            } else {
                end = mid - 1; 
            }
        }

        return result; 
    }
}
