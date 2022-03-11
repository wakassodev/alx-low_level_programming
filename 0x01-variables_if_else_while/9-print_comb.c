#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry
 * Description: prints all single digit numbers of base 10
 * starting from 0, followed by a new line.
 * Return: 0
 */
int main(void)
{
	int ch = 0;

	while (ch < 10)
	{
		putchar(48 + ch);
		if (ch != 9)
		{
			putchar(',');
			putchar(' ');
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
