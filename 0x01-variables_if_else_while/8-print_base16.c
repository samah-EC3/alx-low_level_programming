#include<stdio.h>
/**
 * main - Entry point
 * Description: 'print hex num '
 * Return: 0 if sucess
 */
int main(void)

{
	int char_num = 48;
	int m;

	while (char_num <= 57)
	{
		putchar(char_num);
		char_num++;
	}
	for (m = 97; m <= 102; m++)
	{
		putchar(m);
	}
	putchar('\n');
	return (0);
}
