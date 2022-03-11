#include <stdio.h>

/**
 * main - Entry
 * Description: print"Alphabet lowercase and uppercase"
 * Return: 0
 */

int main(void)
{
	for (char ch = 97; ch <= 122; ch++)
	{
		putchar(ch);
	}
	for (char ch = 65; ch <= 90; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
