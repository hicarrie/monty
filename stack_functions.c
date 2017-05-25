#include "monty.h"

/**
 * push - add new item to top of stack
 * @stack: pointer to stack
 * @line_number: line number of instruction
 * @n: value of new item on stack
 * Return: 0 on success, -1 on failure
 */
int push(stack_t **stack, unsigned int line_number, char *n)
{
	stack_t *new;

	new = malloc(sizeof(stack_t));

	if (new == NULL)
	{
		printf("Error: malloc failed\n");
		return (EXIT_FAILURE);
	}

	new->n = atoi(n);
	new->prev = NULL;
	new->next = *stack;
	*stack = new;

	return (EXIT_SUCCESS);
}

/**
 * pop - remove item at the top of stack
 * @stack: pointer to stack
 * @line_number: line number of instruction
 * Return: 0 on success, -1 on failure
 */
int pop(stack_t **stack, unsigned int line_number)
{
	stack_t *next;

	if (stack == NULL || *stack == NULL)
	{
		printf("L%d: can't pop an empty stack\n", line_number);
		return (EXIT_FAILURE);
	}

	next = (*stack)->next; /* save next node's address */
	free(*stack);
	*stack = next; /* reassign next node to head */

	return (EXIT_SUCCESS);
}

/**
 * swap - swaps the value of the top two elements on the stack
 * @stack: pointer to stack
 * @line_number: line number of instruction
 * Return: 0 on success, -1 on failure
 */
int swap(stack_t **stack, unsigned int line_number)
{
	int temp_a;
	int temp_b;

	if (stack_length(*stack) < 2)
	{
		printf("L%d: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	temp_a = (*stack)->n;
	temp_b = (*stack)->next->n;

	(*stack)->n = temp_b;
	(*stack)->next->n = temp_a;

	return (EXIT_SUCCESS);
}

/**
 * nop - does nothing
 * @stack: pointer to stack
 * @line_number: line number of instruction
 * Return: 0 on success, -1 on failure
 */
int nop(stack_t __attribute__((unused))**stack,
	unsigned int __attribute__((unused))line_number)
{
	return (EXIT_SUCCESS);
}
