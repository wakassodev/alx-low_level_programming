/*****************************************************************************/
/*                                                                           */
/*                                               _____  ______    ____  ___  */
/* 3-islower.c                                  /  _  \ |    |    \   \/  /  */
/*                                             /  /_\  \|    |     \     /   */
/* By: Wakasso   <wakasso42furtif@gmail.com>  /    |    \    |___  /     \   */
/*                                            \____|__  /_______ \/___/\  \  */
/* Created: 2022-03-15 22:14:38   $Wakasso            \/        \/      \_/  */
/* Updated: 2022-03-15 22:14:38 by Wakasso                                   */
/*                                                                           */
/*****************************************************************************/

#include "main.h"

/**
 * _islower - tests whether a character is a
 * lowercase letter from the English alphabet.
 * @c: character to test.
 * Return: 1 if it is a lowercase letter, 0 if it is not a lowercase letter.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);

}
