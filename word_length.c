#include <stdio.h>

#define MAXWORD 20

int main(void)
{
    int c;
    int length = 0;
    int i, j;

    int word_length[MAXWORD + 1];

    /* Initialize the array */
    for (i = 0; i <= MAXWORD; ++i)
        word_length[i] = 0;

    /* Count the length of each word */
    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\t' || c == '\n')
        {
            if (length > 0)
            {
                if (length <= MAXWORD)
                    ++word_length[length];

                length = 0;
            }
        }
        else
        {
            ++length;
        }
    }

    /* Handle the last word if input doesn't end with newline */
    if (length > 0 && length <= MAXWORD)
        ++word_length[length];

    /* Print histogram */
    for (i = 1; i <= MAXWORD; ++i)
    {
        printf("%2d: ", i);

        for (j = 0; j < word_length[i]; ++j)
            putchar('*');

        putchar('\n');
    }

    return 0;
}
