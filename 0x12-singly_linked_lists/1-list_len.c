#include <stdlib.h>
#include "lists.h"
/**
 * list_len - returns number of elems
 * @h: arg
 * Return: num of elems
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
