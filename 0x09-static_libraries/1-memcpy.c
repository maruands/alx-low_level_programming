#include "main.h"
/**
*_memcpy - fill in the memory with another dest
*@dest: string to fill
*@src: source string
*@n: size of memory
*Return: a pointer to dest
**/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int k = 0;
	int j = n;

	for (; k < j; k++)
	{
		dest[k] = src[k];
		n--;
	}
	return (dest);
}
