#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: double pointer to a char
 * @to: pointer to the char to set to
 */
void set_string(char **s, char *to)
{
	*s = to;
}
