#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of integers
 * @list:..
 *
 * Return: nothing
 */
void insertion_sort_list(listint_t **list);
void insertion_sort_list(listint_t **list)
{
	listint_t *current = *list;
	listint_t *befor;
	listint_t *after;
	listint_t *temp;
	int key, value;

	if (list == NULL || (*list)->next == NULL || (*list) == NULL)
	{
		return;
	}
	after = (*list)->next;
	while (current != NULL)
	{
		after = current->next;
		key = after->n;
		value = after->prev->n;
		while (value > key)
		{
			temp = after;
			befor = after->prev;
			if (befor == *list)
			{
				after->prev = NULL;
			}
			else
			{
				after->prev = befor->prev;
			}
			befor->next = after->next;
			after = befor;
			befor = temp;
			befor->prev = after;
			after->next = befor;
			print_list(*list);
			if (after->prev != NULL)
			{
				value = after->prev->n;
			}
			else
			{
				value = (*list)->n;
			}
		}
		current = current->next;
	}
}
