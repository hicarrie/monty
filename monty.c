#include "monty.h"

/**
 * main - main function of monty program
 * @argc: number of arguments
 * @argv: pointer to array of strings of arguments
 * Return: 0 on success, -1 on failure
 */
int main (int argc, char *argv[])
{
	stack_t **stack = NULL;
	char *buffer = NULL;
	unsigned int line_number;
	int n;

	if (argc != 2)
	{
		printf("USAGE: monty file\n");
		return (EXIT_FAILURE);
	}

	/* open file */

	/* read file into buffer */

	/* while buffer is not empty */
	line_number = 1;
	while (buffer != '\0')
	{
		/* strtok buffer */

		/* remove extra spaces */

		/* if token has an argument, strtok again? */

		/* search struct of opcodes (opcode will be defined from strtok) */
		if (opcode == push)
		{
			push(*stack, line_number, n);
		}
		/*do push function, has extra argument in it */
		else if
			/*search opcode struct, match opcode to function pointers */
			opcode_struct(opcode);
		else
		{
			printf("L%d: unknown instruction %s\n", line_number, opcode);
			return (EXIT_FAILURE);
		}
		/* execute function (with argument if there is one */

		/* increment line_number count */
		line_number++;

		/* end loop */
	}

	/* FREE EVERYTHING */

	return (EXIT_SUCCESS);
}
