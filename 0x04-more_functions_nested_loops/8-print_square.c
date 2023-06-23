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
		while(size > 0)
		{
			int i;
	
			for (i = 1; i <= size; i++)
			{
				_putchar('#');
			}	
			_putchar('\n');
			size--;
	
		}
	}
}
