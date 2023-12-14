#include "monty.h"
/**
 *
 *
 */
void push(stack_t **stack, unsigned int line_number)
{
	stack_t *new = NULL;
	new = new_node(n);
	new->next = *stack;

	if (*stack != NULL)
	{
		(*stack)->prev = new;
	}
	*stack = new;

	else
	{
		perror("L<line_number: usage: push integer\n");
		exit(EXIT_FAILURE);
	}
}
/**
 *
 *
 */
void pall(stack_t **stack, unsigned int n)
{
	stack_t *temp = NULL;
	void(n);
	current = *stack;
	while (current != NULL)
	{
		dprintf(STDOUT_FILENO, "%d\n", current->n);
		current = current->next;
	}
}
/**
 *
 *
 */
