#include<stdio.h>

/*
 * main - main block *
 * Description: Prints the size of various types on computer it is
 * compiled and run on *
 * Return : 0 (success)
 */
int main(void)
{
		printf("size of char: %i byte(s)\n", sizeof(char));
		printf("Size of int: %i bytes(s)\n", sizeof(int));
		printf("Size of long int: %i bytes(s)\n", sizeof(long int));
		printf("Size of a long long int: %i bytes(s)\n", sizeof(long long int));
		printf("Size of a float: %i bytes(s)\n", sizeof(float));
		return 0;
}


