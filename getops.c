#include "monty.h"
/**
 *
 *
 */
int (*getop(stack_t **stack, unsigned int line_number))
{
	int i = 0;
	int valid_op;
	int len_opcode;

	instruction_t op[] = {
		{"push", push},
		{"pall", pall},
		{NULL, NULL}
	};
	while (op[i].opcode)
	{
		if (strcmp(arg, op[i].opcode == 0))
		{
			if (strcmp(arg, "push"))
			{
				if (DIGIT(item) == 1)
					value = atoi(item);
				else
					return (1);
			}
			op[i].f(stack, (unsigned int)count);
			break;
		}
		i++;
}
