
#include <stdio.h>

#define MAXCHAR 256

int main(void)
{
    int c;
    int frequency[MAXCHAR];

    /* initialize array */
    for(int i = 0; i < MAXCHAR; i++)
        frequency[i] = 0;
    /* read characters */
    while ((c = getchar()) != EOF)
    {
        ++frequency[c];
    }
    /* print frequencies */
    for(int i = 0; i < MAXCHAR; i++)
    {
        if(frequency[i] > 0)
        {
            printf("'%c' :  ",i);
            for(int j = 1 ; j <=frequency[i]; ++j)
            {
                putchar('*');
            }
            putchar('\n');
        }

    }

    return 0;
}
