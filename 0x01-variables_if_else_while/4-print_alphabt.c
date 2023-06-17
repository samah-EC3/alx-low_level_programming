#include<stdio.h>
/**
 * main - Entry point
 * Description: 'print small characters except e & q'
 * Return: 0 if sucess
 */
int main(void)

{
	int char_num = 97;

	while (char_num <= 122)
	{
		if (char_num == 101 || char_num == 113)
		{
			char_num++;
			continue;
		}
		putchar(char_num);
		char_num++;
	}
	putchar('\n');
	return (0);
}
