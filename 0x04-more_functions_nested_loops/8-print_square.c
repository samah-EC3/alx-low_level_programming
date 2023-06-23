#include "main.h"
#include<stdio.h>

/**
 * print_square - print - according to size
 * @size: parameter repeat character #
 */

void print_square(int size)
{
	if (size <= 0)
		_putchar('\n');
	else
	{
		int i, j;

		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				_putchar('#');
			}
		_putchar('\n');
		}
	}
}
