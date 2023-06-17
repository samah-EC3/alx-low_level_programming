#include<stdio.h>
/**
 * main - Entry point
 * Description: 'print hex num '
 * Return: 0 if sucess
 */
int main(void)

{
	int char_num = 0;

	while (char_num <= 15)
	{
		putchar(char_num);
		char_num++;
	}
	putchar('\n');
	return (0);
}
