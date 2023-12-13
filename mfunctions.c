#include "monty.h"
/**
 *
 *
 */
void push(stack_t **stack, unsigned int line_number)
{
	stack_t *new = malloc(sizeof(stack_t));

	if(new!= NULL)
	{
		new->n = n;
		new->next = *stack;
		*stack = new;
	}
	else
	{
		free(new);
		perror("L<line_number: usage: push integer\n");
		exit(EXIT_FAILURE);
	}
}
/**
 *
 *
 */
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;
	void (line_number);
}
/**
 *
 *
 */
int validnum(char *str)
{
	int i = 0;

	while(stri[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}
