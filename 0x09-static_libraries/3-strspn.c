#include "main.h"

/**
 * _strspn - entry point
 * @s: input value
 * @accept: input value
 * Return: always 0 (success)
 *
 */

unsigned int _strspn(char *s, char *accept)
{
	while (*s)
	{
		for (r = 0; accept[r]; r++)
		{
			if(*s == accept[r])
			{
				n++;
				break;
			}
			else if (accept[r + 1] =='\0')
				return(n);
		}
		s++;
	}
	return(n);
}


