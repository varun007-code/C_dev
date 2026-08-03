#include<stdio.h>

int main()
{
    int c;
    int pervious_blank = 0;

    while((c = getchar()) != EOF)
    {
        if (c == ' ')
        {
            if(pervious_blank == 0)
            {
                putchar(c);
            }
            pervious_blank = 1;

        }
        else
        {
            putchar(c);
            pervious_blank = 0;
        }
    }
    return 0;
}
