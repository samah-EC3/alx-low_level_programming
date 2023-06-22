#include "main.h"
#include<stdio.h>

/**
 * _isupper - take parameter c and compare with lower character
 * @c: the character in ASCII code
 * Return: Always 0 if upercase or 1 if lowercase
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	printf("\n");
}
