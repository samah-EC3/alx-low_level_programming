#include "lists.h"

/**
 * print_listint - print all elemement to stdout
 * @h: pointer to a singly liked list.
 * Return: an int.
 **/

size_t print_listint(const listint_t *h)
{
	const listint_t *p;
	unsigned int count = 0;

	p = h;
	while (p)
	{
		printf("%d\n", p->n);
		count++;
		p = p->next;
	}
	return (count);
}
