#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* check_list - check if linked lists has a cycle in it
* @list: head of the list
* Description: check if linked lists has a cycle in it 
* Return: 0 if there is a no cycle, one if there is a cycle
*/

int check_cycle(listint_t *list)
{
	listint_t *current;
	current = list;

	while (current->next != NULL)
	{
		current = current->next;
		if (list->n == current->n)
		{
	                return (1);
        	} 
	}
	
	return (0);
}
