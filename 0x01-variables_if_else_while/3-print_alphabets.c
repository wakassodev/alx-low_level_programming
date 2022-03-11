#include <stdio.h>

/**
 * main - Entry
 * Description: print"Alphabet lowercase and uppercase"
 * Return: 0
 */

int main(void)
{
	char ch;

	for (ch = 97; ch <= 122; ch++)
	{
		putchar(ch);
	}
	for (ch = 65; ch <= 90; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
