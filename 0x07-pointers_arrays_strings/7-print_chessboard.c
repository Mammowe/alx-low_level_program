#include "main.h"
#include <stdio.h>

/**
*print_chessboard- Entry point
*
*Description: prints a chessboard
*@a: input variable
*
*Return:
*/

void print_chessboard(char (*a)[8])
{
	int r, n;

	for (r = 0; r < 8; r++)
	{
		for (n = 0; n < 8; n++)
		{
			_putchar(a[r][n]);
		}
		_putchar(10);
	}

}


