#include "main.h"
#include <string.h>
/**
 * _strncpy - function for copying strings
 * @dest: parameter1
 * @src: parameter2
 * @n: parameter3
 * Return: String
 */

char *_strncpy(char *dest, char *src, int n)
{
int index = 0, src_len = 0;
while (src[index++])
src_len++;
for (index = 0; src[index] && index < n; index++)
dest[index] = src[index];
for (index = src_len; index < n; index++)
dest[index] = '\0';
return (dest);
}
