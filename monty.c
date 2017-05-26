#include "monty.h"

/**
 * main - main function of monty program
 * @argc: number of arguments
 * @argv: pointer to array of strings of arguments
 * Return: 0 on success, -1 on failure
 */
int main (int argc, char *argv[])
{
	stack_t **stack = NULL;
	FILE *fp;
	char *line = NULL;
	char *opcode;
	unsigned int line_number;
	size_t len = 0;
	ssize_t read;
	char *n;
	/*   int opcode_ret; */

	if (argc != 2)
	{
		printf("USAGE: monty file\n");
		return (EXIT_FAILURE);
	}

	fp = fopen(argv[1], "r");
	if (fp == NULL)
		exit (EXIT_FAILURE);

	line_number = 0;
	while ((read = getline(&line, &len, fp)) != -1)
	{
		line_number++;
		printf("Line Number: %d\n", line_number); /* test */
		opcode = strtok(line, " \n\t\r");
		if (opcode == NULL)
			continue;

		printf("%s\n", opcode); /* test */
		if (strcmp(opcode, "push") == 0)
		{
			n = strtok(NULL, " \n\t\r");
			printf("%s\n", n); /* test */
			push(stack, line_number, n);
		}
		/* else
		{
			opcode_ret = opcode_struct(opcode, stack, line_number);
			if (opcode_ret == 1)
			{
				printf("L%d: unknown instruction %s\n",
				       line_number, opcode);
				return (EXIT_FAILURE);
			}
			} */
	}
	/* free_stack(stack); */
	free(line);
	fclose(fp);
	return (EXIT_SUCCESS);
}
