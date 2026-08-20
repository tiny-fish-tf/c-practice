#include <stdio.h>
#include <string.h>
int main()
{
    char a=' ';
    char b='A';
    char c='a';
    printf("space: %c\n", a);
    printf("space: %d\n", a);
    printf("A: %d\n", b);
    printf("a: %d\n", c);
    printf("A+a: %d", b+c);
    return 0;
}