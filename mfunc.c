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
