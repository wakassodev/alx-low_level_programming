#include "main.h"

/**
 * _isupper - a function that print  uppercase character
 * @ch: input
 * Return: 1 if ch is uppercase, 0 otherwise
 */
int _isupper(int ch)
{
	if ((ch >= 'A') && (ch <= 'Z'))
		return (1);
	else
		return (0);
}
