#include "monty.h"
/**
 *
 *
 *
 */
int validnum(char *str)
{
	int i = 0;

	while(str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}
/**
 *
 *
 */
stack_t *new_node(int n)
{
	stack_t *new = malloc(sizeof(stack_t));
	if (new == NULL)
	{

	}
	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	return (new);
}
