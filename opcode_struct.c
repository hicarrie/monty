#include "monty.h"
/**
 * opcode_struct - checks for opcode's associated function and executes
 * @opcode: opcode from user input
 * @stack: pointer to stack
 * @line_number: line number of opcode from user input
 * Return: 0 on success, 1 on failure
 */

void (*opcode_struct(char *opcode))(stack_t **stack, unsigned int line_number)
{
	int status;
	int i;

	instruction_t opcodes[] = {
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{"nop", nop},
		{"add", _add},
		{"sub", _sub},
		{"mul", _mul},
		{"div", _div},
		{"mod", _mod},
		{NULL, NULL}
	};

	status = 0;
	for (i = 0; opcodes[i].opcode != NULL; i++)
	{
		if ((strcmp(opcode, opcodes[i].opcode)) == 0)
		{
			status = (opcodes[i].f)(stack, line_number);
			return (status);
		}
	}

	return (EXIT_FAILURE);
}
