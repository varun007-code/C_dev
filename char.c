// C program to show unsigned char

#include <stdio.h>

int main()
{
    int c;
    c = getchar();
    while(c != EOF)
    {
        putchar(c);
        c = getchar();
    }
    return 0;
}
