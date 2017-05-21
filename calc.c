#include "monty.h"

/**
 * add - adds top two elements of stack, removes top element, and replaces
 * the value of the top element with the sum
 * @stack: pointer to stack
 * @line_number: line number of instruction
 * Return: 0 on success, -1 on failure
 */
int add(stack_t **stack, unsigned int line_number)
{
	/* if length of stack is less than 2 */
	if (stack_len(stack) < 2)
	{
		printf("L%d: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	return (0);
}

/**
 * sub - subtracts top two elements of stack, removes top element, and replaces
 * the value of the top element with the difference
 * @stack: pointer to stack
 * @line_number: line number of instruction
 * Return: 0 on success, -1 on failure
 */
int sub(stack_t **stack, unsigned int line_number)
{
	/* if length of stack is less than 2 */
	if (stack_len(stack) < 2)
	{
		printf("L%d: can't sub, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	return (0);
}

/**
 * mul - multiplies top two elements of stack, removes top element, and replaces
 * the value of the top element with the product
 * @stack: pointer to stack
 * @line_number: line number of instruction
 * Return: 0 on success, -1 on failure
 */
int mul(stack_t **stack, unsigned int line_number)
{
	/* if length of stack is less than 2 */
	if (stack_len(stack) < 2)
	{
		printf("L%d: can't mul, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	return (0);
}

/**
 * div - divides top two elements of stack, removes top element, and replaces
 * the value of the top element with the quotient
 * @stack: pointer to stack
 * @line_number: line number of instruction
 * Return: 0 on success, -1 on failure
 */
int div(stack_t **stack, unsigned int line_number)
{
	/* if length of stack is less than 2 */
	if (stack_len(stack) < 2)
	{
		printf("L%d: can't div, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	return (0);
}

/**
 * mod - divides top two elements of stack, removes top element, and replaces
 * the value of the top element with the remainder
 * @stack: pointer to stack
 * @line_number: line number of instruction
 * Return: 0 on success, -1 on failure
 */
int mod(stack_t **stack, unsigned int line_number)
{
	/* if length of stack is less than 2 */
	if (stack_len(stack) < 2)
	{
		printf("L%d: can't mod, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	return (0);
}
