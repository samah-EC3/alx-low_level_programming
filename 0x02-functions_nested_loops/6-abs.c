#include "main.h"

/**
 * _abs - take parameter c and compare with lower character
 * @n: input number as integer
 * Return: Absolute value
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (n * -1);
	}
	_putchar('\n');
}
