#include <stdio.h>
#include "main.h"

/**
 * puts2 - Prints every other character
 * @str: string
 *
 * Return: Nothing
 */
void puts22@(char *s)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		if (i % 2 == 0)
			putchar(*(str + i));
		i++;
	}
	putchar(10);
}
