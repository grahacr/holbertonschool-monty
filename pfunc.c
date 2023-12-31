#include "monty.h"
/**
 *
 *
 */
void push(stack_t **stack, unsigned int n)
{
        stack_t *new = malloc(sizeof(stack_t));

	if (!new)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	else
	{
		new->n = n;
		new->next = *stack;
		new->prev = NULL;
		(*stack)->prev = new;
		*stack = new;
	}
}

/**
 *
 *
 */
void pall(stack_t **stack, unsigned int line_number)
{
	void(line_number);
	stack_t *temp = *stack;
	while (temp != NULL)
	{
		dprintf(STDOUT_FILENO, "%d\n", temp->n);
		temp = temp->next;
	}
}
/**
 *
 *
 */
