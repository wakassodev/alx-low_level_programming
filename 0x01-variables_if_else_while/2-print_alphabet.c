#include <stdio.h>

/**
 * main - Entry
 * Description: print"alphabet in lower case"
 * Return: 0
 */

int main(void)
{
	for (char ch = 97; ch <= 122; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
