#include <stdio.h>

/**
 * main - prints alphabets in upper case and lower case
 * Return: Always 0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);

	for (ch = 'Z'; ch <= 'Z'; ch++)
		putchar(ch);
	putchar('\n')
	return (0);
}
