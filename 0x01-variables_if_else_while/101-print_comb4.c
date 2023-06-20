#include<stdio.h>
/**
 * main - Entry point
 * Description: 'print num 1--9'
 * Return: 0 if sucess
 */
int main(void)

{
	int x, y, z;

	for (x = 48; x <= 57; x++)
	{
		for (y = 49; y <= 57; y++)
		{	z = 50;
			while (z <= 57)
			{
				putchar(x);
				putchar(y);
				putchar(z);
				putchar(',');
				putchar(' ');
				z++;
			}
		}

	}
	putchar('\n');
	return (0);
}
