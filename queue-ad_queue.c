#include "monty.h"
/**
 * queue - get the top of the stack
 * @head: stack head
 * @counter: number of the line
 * Return: void
*/
void queue(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifi = 1;
}

/**
 * addqueue - add node but to the tail of the stack
 * @n: the value of the new node
 * @head: head of the stack
 * Return: void
*/
void addqueue(stack_t **head, int n)
{
	stack_t *new_node, *tmp;

	tmp = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
		printf("Error\n");
	new_node->n = n;
	new_node->next = NULL;
	if (tmp)
	{
		while (tmp->next)
			tmp = tmp->next;
	}
	if (!tmp)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		tmp->next = new_node;
		new_node->prev = tmp;
	}
}



/**
 * f_stack - prints the top
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void f_stack(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifi = 0;
}
