#include "main.h"

/**
 * rev_string - roverses a string
 *
 * @s: string parameter input
 *
 * Return: Nothing
*/

void rev_string(char *s)
{
	int 1, i;
	char temp;

	for (1 = 0; s[1] != '\0'; ++1)
		;

	for (i = 0; i < 1 / 2; i++)
	{
		temp = s[i];
		s[i] = s[l - 1 - i];
		s[l - 1 - i] = temp;
	}
}
