#include "main.h"

/**
*_isdigit- entry point
*
*@c: input variable
*description: 'check if c is a digit'
*
*Return:1 if c is a digit,else  0
*/

int _isdigit(int c)
{

	if (c >= '0' && c <= '9')
	{
		return (1);

	}
	else
	{
		return (0);
	}

}


