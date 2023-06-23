#include "main.h"
#include<stdio.h>

/**
 * print_triangle - print - according to size
 * @size: parameter repeat character #
 */

void print_triangle(int size)
{
	if (size <= 0)
		_putchar('\n');
	else
	{
		int i, j, z;

		for (i = 1; i <= size; i++)
		{
		for (j = 1; j <= (size - i); j++)
		{
			_putchar(' ');
		}
		for (z = 1; z <= i; z++)
			_putchar('#');
		_putchar('\n');
		}
	}
}
