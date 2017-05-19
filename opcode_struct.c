#include "monty.h"
/**
 * opcode_struct - checks input string for opcode
typedef struct instruction_s
{	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
 */

void (*opcode_struct(char opcode))(stack_t **stack, unsigned int line_number)
{
	instruction_s opcode_struct[] = {
		{'pall', pall},
		{'pint', pint},
		{'pop', pop},
		{'swap', swap},
		{'nop', nop},
		{'add', add},
		{'sub', sub},
		{'mul', mul},
		{'div', div},
		{'mod', mod},
		{NULL, NULL}
	};	
}
