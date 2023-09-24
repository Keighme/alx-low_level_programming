#include "lists.h"
/**
 * free_listint - start
 * @head: arg
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
		temp = head->next;
	free(head);
	head = temp;
}
