#include "main.h"
/**
 * main - check the code
 * Description:print _putchar
 * Return: Always 0.
 */

int main(void)
{
	char str[] = "_putchar";
	int ch;

	for (ch = 0; ch <= 7; ch++)
	{
		_putchar(str[ch]);
	}
	_putchar('\n');
	return (0);
}
