#include <stdio.h>
/**
 * main -  print the lowercase alphabet in reverse
 *
 * Return: Always returns 0
 *
 */
int main(void)
{
	char a;

	for (a = 'z'; a >= 'a' ; a--)
		putchar(a);
	putchar('\n');
	return (0);
}
