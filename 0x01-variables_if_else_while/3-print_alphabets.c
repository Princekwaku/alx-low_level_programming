#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - print alphabets without q and e
* Return: Always 0 (Success)
*/
int main(void)
{
char alp[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
int i;

for (i = 0; i < 52; i++)
{
putchar(alp[i]);
}
putchar('\n');
}