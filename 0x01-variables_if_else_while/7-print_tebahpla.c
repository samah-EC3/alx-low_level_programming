#include<stdio.h>
/**
 * main - Entry point
 * Description: 'print mirror small characters'
 * Return: 0 if sucess
 */
int main(void)

{
	int char_num = 122;

	while (char_num >= 97)
	{
		putchar(char_num);
		char_num--;
	}
	putchar('\n');
	return (0);
}
