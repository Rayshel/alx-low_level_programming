#include <stdio.h>
/**
 * main - Print all the single digit numbers of base 10 starting from 0
 *
 * Return: always returns 0
 *
 */
int main(void)
{
	int a = 0;

	for (; a < 10 ; a++)
		printf("%d", a);
	putchar('\n');
	return (0);
}
