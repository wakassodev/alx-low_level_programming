#include "main.h"

/**
 * print_line - a function that draws a straight line in the terminal
 * @num: input number of times to print '_'
 * Return: a straight line
 */
void print_line(int num)
{
	int co;

	if (num <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (co = 1; co <= num; co++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
