#include "monty.h"

/**
 * push - add new item to top of stack
 * @stack: pointer to stack
 * @line_number: line number of instruction
 * @n: value of new item on stack
 * Return: 0 on success, -1 on failure
 */
void push(stack_t **stack, unsigned int __attribute__((unused))line_number, char *n)
{
	stack_t *new = NULL;

	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		printf("Error: malloc failed\n");
	        exit (EXIT_FAILURE);
	}

	/* if (isdigit(n) != 0)
	{
		printf("L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	} */

	printf("atoi: %d\n", atoi(n));

	new->n = atoi(n);
	printf("after new->n\n");
	printf("new->n: %d\n", new->n);

	new->prev = NULL;
	printf("after new->prev\n");

	new->next = NULL;
	printf("after new->next\n");

	if (*stack != NULL)
	{
		new->next = *stack;
		(*stack)->prev = new;
	}
	else
	*stack = new;
	printf("CAN IT BE TRUE?!");

        exit(EXIT_SUCCESS);
}

/**
 * pop - remove item at the top of stack
 * @stack: pointer to stack
 * @line_number: line number of instruction
 * Return: 0 on success, -1 on failure
 */
void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *next;

	if (stack == NULL || *stack == NULL)
	{
		printf("L%d: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}

	next = (*stack)->next; /* save next node's address */
	free(*stack);
	*stack = next; /* reassign next node to head */

	exit(EXIT_SUCCESS);
}

/**
 * swap - swaps the value of the top two elements on the stack
 * @stack: pointer to stack
 * @line_number: line number of instruction
 * Return: 0 on success, -1 on failure
 */
void swap(stack_t **stack, unsigned int line_number)
{
	int temp_a;
	int temp_b;

	if (stack_length(stack) < 2)
	{
		printf("L%d: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	temp_a = (*stack)->n;
	temp_b = (*stack)->next->n;

	(*stack)->n = temp_b;
	(*stack)->next->n = temp_a;

        exit(EXIT_SUCCESS);
}

/**
 * nop - does nothing
 * @stack: pointer to stack
 * @line_number: line number of instruction
 * Return: 0 on success, -1 on failure
 */
void nop(stack_t __attribute__((unused))**stack,
	unsigned int __attribute__((unused))line_number)
{
	exit(EXIT_SUCCESS);
}
