/*****************************************************************************/
/*                                                                           */
/*                                               _____  ______    ____  ___  */
/* 7-print_last_digit.c                         /  _  \ |    |    \   \/  /  */
/*                                             /  /_\  \|    |     \     /   */
/* By: Wakasso   <wakasso42furtif@gmail.com>  /    |    \    |___  /     \   */
/*                                            \____|__  /_______ \/___/\  \  */
/* Created: 2022-03-15 22:15:26   $Wakasso            \/        \/      \_/  */
/* Updated: 2022-03-15 22:15:26 by Wakasso                                   */
/*                                                                           */
/*****************************************************************************/

#include "main.h"

/**
 * print_last_digit - return last digit
 * @n : number to check
 * Return:0 or 1
 */
int _abs(int num)
{
	if (num >= 0)
		return (num);
	else
		return (-1 * num);
}
int print_last_digit(int n)
{
	int lastDigit;

	lastDigit = _abs((n % 10));
	_putchar(lastDigit + 48);
	return (lastDigit);
}
