#include "main.h"
<<<<<<< HEAD
/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
int longi = 0;

while (*s != '\0')
{
longi++;
s++;
}

return (longi);
=======

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
>>>>>>> cb5a34bf78bb035879384a9c37eb74800f574545
}
