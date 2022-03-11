#include <stdio.h>

/**
 * main - Entry
 * Description: prints the lowercase alphabet in reverse
 *Return: 0
 */

int main(void)
{
	char ch;

	for (ch = 122; ch >= 97; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
