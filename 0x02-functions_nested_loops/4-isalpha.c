#include "main.h"

/**
 *  _isalpha - take parameter c and compare with lower character
 * @c: the character in ASCII code
 * Return: Always 1 if upercase or lowercase or 0if else
 */

int  _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
