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

#include "alx.h"

/**
 * _abs - returns -n if n is less than 0 otherwise n
 * @n: integer to be tested
 * Return: _abs(n)
 * print_last_digit - prints the last digit of a number
 * @n: integer whose last digit is to be printed
 * Return: lastdigit
 */
int _abs(int n)
{
        if (n >= 0)
                return (n);
        else
                return (-1 * n);
}
int print_last_digit(int n)
{
	int lastDigit;

	lastDigit = _abs((n % 10));
	_putchar(lastDigit + 48);
	return (lastDigit);
}
