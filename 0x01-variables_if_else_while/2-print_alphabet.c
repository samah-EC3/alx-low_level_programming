#include<stdio.h>
/**
 * main - Entry point
 * Description: 'print small characters'
 * Return: 0 if sucess
 */
int main(void)

{
	int char_num = 97;

	while (char_num <= 122)
	{
		putchar(char_num);
		char_num++;
	}
	putchar('\n');
	return (0);
}
