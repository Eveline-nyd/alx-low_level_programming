#include "main.h"
/**
* _strncat - concatenate two strings
* using at most n bytes from src
* @dest: input value
* @src: input value
* @n: The maximum number of bytes to be concatenated
*
* Return: dest
*/
char *_strncat(char *dest, char *src, int n);
{
int dest_len = 0;
int i;

/* Get the length of the destination string */
while (dest[dest_len] != '\0')
dest_len++;

/* Concatenate up to n bytes from src to dest */
for (i = 0; i < n && src[i] != '\0'; i++)
dest[dest_len++] = src[i];

/* Add a terminating null byte */
dest[dest_len] = '\0';

return (dest);
}
{
int dest_len = 0;
int i;

/* Get the length of the destination string */
while (dest[dest_len] != '\0')
dest_len++;

/* Concatenate up to n bytes from src to dest */
for (i = 0; i < n && src[i] != '\0'; i++)
dest[dest_len++] = src[i];

/* Add a terminating null byte */
dest[dest_len] = '\0';

return (dest);
}

