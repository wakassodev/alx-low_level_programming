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
 * print_last_digit - prints the last digit of a number
 * @n: n is an integer
 * Description: prints the last digit of a number
 * Return: integer
 */

int print_last_digit(int num)
{
	int nv;

	if (num < 0)
		nv = -1 * (num % 10);
	else
		nv = num % 10;

	_putchar(nv + '0');
		return (nv);
}
