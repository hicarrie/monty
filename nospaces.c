#include "monty.h"

/**
 * nospaces - iterates through buffer, removes spaces
 * @string: character string
 * return: new string with no spaces
 */
char *nospaces(char *string)
{
	int i;
	int j;
	char *newstring;

	for (i = 0, j = 0; string[i] != NULL; i++)
	{
		if (string[i] == " " && string[i + 1] == " ")
		{
			i++;
			continue;
		}
		else
		{
		        newstring[j] == string[i];
			j++;
		}
	}

	return (newstring);
}
