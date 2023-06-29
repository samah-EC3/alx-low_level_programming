#include "main.h"
/**
 * _strncat - two words
 * @dest : pointer to char param
 * @src : pointer to char param
 * @n : int parameter
 * Return: *dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int a = 0, i;

	for (i = 0; dest[i] != '\0'; i++)
	;
	do {
		dest[i] = src[a];
		i++;
		a++;
	} while (src[a] != '\0' && a < n);
	dest[i + a] = '\0';
	return (dest);
}
