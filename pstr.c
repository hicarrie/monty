#include "monty.h"
/**
 * pstr - prints the string starting at the top of the stack
 * @stack: pointer to stack
 * @line_number: line number of instruction
 * Return: value of the top element of the stack
 */
void pstr(stack_t **stack, unsigned int line_number)
{
	int c;
	(void)line_number;

	while (*stack != NULL)
	{
		c = (*stack)->n; /* head node's data */
		if (c > 0 && c <= 127)
		{
			*stack = (*stack)->next;
			putchar(c);
		}
		else
			break;
	}

	putchar('\n');
}
