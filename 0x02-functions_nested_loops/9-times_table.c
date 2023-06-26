#include "main.h"
/**
 * times_table - print time tabl
 * Return: no r
 */

void times_table(void)
{
	int i, j, z;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			z = i * j;

			if (z == 0)
			{	
				_putchar(z + 48);
			}
                        _putchar(',');
			_putchar(' ');
			
			else if (z < 9)
			{
                                _putchar(' ');
				_putchar(z + 48);
			}
			else
			{
				_putchar((z / 10)+ 48);
				_putchar((z % 10)+ 48);
			}

		}
		_putchar('\n');
	}


}
