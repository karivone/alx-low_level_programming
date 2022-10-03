#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *_strdup - return a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter.
 * @str: string
 * Return: 0
 */

char *_strdup(char *str)
{
	int i = 0, len = 0;
	char *duplicate_str;

	if (str == NULL)/* validate str input*/
		return (NULL);

	while (*(str + i))
		len++, i++;
	len++; /*add null terminator to length */

	duplicate_str = malloc(sizeof(char) * len); /* allocate memory */

	if (duplicate_str == NULL) /* validate memory */
		return (NULL);

	i = 0;
	while (i < len)
	{
		*(duplicate_str + i) = *(str + i);
		i++;
	}

	return (duplicate_str);
}
