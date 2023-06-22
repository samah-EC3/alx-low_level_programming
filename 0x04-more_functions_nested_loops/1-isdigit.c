#include "main.h"
#include<stdio.h>

/**
 * _isdigit - take parameter c and compare with lower character
 * @c: the character in ASCII code
 * Return: Always 0 if upercase or 1 if lowercase
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	printf("\n");
}
