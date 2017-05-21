/**
 * nospaces - iterates through buffer, removes spaces
 * @string: character string
 * return: new string with no spaces
 */
char* nospaces(char *string)
{
	int i;
	int j;
	char *newstring;

	for (i = 0, j = 0; string[i] != NULL; i++)
	{
		if (string[i] != " ")
		{
			newstring[j] = string[i];
			j++;
		}
/*what if there are more than 2 spaces damnit*/
		else if (string[i] == " " && string[i + 1] == " ")
		{
			continue;
		}
	}

	return (newstring);
}
