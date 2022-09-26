#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string in which to check for needle
 * @needle: substring to find in haystack
 *
<<<<<<< HEAD
 * Return: pointer to beginning of needle in haystack or NULL if no match
=======
 * Return: true if haystack and needle are the same.
 */

int compare(char *haystack, char *needle)
{
	/* loop through both strings */
	while (*haystack && *needle)
	{
		/* compare both strings */
		if (*haystack != *needle)
			return (0);

		haystack++;
		needle++;
	}

	return (*needle == '\0');
}



/**
 *_strstr - function that locates a substring.
 * @haystack: pointer to the null-terminated byte string to examine.
 * @needle: pointer to the null-terminated byte string to search for.
 *
 * Return:  a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
>>>>>>> 9ab1a27d3d93ae260a0944c95df06c4b1b30fc80
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0, j = 0;

	while (haystack[i])
	{
		while (needle[j] && (haystack[i] == needle[0]))
		{
			if (haystack[i + j] == needle[j])
				j++;
			else
				break;
		}
		if (needle[j])
		{
			i++;
			j = 0;
		}
		else
			return (haystack + i);
	}
	return (0);
}
