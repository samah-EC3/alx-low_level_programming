#include<stdio.h>
/**
 * main - Entry point
 * Description: 'print capital small characters'
 * Return: 0 if sucess
 */
int main(void)

{
	int char_sm = 97;
	int char_cp = 65;

	while (char_sm <= 122)
	{
		putchar(char_sm);
		char_sm++;
	}
	while (char_cp <= 90)
	{
		putchar(char_cp);
		char_cp++;
	}
	putchar('\n');
	return (0);
}
