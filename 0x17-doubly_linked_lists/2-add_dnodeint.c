#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - add a new node at the beginning of the linked list
 * @head: double pointer to the beginning of the linked list
 * @n: data to add to the new node
 *
 * Return: pointer to the new node or NULL on failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
  dlistint_t *temp;
  if (head == NULL)
    {
      return (NULL);
    }
  temp = malloc(sizeof(dlistint_t));
  if (temp == NULL)
    {
      return NULL;
    }
  temp->prev = NULL;
  temp->n = n;
  temp -> next = *head;
  *head = temp;
  if (temp->next != NULL)
    {
      (temp->next)->prev = temp;
    }
  return temp;
}

