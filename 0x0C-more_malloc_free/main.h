#ifndef ALX_H
#define ALX_H

/**
 * File: main.h
 * Author: Idi Wakasso
 * Desc: Header file containing prototypes for all functions
 *       used in the 0x0C-more_malloc_free directory.
 */
int onlyNumbers(char *c);
void multiply(char* f, char* s);
int _putchar(char c);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int _strlen(char *);
#endif
