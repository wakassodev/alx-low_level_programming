/*****************************************************************************/
/*                                                                           */
/*                                               _____  ______    ____  ___  */
/* 2-print_alphabet_x10.c                       /  _  \ |    |    \   \/  /  */
/*                                             /  /_\  \|    |     \     /   */
/* By: Wakasso   <wakasso42furtif@gmail.com>  /    |    \    |___  /     \   */
/*                                            \____|__  /_______ \/___/\  \  */
/* Created: 2022-03-15 22:14:28   $Wakasso            \/        \/      \_/  */
/* Updated: 2022-03-15 22:14:28 by Wakasso                                   */
/*                                                                           */
/*****************************************************************************/

#include "main.h"

/**
  * print_alphabet_x10 - repeats the print_alphabet 10 times.
  * Return: Nothing.
  */

void print_alphabet_x10(void)
{
	int i;
	char c;

	for (i = 0; i < 10; ++i)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
