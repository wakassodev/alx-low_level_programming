/*****************************************************************************/
/*                                                                           */
/*                                               _____  ______    ____  ___  */
/* 4-isalpha.c                                  /  _  \ |    |    \   \/  /  */
/*                                             /  /_\  \|    |     \     /   */
/* By: Wakasso   <wakasso42furtif@gmail.com>  /    |    \    |___  /     \   */
/*                                            \____|__  /_______ \/___/\  \  */
/* Created: 2022-03-15 22:14:45   $Wakasso            \/        \/      \_/  */
/* Updated: 2022-03-15 22:14:45 by Wakasso                                   */
/*                                                                           */
/*****************************************************************************/

#include "alx.h"

/**
 * _isalpha - tests whether a character is from the English alphabet.
 * @c: character to be checked.
 * Return: 1 if the character is an English character.
 * 0 if the character is not an English character.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);

}
