#include "monty.h"
#include "monty.h"
/**
 * pall - prints all the stack elements
 * @head: pointer to stack head
 * @counter: int
 * Return: void
*/
void pall(stack_t **head, unsigned int counter)
{
	stack_t *head2;
	(void)counter;

	head2 = *head;
	if (head2 == NULL)
		return;
	while (head2)
	{
		printf("%d\n", head2->n);
		head2 = head2->next;
	}
}
/**
 * push - add node to the stack
 * @head: pointer to stack head
 * @counter: the number of the line
 * Return: void
*/
void push(stack_t **head, unsigned int counter)
{
	int new, i = 0, sign = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			i++;
		for (; bus.arg[i] != '\0'; i++)
		{
			if (bus.arg[i] > 57 || bus.arg[i] < 48)
				sign = 1;
		}
		if (sign == 1)
		{
			fprintf(stderr, "L%d: usage: push integer\n", counter);
			fclose(bus.file);
			free(bus.content);
			free_stack(*head);
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		fprintf(stderr, "L%d: usage: push integer\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE); }
	new = atoi(bus.arg);
	if (bus.lifi == 0)
		addnode(head, new);
	else
		addqueue(head, new);
}
