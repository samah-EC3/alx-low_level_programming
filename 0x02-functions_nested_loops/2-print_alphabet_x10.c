#include "main.h"

/**
 * print_alphabet_x10 - utilize _putchar function to print 10 times
 *      print alphabet a  z
 */

void print_alphabet_x10(void)
{
	int ch, i;

	for (i = 1; i <= 10; i++)
	{

		for (ch = 97; ch <= 122; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
