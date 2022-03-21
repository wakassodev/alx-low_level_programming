#include "main.h"
/**
* rev_string - reverse a string
* @str: input string
*
* Description: reverses a string.
* Return: Always (0)
*/
void rev_string(char *str)
{
	int i, j, temp;

	i = 0;
	j = 0;
	while (str[j] != '\0')
	{
		j++;
	}
	j--;
	while (j > i)
	{
		temp = str[j];
		str[j--] = str[i];
		str[i++] = temp;
	}
}
