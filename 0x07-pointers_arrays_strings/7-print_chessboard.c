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
	int d, c;

	for (d = 0; d = 8; d++)
	{
		for (c = 0; c = 8; c++)
		{
			_putchar("%c", a[d][c]);
		}
		_putchar(10);
	}

}


