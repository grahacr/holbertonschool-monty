#include "monty.h"
/**
 *
 *
 */
int main(int argc, char **argv)
{
	FILE *file;
	size_t buffsize = 1024;
	char *buffer = malloc(buffsize * sizeof(char));
	int count = 0;
	char *token;
	char *command = malloc(buffsize * sizeof(char));

	if (!buffer || !command)
		return (0);
	
	if (argc < 2)
	{
		perror("USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");
	if (file == NULL)
	{
		fprintf(stderr, "Unable to open file\n");
		exit(EXIT_FAILURE);
	}
	while (fgets(buffer, buffsize, file) != NULL)
	{
		token = strtok(buffer, " ");
		strcpy(command, token);
		if (validnum(token))
		{
			int convert = atoi(token);
			count++;
			printf("Line count: %d", count);
		}
		else
		{
			fprintf(stderr, "ERROR CODE\n", count);
		}
	}
	fclose(file);
	free(buffer);
	free(command);
	return (0);
}
