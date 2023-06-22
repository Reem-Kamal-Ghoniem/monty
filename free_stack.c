#include "monty.h"

/**
* free_stack - frees a doubly linked list
* @head: head of the stack
*/
void free_stack(stack_t *head)
{
	stack_t *temp;

	if (head == NULL)
	{
		return;
	}

	do
	{
		temp = head;
		head = head->next;
		free(temp);
	} while (head != NULL);
}
