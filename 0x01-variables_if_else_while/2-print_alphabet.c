#include <stdio.h>
/**
 *main  - Entry pont
 *
 *Return: always 0;
 */
int main(void)
{

int x;

for (x = 'A'; x = 'z'; x++)
{
x = tolower(x);
putchar(x);
}

putchar('\n');
return (0);

}
