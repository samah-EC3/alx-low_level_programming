#include<stdio.h>
/**
 * main - Entry point
 * Description: 'print num 1--9'
 * Return: 0 if sucess
 */
int main(void)

{
	int char_num = 48;

	while (char_num <= 57)
	{
		putchar(char_num);
		char_num++;
	}
	putchar('\n');
	return (0);
}
