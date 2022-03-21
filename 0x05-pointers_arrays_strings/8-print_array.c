#include "main.h"
#include "stdio.h"
/**
* print_array - Print array upto n elements
* @x: Array to be read from
* @num: Number of elements to be read
* Return: Always 0.
*/
void print_array(int *x, int num)
{
	int i;

	if (num > 0)
	{
		for (i = 0 ; num > i; i++)
		{
			if (i != num - 1)
			{
				printf("%d, ", x[i]);
			}
			else
			{
				printf("%d", x[i]);
			}
		}
	}
	printf("\n");
}
