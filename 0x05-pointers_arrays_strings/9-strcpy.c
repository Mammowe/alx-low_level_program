#include "main.h"
#include <stdio.h>

/**
 * char *_strcpy- entry point
 *
 * @dest: input variable
 * @src: imput variable 2
 *
 * Description: copies the string pointed to by src
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i =0;
	int j =0;

	while (*(src + 1) != '\0')
	{
		i++;
	}

	for (; j < 1; j++)
	{
		dest[j] = src[j];
	}

	dest[i] = '\0';
	return (dest);
}


