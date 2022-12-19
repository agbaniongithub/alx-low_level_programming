#include "main.h"
/**
 * _strlen - fucntion that returns the length of a string
 * @s: string pointer
 * Return: length of string int.
 */

int _strlen(char *s)
{
int count;
for (; *s != '\0'; s++)
{
	count += 1;
}
return (count);
}
