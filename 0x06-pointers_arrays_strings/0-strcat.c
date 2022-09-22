#include "main.h"
#include <string.h>

char *_strcat(char *dest, char *src)
{
	int dest_len  = strlen(dest);
	int n = strlen(src);
       for (int i=0; i<n && src[i] != '\0' ; i++)
		dest[dest_len + i] = src[i];	
	return 	dest;
}

