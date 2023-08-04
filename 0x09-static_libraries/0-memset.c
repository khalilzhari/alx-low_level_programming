#include "main.h"
<<<<<<< HEAD
/**
 * _memset - fill a block of memory with a specific value
 * @s: starting address of memory to be filled
 * @b: the desired value
 * @n: number of bytes to be changed
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
int i = 0;

for (; n > 0; i++)
{
s[i] = b;
n--;
}
return (s);
=======

/**
 * _memset -fill memory with constant values
 * @s: pointer to char params
 * @b: constant byte
 * @n: byte of mem area
 * Return: *s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
	s[i] = b;
	}
	return (s);
>>>>>>> cb5a34bf78bb035879384a9c37eb74800f574545
}
