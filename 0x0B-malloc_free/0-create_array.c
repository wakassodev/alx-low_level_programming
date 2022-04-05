/*
 * File: 0-create_array.c
 * Author: Idi Wakasso
 *
 */

#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 *                and initializes it with a specific char
 * @size: size af the array
 * @c: character initialized to the array
 * Return: NULL if it fails
 *         Pointer - if successful
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(c) * size);

	if (!size || !str)
		return (NULL);
	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}