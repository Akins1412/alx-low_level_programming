#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
  * add_node_end - Adds a new node at the end of a list
  * @head: The original linked list
  * @str: The string to add to the node
  *
  * Return: The address of the new list or NULL if it failed
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ad, *new;

	if (str != NULL)
	{
		ad = malloc(sizeof(list_t));
		if (ad == NULL)
			return (NULL);

		ad->str = strdup(str);
		ad->len = strlen(str);
		ad->next = NULL;

		if (*head == NULL)
		{
			*head  = ad;
			return (*head);
		}
		else
		{
			new = *head;
			while (new->next)
				new = new->next;

			new->next = ad;
			return (new);
		}
	}

	return (NULL);
}
