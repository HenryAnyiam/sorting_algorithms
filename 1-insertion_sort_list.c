#include "sort.h"

/**
 * insertion_sort_list - sorts a list with insertion sort
 * @list: pointer to list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *curr, *iter, *key, *temp;

	curr = (*list)->next;
	while (curr)
	{
		key = curr;
		iter = curr->prev;
		while (iter && (iter->n > key->n))
		{
			temp = iter;
			iter = iter->prev;
			key->prev = iter;
			temp->next = key->next;
			if (key->next != NULL)
				key->next->prev = temp;
			temp->prev = key;
			key->next = temp;
			if (iter != NULL)
				iter->next = key;
			else
				*list = key;
			print_list(*list);
		}
		curr = curr->next;
	}
}
