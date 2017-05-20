#include "monty.h"

/**
 * _add - adds top two elements of stack, removes top element, and replaces
 * the value of the top element with the sum
 * @stack: pointer to stack
 * @line_number: line number of instruction
 * Return: 0 on success, -1 on failure
 */
int _add(stack_t **stack, unsigned int line_number)
{
	int a;
	int b;
	int result;

	if (stack_length(stack) < 2)
	{
		printf("L%d: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	a = (*stack)->n;
	b = (*stack)->next->n;

	result = a + b;

	pop(stack, line_number);

	*stack->n = result;

	return (EXIT_SUCCESS);
}

/**
 * _sub - subtracts top two elements of stack, removes top element, and replaces
 * the value of the top element with the difference
 * @stack: pointer to stack
 * @line_number: line number of instruction
 * Return: 0 on success, -1 on failure
 */
int _sub(stack_t **stack, unsigned int line_number)
{
	int a;
	int b;
	int result;

	if (stack_length(*stack) < 2)
	{
		printf("L%d: can't sub, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	a = (*stack)->n;
	b = (*stack)->next->n;

	result = a - b;

	pop(stack, line_number);

	*stack->n = result;

	return (EXIT_SUCCESS);
}

/**
 * _mul - multiplies top two elements of stack, removes top element, and
 * replaces the value of the top element with the product
 * @stack: pointer to stack
 * @line_number: line number of instruction
 * Return: 0 on success, -1 on failure
 */
int _mul(stack_t **stack, unsigned int line_number)
{
	int a;
	int b;
	int result;

	if (stack_length(*stack) < 2)
	{
		printf("L%d: can't mul, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	a = (*stack)->n;
	b = (*stack)->next->n;

	result = a * b;

	pop(stack, line_number);

	*stack->n = result;

	return (EXIT_SUCCESS);
}

/**
 * _div - divides top two elements of stack, removes top element, and replaces
 * the value of the top element with the quotient
 * @stack: pointer to stack
 * @line_number: line number of instruction
 * Return: 0 on success, -1 on failure
 */
int _div(stack_t **stack, unsigned int line_number)
{
	int a;
	int b;
	int result;

	if (stack_length(*stack) < 2)
	{
		printf("L%d: can't div, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	a = (*stack)->n;
	b = (*stack)->next->n;

	result = a / b;

	pop(stack, line_number);

	*stack->n = result;

	return (EXIT_SUCCESS);
}

/**
 * mod - divides top two elements of stack, removes top element, and replaces
 * the value of the top element with the remainder
 * @stack: pointer to stack
 * @line_number: line number of instruction
 * Return: 0 on success, -1 on failure
 */
int _mod(stack_t **stack, unsigned int line_number)
{
	int a;
	int b;
	int result;

	if (stack_length(*stack) < 2)
	{
		printf("L%d: can't mod, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	a = (*stack)->n;
	b = (*stack)->next->n;

	result = a % b;

	pop(stack, line_number);

	*stack->n = result;

	return (EXIT_SUCCESS);
}
