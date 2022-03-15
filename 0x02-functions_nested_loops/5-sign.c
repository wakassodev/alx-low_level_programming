/*****************************************************************************/
/*                                                                           */
/*                                               _____  ______    ____  ___  */
/* 5-sign.c                                     /  _  \ |    |    \   \/  /  */
/*                                             /  /_\  \|    |     \     /   */
/* By: Wakasso   <wakasso42furtif@gmail.com>  /    |    \    |___  /     \   */
/*                                            \____|__  /_______ \/___/\  \  */
/* Created: 2022-03-15 22:15:06   $Wakasso            \/        \/      \_/  */
/* Updated: 2022-03-15 22:15:06 by Wakasso                                   */
/*                                                                           */
/*****************************************************************************/

#include "main.h"

/**
 * print_sign - Determines whether an integer is positive, negative or zero.
 * @n: the number to be checked.
 * Return: 1 if positive, 0 if zero, -1 if negative, / if not a digit.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('-');
		return ('/');
	}
}
