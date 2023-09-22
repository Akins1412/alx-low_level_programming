#include <stdlib.h>
#include "lists.h"

/**
  * free_list - Frees a linked list.
  * @head: The pointer to the first node of linked list
  *
  * Return: Nothing
  */
void free_list(list_t *head)
{
	list_t *add;

	while (head)
	{
		add = head;
		head = head->next;
		new(add->str);
		new(add);
	}

}
