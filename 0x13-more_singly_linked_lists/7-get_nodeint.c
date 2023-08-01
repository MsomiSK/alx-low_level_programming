#include "lists.h"

/**
* get_nodeint_at_index - returns  node at a certain index in a linked list
* @head: first node in Linked list
* @index: index of node to return
* Return: pointer to the node we're looking for, or NULL
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)

{

	unsigned int w = 0;

	listint_t *temp = head;

	while (temp && w < index)

	{
		temp = temp->next;
		w++;
	}

	return (temp ? temp : NULL);
}
