#include "main.h"

/**
 * print_sign - take parameter c and compare with lower character
 * @n: input number as integer
 * Return: Always + if num greater than 0 and 0 if equal 0 and - if less than 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
	_putchar('\n');
}
