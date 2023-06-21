#include "main.h"

/**
 * _islower - take parameter c and compare with lower character
 * @c: the character in ASCII code
 * Return: Always 0 if upercase or 1 if lowercase
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
