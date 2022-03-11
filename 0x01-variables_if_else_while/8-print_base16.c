#include <stdio.h>

/**
 * main - Entry
 * Description: prints all the numbers of base 16 in lowercase
 * Return: 0
 */

int main(void)
{
	char ch;
	char i = '0';

	while (i <= '9')
	{
		putchar(i);
		i++;
	}

	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
