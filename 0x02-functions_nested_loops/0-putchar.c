/*
 * this is a program to print a _putchar with a new
 * line character*/
#include<main.h>

int main(void)
{
	int msg[] = {(int) '_', (int) 'p', (int) 'u', (int) 't', (int) 'c', (int) 'h', (int) 'a', (int) 'r', (int) '\n'};
	int len = sizeof(msg) / sizeof(int);
	int a;

	for(a = 0; a< len; a++)
	{
		_putchar(msg[a]);
	}
	reture (0);
}
