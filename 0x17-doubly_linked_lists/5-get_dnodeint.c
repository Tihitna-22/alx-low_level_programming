#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: pointer to the head of the list
 * @index: index of the node
 *
 * Return: pointer to the node, or NULL on failure
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
  dlistint_t *temp;

  temp = head;

  if (head == NULL)
    return (NULL);
  if (index == 0)
    return (head);

  while(index > 0)
    {
      temp = temp->next;
      index--;
    }
    
  return temp;
}
