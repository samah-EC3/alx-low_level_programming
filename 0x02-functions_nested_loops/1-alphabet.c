#include "main.h"

/**
 * print_alphabet - utilize _putchar function to print small characters
 *      print alphabet a  z
 */

void print_alphabet(void)
{
	int ch;

	for (ch = 97; ch <= 122; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
