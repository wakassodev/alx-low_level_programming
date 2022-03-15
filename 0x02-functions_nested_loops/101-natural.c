/*****************************************************************************/
/*                                                                           */
/*                                               _____  ______    ____  ___  */
/* 101-natural.c                                /  _  \ |    |    \   \/  /  */
/*                                             /  /_\  \|    |     \     /   */
/* By: Wakasso   <wakasso42furtif@gmail.com>  /    |    \    |___  /     \   */
/*                                            \____|__  /_______ \/___/\  \  */
/* Created: 2022-03-15 22:15:53   $Wakasso            \/        \/      \_/  */
/* Updated: 2022-03-15 22:15:53 by Wakasso                                   */
/*                                                                           */
/*****************************************************************************/

#include <stdio.h>

/**
  * main - computes and prints the sum of all the multiples of
  * 3 or 5 below 1024.
  * Return: Nothing.
  */

int main(void)
{
	int i, res;

	for (i = 0; i < 1024; i++)
		if (i % 3 == 0 || i % 5 == 0)
			res += i;
	printf("%d\n", res);
	return (0);
}
