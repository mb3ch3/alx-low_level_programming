#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 * betty style doc for function main goes there 
 */

int main(void)

{
	srand(time(0));
	int n = rand() - RAND_MAX / 2;
	return (0);

}
