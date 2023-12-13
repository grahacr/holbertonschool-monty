#include "monty.h"
/**
 *
 *
 */
int main(int argc, char **argv);
{
	size_t buffsize = 1024;
	size_t len;
	char (*func)(stack_t **stack, unsigned int line_number);
	char *buffer = malloc(buffsize * sizeof(char));
	int i;
	while (1)
	{
	if (fgets(buffer, sizeof(buffer), stdin) != NULL)
	{
		len=strlen(buffer);
		if (len >0 && buffer(len - 1) == '\n\)
				buffer(len-1) = '\0')
	}
	if (argc < 2)
	{
		perror("USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	else
	{
		perror("USAGE: monty file");
		func = getop(buffer);
		printf("func: %s:", buffer);
	}
	}
}
