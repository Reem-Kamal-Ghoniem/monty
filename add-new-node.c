#include "monty.h"
/**
 * addnode - add new node to stack
 * @head: head of the stack
 * @n: value of the new node
 * Return: no return
*/
void addnode(stack_t **head, int n)
{

	stack_t *new_node, *tmp;

	tmp = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
		exit(0);
	}
	if (tmp)
		tmp->prev = new_node;
	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;
	*head = new_node;
}
