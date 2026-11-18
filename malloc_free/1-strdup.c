#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: the string to duplicate
 *
 * Return: pointer to the duplicated string, or NULL if str is NULL
 * or if malloc fails
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int i, len = 0;

	/* إذا كان النص فاضي نرجع NULL */
	if (str == NULL)
		return (NULL);

	/* نحسب طول النص */
	while (str[len] != '\0')
		len++;

	/* نحجز مساحة للنص + 1 عشان الحرف الأخير \0 */
	dup = malloc(sizeof(char) * (len + 1));

	/* نتأكد إن الحجز تم بنجاح */
	if (dup == NULL)
		return (NULL);

	/* ننسخ النص القديم للمساحة الجديدة حرفاً حرفاً */
	for (i = 0; i <= len; i++)
	{
		dup[i] = str[i];
	}

	return (dup);
}
