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
		comparison = strcmp(op, opcode[i].opcode)
		       if (comparison == 0)
			       return (oplist[i].f);
		i++;
	}
}
