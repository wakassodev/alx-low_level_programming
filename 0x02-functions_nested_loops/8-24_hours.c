/*****************************************************************************/
/*                                                                           */
/*                                               _____  ______    ____  ___  */
/* 8-24_hours.c                                 /  _  \ |    |    \   \/  /  */
/*                                             /  /_\  \|    |     \     /   */
/* By: Wakasso   <wakasso42furtif@gmail.com>  /    |    \    |___  /     \   */
/*                                            \____|__  /_______ \/___/\  \  */
/* Created: 2022-03-15 22:15:35   $Wakasso            \/        \/      \_/  */
/* Updated: 2022-03-15 22:15:35 by Wakasso                                   */
/*                                                                           */
/*****************************************************************************/

#include "main.h"

/**
 * jack_bauer - prints time table in this format: HH:MM
 * Return: the sum of two numbers.
 */
void jack_bauer(void)
{
	int h, m;

	for (h = 0; h < 24; h++)
	{
		for (m = 0; m < 60; m++)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar('\n');
		}
	}
}
