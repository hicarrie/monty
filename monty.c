#include "monty.h"

/**
 * main - main function of monty program
 * @argc: number of arguments
 * @argv: pointer to array of strings of arguments
 * Return: 0 on success, -1 on failure
 */
int main (int argc, char *argv[])
{
	stack_t stack = NULL;
	char *buffer = NULL;
	unsigned int line_number;

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

		/* search struct of opcodes */
		if (opcode == push)
			/*do this */
			;
		else
			/*search opcode struct */

		/* execute function (with argument if there is one */

		/* increment line_number count */
		line_number++;

		/* end loop */
	}

	/* FREE EVERYTHING */

	return (EXIT_SUCCESS);
}


./monty filename

argv[0] 
