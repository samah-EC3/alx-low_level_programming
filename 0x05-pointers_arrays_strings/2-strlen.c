#include "main.h"
/**
 *_strlen - Return the length of a string
 *@s: pointer to a string to find its length
 *Return: int - the length of a string
 */
int _strlen(char *s)
{
	int i = 0, len = 0;

	while (s[i] != '\0')
	{
		len += 1;
		i++;
	}
	return (len);
}
