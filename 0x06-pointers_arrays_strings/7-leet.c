#include "main.h"

/**
 *leet - encodes a string into 1337.
 *letters a and A are replaced by 4.
 *Letters e and E are replaced by 3
 *Letters o and O are replaced by 0
 *Letters t and T are replaced by 7
 *Letters l and L are replaced by 1
 *@s: pointer to string.
 *Return: pointer to s.
 */

char *leet(char *s)
{
	int i, j;

	char subs[] = "aAeEoOtTlL";

	char le[] = "43071";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; subs[j] != '\0'; j++)
		{
			if (s[i] == subs[j])
				s[i] = le[j / 2];
		}
	}

	return (s);
}
