#include "monty.h"
/**
 * opcode_struct - checks for opcode's associated function and executes
 * @opcode: opcode from user input
 * @stack: pointer to stack
 * @line_number: line number of opcode from user input
 * Return: 0 on success, 1 on failure
 */

int (*opcode_struct(char *opcode))(stack_t **stack, unsigned int line_number)
{
	stack_t opcode_struct[] = {
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{"nop", nop},
		{"add", add},
		{"sub", sub},
		{"mul", mul},
		{"div", div},
		{"mod", mod},
		{NULL, NULL}
	};

	for (i = 0; opcode_struct[i] != NULL; i++)
	{
		if (strcmp(opcode, opcode_struct[i]) == 0)
		{
			status = (opcode_struct[i].f)(stack, line_number);
			return (status);
		}
	}

	return (EXIT_FAILURE);
}
