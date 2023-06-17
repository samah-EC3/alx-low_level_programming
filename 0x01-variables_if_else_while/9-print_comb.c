#include<stdio.h>
/**
 * main - Entry point
 * Description: 'print num 1--9'
 * Return: 0 if sucess
 */
int main(void)

{
	int char_num;

	for (char_num = 48; char_num <= 57; char_num++)
	{
		putchar(char_num);
		if (char_num == 57)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
