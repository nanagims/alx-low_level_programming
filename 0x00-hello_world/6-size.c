#include <stdio.h>
#include <stdlib.h>
/**
 *main - Entry point
 *
 *Return: always 0
 */
int main(void)
{
int c, i, li, lli, f;
c = sizeof(char);
i = sizeof(int);
li = sizeof(long int);
lli = sizeof(long long int);
f = sizeof(float);
printf("size of char: %d byte(s) \n", c);
printf("size of int: %d byte(s) \n", i);
printf("size of long int: %d byte(s) \n", li);
printf("size of long long int: %d byte(s) \n", lli);
printf("size of float: %d byte(s) \n", f);
return (0);
}
