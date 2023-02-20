#include <stdlib.h>
#include <stdio.h>

/** main - Description: to print letter in lowercase
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	char lcl +'a';
	for (lcl = 'a'; lcl<='z'; lcl++)
	{
		putchar(lcl);
	}
	putchar('\n');
	return (0);
}


