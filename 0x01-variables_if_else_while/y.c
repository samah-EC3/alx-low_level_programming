#include<stdio.h>
/**
 * main - Entry point
 * Description: 'print num   Inventing is a combination of brains'
 * Return: 0 if sucess
 */
int main(void)

{
	int x, y;

	for (x = 48; x <= 57; x++)
	{
		for (y = x + 1; y <= 57; y++)
		{
			putchar(x);
			putchar(y);
			if (x == 56 && y == 57)
			continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
