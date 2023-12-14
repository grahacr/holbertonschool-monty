#include "monty.h"
/**
 *
 *
 */
void push(stack_t **stack, unsigned int n)
{
	stack_t *new = NULL;
	new = malloc(sizeof(stack_t));

	if (!new)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	new->n = n;
	new->next = *stack;
	new->prev = NULL;
	(*stack)->prev = new;
	*head = new;
}

/**
 *
 *
 */
void pall(stack_t **stack, unsigned int n)
{
	stack_t *temp = *stack;
	while (temp != NULL)
	{
		dprintf("%d\n", temp->n);
		temp = temp->next;
	}
}
/**
 *
 *
 */
