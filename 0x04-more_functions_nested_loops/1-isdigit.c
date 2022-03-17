#include "main.h"

/**
 * _isdigit -  a function that print a digit 0-9
 * @c: input
 * Return: 1 if ch is a digit, 0 otherwise
 */
int _isdigit(int ch)
{
	if ((ch >= 48) && (ch <= 57))
		return (1);
	else
		return (0);
}
