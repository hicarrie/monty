#include "monty.h"
/**
 * pchar - prints the char at the top of the stack
 * @stack: pointer to stack
 * @line_number: line number of instruction
 * Return: value of the top element of the stack
 */
void pchar(stack_t **stack, unsigned int line_number)
{
	int c;

	if (stack == NULL || *stack == NULL)
	{
		printf("L%d: can't pchar, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}

	c = (*stack)->n; /* head node's data */
	if (c < 0 && c > 127)
	{
		printf("L%d: can't pchar, value out of range\n", line_number);
		exit(EXIT_FAILURE);
	}
	putchar(c);
	putchar('\n');
}
