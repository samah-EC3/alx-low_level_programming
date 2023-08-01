#include "lists.h"
#include "stdlib.h"
/**
 * pop_listint - Deletes the head node of a listint_t linked list
 * @head: A pointer to a pointer to the head of the list
 *
 * Return: The value of the deleted node, or 0 if the list is empty
 **/

int pop_listint(listint_t **head)
{
	int value;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	temp = *head;
	value = temp->n;
	*head = (*head)->next;
	free(temp);

	return (value);
}
