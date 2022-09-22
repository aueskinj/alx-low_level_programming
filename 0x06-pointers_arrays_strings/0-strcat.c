#include "main.h"
#include <string.h>

/**
 *_strcat - concatenates two strings
 *@dest: A pointer to a character that will be changed
 *@src: A pointer to a character that will also be changed
 *Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int dest_len  = strlen(dest);
	int n = strlen(src);
    for (int i=0; i<n && src[i] != '\0' ; i++)
		dest[dest_len + i] = src[i];	
	return 	(dest);
}

