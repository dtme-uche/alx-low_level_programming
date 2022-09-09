#include<stdio.h>
#include <stdlib.h>

/**
 * main - print alphabet in lower letter
 * Return: Always 0 (Success)
 * function main - print alphabet in lower letter
 */
int main(void)
{
	char i;
	putchar("Lower case characters:\n");
	for(i='a'; i<='z'; i++)
	putchar("%c ",i);
	return 0;
}
