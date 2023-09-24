#include "lists.h"
/**
 * print_listint - start
 * @h: arg
 * Return: number of nods
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}
	return (num);
}
