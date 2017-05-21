#include "monty.h"

/**
 * main - main function of monty program
 * @argc: number of arguments
 * @argv: pointer to array of strings of arguments
 * Return: 0 on success, -1 on failure
 */
int main(int argc, char *argv[])
{
	FILE *fp;
	stack_t *stack = NULL;
	char *line = NULL;
	char *opcode;
	char *n;
	int opcode_ret;
	unsigned int line_number;
	size_t len = 0;
	ssize_t read;

	if (argc != 2)
	{
		printf("USAGE: monty file\n");
		return (EXIT_FAILURE);
	}

	fp = fopen(argv[1], "r");
	if (fp == NULL)
	{
		printf("Error: Can't open file %s\n", argv[1]);
		return (EXIT_FAILURE);
	}

	line_number = 0;
	while ((read = getline(&line, &len, fp)) != -1)
	{
		line_number++;
		opcode = strtok(line, "\n\t\r ");
		if (opcode == NULL)
			continue;

		if (strcmp(opcode, "push") == 0)
		{
			n = strtok(NULL, "\n\t\r ");
			push(&stack, line_number, n);
		}
		else
		{
			opcode_ret = opcode_struct(opcode, &stack, line_number);
			if (opcode_ret == 1)
			{
				printf("L%d: unknown instruction %s\n",
				       line_number, opcode);
				return (EXIT_FAILURE);
			}
		}
	}
	free_all(stack, line, fp);
	return (EXIT_SUCCESS);
}
