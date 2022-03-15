/*****************************************************************************/
/*                                                                           */
/*                                               _____  ______    ____  ___  */
/* 6-abs.c                                      /  _  \ |    |    \   \/  /  */
/*                                             /  /_\  \|    |     \     /   */
/* By: Wakasso   <wakasso42furtif@gmail.com>  /    |    \    |___  /     \   */
/*                                            \____|__  /_______ \/___/\  \  */
/* Created: 2022-03-15 22:15:17   $Wakasso            \/        \/      \_/  */
/* Updated: 2022-03-15 22:15:17 by Wakasso                                   */
/*                                                                           */
/*****************************************************************************/

#include "main.h"

/**
 * _abs - calculate the absolute value of the number from zero.
 * @i: the integer to be converted.
 * Return: absolute value of the input number.
 */

int _abs(int i)
{
	if (i < 0)
		i = i * -1;
	return (i);
}
