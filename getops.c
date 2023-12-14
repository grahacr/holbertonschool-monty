#include "monty.h"
/**
 *
 *
 */
void(*getop(char *op, unsigned int count))(stack_t **stack, unsigned int line_number)
{
	int i = 0;
	int compare;

	instruction_t oplist[] = {
		{"push", push},
		{"pall", pall},
		{NULL, NULL}
	};
	while (i < 2)
	{
		count++;
		compare = strcmp(op, oplist[i].opcode);
		       if (compare == 0)
			       return (oplist[i].f);
       i++;		       
	}
	return (NULL);
}
