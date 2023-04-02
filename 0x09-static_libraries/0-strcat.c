#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: input value 
 * @src: input value
 *
 * Return: void
 */

char *_strcat(char *dest, char *src)
{
int l;
int k;

l = 0;
while(dest[l] != '\0')
{
	l++;
}

k = 0;
while(src[k] != '\0')
{
	dest[l] = src[k];
	l++;
	k++;
}
dest[i] = '\0';
return (dest);
}


