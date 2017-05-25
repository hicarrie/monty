#include "monty.h"

/**
 * pall - prints the value of all items on the stack
 * @stack: pointer to stack
 * @line_number: line number of instruction
 * Return: 0 on success, -1 on failure
 */
int pall(stack_t **stack, unsigned int line_number)
{
	stack_t *current = *stack;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
	}

	return (EXIT_SUCCESS);
}

/**
 * pint - returns the value of the top element of the stack
 * @stack: pointer to stack
 * @line_number: line number of instruction
 * Return: value of the top element of the stack
 */
int pint(stack_t **stack, unsigned int line_number)
{
	stack_t *next;
	int value;

	if (stack == NULL || *stack == NULL)
	{
		printf("L%d: can't pint, stack empty\n", line_number);
		return (EXIT_FAILURE);
	}

	value = (*stack)->n; /* head node's data */
	next = (*stack)->next; /* save next node's address */
	free(*stack);
	*stack = next; /* reassign next node to head */

	return (value);
}

/**
 * stack_length - returns length of stack
 * Return: length of stack
 */
size_t stack_length(stack_t **stack)
{
	stack_t *current;
	unsigned int n; /* counter for number of elements */

	current = *stack;
	n = 0;
	while (current != NULL)
	{
		current = current->next;
		n++;
	}

	return (n);
}

/**
 * free_stack - frees a stack_t stack
 * @stack: stack to be freed
 * Return: void
 */
void free_stack(stack_t **stack)
{
	stack_t *current;

	while (stack != NULL)
	{
		current = *stack;
		*stack = (*stack)->next;
		free(current);
	}
}
