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
	char *buffer = NULL;
	unsigned int line_number;
	int n;
	int fd;
	ssize_t read_return;

	if (argc != 2)
	{
		printf("USAGE: monty file\n");
		return (EXIT_FAILURE);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		return (EXIT_FAILURE);
	buffer = malloc(sizeof(char) * BUFSIZE);
	if (buffer == NULL)
		return (EXIT_FAILURE);
	read_return = read(fd, buffer, BUFSIZE);
	if (read_return == -1)
		return (EXIT_FAILURE);
	buffer = nospaces(buffer);
	line_number = 1;
	while (buffer != '\0')
	{
		opcode = strtok(buffer, "\n\t\r ");
		if (opcode == push)
		{
			n = strtok(buffer, "\n\t\r ");
			if (isdigit(n) == 0)
			{
				printf("L%d: usage: push integer\n", line_number);
				return (EXIT_FAILURE);
			}

		}
		if (opcode == push)
		{
			push(*stack, line_number, n);
		}
		else if
			opcode_struct(opcode);
		else
		{
			printf("L%d: unknown instruction %s\n", line_number, opcode);
			return (EXIT_FAILURE);
		}
		line_number++;
	}
	/* FREE EVERYTHING */

	return (EXIT_SUCCESS);
}
