#include <stdio.h>
/**
* main - main entry
* Description: print the alphabet in lower case 
* and in uppercase, followed by a new line
*/
int main(void)
{
char c = 'a';
while (c <= 'z')
{
putchar(c);
c++;
}
c = 'A';
while (c <= 'Z')
{
putchar(c);
c++;
}
putchar('\n');
return (0);
}
