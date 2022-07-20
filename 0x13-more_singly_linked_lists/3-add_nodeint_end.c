#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 *add_nodeint -print list.
 *Description: Function that adds node at the end of the list
 * @head: pointer to a structure typedef list_t
 * @n: integer
 * Return: the number of nodes
 **/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *newNode = malloc(sizeof(listint_t));
newNode->n = n;
if (*head == NULL)
{
	*head = newNode;
	return(NULL);
}
else
 {
 listint_t *lastNode = *head;

       while (lastNode->next != NULL)
        {
        lastNode = lastNode->next;
	}
        lastNode->next = newNode;

	return (lastNode);


}
}
