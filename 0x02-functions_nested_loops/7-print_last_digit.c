#include "main.h"

/**
 *  print_last_digit- take parameter c and compare with lower character
 * @n: input number as integer
 * Return: Absolute value
 */

int print_last_digit(int n)
{
	int l;

	l = n % 10;

	if (l < 0)
	{
		_putchar(-l + 48);
		return (-l);
	}
	else
	{
		_putchar(l + 48);
		return (l);
	}
}

