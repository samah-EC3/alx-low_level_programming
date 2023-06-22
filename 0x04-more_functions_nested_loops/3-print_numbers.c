#include "main.h"
#include<stdio.h>

/**
 * _isdigit - take parameter c and compare with lower character
 * @c: the character in ASCII code
 * Return: Always 0 if upercase or 1 if lowercase
 */

void print_numbers(void)
{
	int c;

	for (c = 48;  c <= 57; c++)
	{
		_putchar(c);
	}
	_putchar('\n');	
}
