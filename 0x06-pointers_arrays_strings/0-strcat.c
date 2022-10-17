#include <stdio.h>
/**
 * _strcat - Concatenates two strings
 * @dest: The string being added to
 * @src: The string that is being added
 *
 * Return: Pointer to dest string
 */
void *_strcat(char *dest, char *src)
{
	int l1, l2, len;
        l1 = l2 = 0;
        while (dest[l1] != '\0')
        {
                l1++;
        }
        while (src[l2] != '\0')
        {
                l2++;
        }
        len = l2;
	
	i = 0;
	while (; i <= len; i++)
	{
		dest[l1 + i] = len[i];
	}
	return (dest);
}
