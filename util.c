#include "monty.h"

/**
 * pall - prints the value of all items on the stack
 * @stack: pointer to stack
 * @line_number: line number of instruction
 * Return: void
 */
void pall(stack_t **stack, unsigned int __attribute__((unused))line_number)
{
	stack_t *current = *stack;

	if (stack == NULL || *stack == NULL)
		return;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}

/**
 * pint - prints value at the top of the stack, plus new line
 * @stack: pointer to stack
 * @line_number: line number of instruction
 * Return: value of the top element of the stack
 */
void pint(stack_t **stack, unsigned int line_number)
{
	int value;

	if (stack == NULL || *stack == NULL)
	{
		printf("L%d: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}

	value = (*stack)->n; /* head node's data */
	printf("%d\n", value);
}

/**
 * stack_length - returns length of stack
 * @stack: pointer to head of stack
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

	while (*stack != NULL)
	{
		current = *stack;
		*stack = (*stack)->next;
		free(current);
	}
}

/**
 * free_all - frees line and fp
 * @stack: stack to free
 * @line: line to free from getline
 * @fp: file pointer to free
 * Return: void
 */
void free_all(stack_t *stack, char *line, FILE *fp)
{
	if (stack != NULL)
	{
		free_stack(&stack);
	}
	free(line);
	fclose(fp);
}
