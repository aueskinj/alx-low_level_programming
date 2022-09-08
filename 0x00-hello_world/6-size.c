#include<stdio.h>

/*
 * int main - entry point
 *
 * Description: Prints the size of various types on computer it is
 * compiled and run on 
 *
 * Return : Always 0 (success)
 */
int main(void)
{
		int intType;
    	float floatType;
    	double doubleType;
    	char charType;

    
    	printf("Size of int: %zu bytes\n", sizeof(intType));
    	printf("Size of float: %zu bytes\n", sizeof(floatType));
    	printf("Size of double: %zu bytes\n", sizeof(doubleType));
    	printf("Size of char: %zu byte\n", sizeof(charType));
    
    	return 0;
}


