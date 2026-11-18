#include "main.h"
#include <stdlib.h>

/**
 * word_count - counts words in a string
 * @s: string
 *
 * Return: word count
 */
int word_count(char *s)
{
	int i, w = 0, flag = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			w++;
		}
	}
	return (w);
}

/**
 * strtow - splits a string into words
 * @str: string to split
 *
 * Return: array of strings, or NULL on failure
 */
char **strtow(char *str)
{
	char **words;
	int i, j = 0, k, len = 0, count;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	count = word_count(str);
	if (count == 0)
		return (NULL);

	words = malloc(sizeof(char *) * (count + 1));
	if (words == NULL)
		return (NULL);

	for (i = 0; i < count; i++)
	{
		while (str[j] == ' ')
			j++;

		len = 0;
		while (str[j + len] != ' ' && str[j + len] != '\0')
			len++;

		words[i] = malloc(sizeof(char) * (len + 1));
		if (words[i] == NULL)
		{
			for (k = 0; k < i; k++)
				free(words[k]);
			free(words);
			return (NULL);
		}

		for (k =
# 1. ندخل للمجلد الصحيح
cd ~/holbertonschool-low_level_programming/malloc_free

# 2. نضيف الملفات لـ Git
git add main.h 101-strtow.c

# 3. نحفظ التغييرات
git commit -m "Task 6: add missing 101-strtow.c file"

# 4. نرفعها لـ GitHub
git push
cd ~/holbertonschool-low_level_programming/malloc_free

cat << 'EOF' > 101-strtow.c
#include "main.h"
#include <stdlib.h>

/**
 * word_count - counts words in a string
 * @s: string
 *
 * Return: word count
 */
int word_count(char *s)
{
	int i, w = 0, flag = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			w++;
		}
	}
	return (w);
}

/**
 * strtow - splits a string into words
 * @str: string to split
 *
 * Return: array of strings, or NULL on failure
 */
char **strtow(char *str)
{
	char **words;
	int i, j = 0, k, len = 0, count;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	count = word_count(str);
	if (count == 0)
		return (NULL);

	words = malloc(sizeof(char *) * (count + 1));
	if (words == NULL)
		return (NULL);

	for (i = 0; i < count; i++)
	{
		while (str[j] == ' ')
			j++;

		len = 0;
		while (str[j + len] != ' ' && str[j + len] != '\0')
			len++;

		words[i] = malloc(sizeof(char) * (len + 1));
		if (words[i] == NULL)
		{
			for (k = 0; k < i; k++)
				free(words[k]);
			free(words);
			return (NULL);
		}

		for (k = 0; k < len; k++)
			words[i][k] = str[j++];
		words[i][k] = '\0';
	}
	words[i] = NULL;

	return (words);
}
