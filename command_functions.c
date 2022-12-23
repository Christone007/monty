#include "monty.h"

/**
 * get_opcode - gets the opcode from a line
 * @line: The line of string to get opcode from
 * 
 * Return: The opcode if Success, 0 if empty line, -1 if error
 */
char *get_opcode(char *line)
{
	int i = 0, j;

	while (*(line + i) != '\n')
	{
		if (isalpha(*(line + i)))
		{
			break;
		}
		else
			i++;
	}
	if (*(line + i) == '\n')
		return (-1);


	j = i;

	while (*(line + j) != '\n')
	{
		if (*(line + j) == 32)
		{
			break;
		}
		else
			j++;
	}
	
	if (j > i)
	{
		len = j - i;
	}

	
}

