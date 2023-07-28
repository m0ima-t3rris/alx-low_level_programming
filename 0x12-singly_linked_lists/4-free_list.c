#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* free_list - Realease the memory allocated to a list.
* @head:pointer to first node of the list to free.
*/
void free_list(list_t *head)
{
if (head)
{
free_list(head->next);
if (head->str)
free(head->str);
free(head);
}
}
