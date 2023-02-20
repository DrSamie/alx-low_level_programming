#include <stdio.h>
/**
* main - main entry
* Description: get a random number and check its
* Return: 0
*/
int main(void)
{
char c = 'a';

while (c <= 'z')
{
if (c != 'e' && c != 'q')
{
putchar(c);
}
c++;
}
putchar('\n');
return (0);
}
