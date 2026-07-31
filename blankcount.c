#include<stdio.h>

int main()
{
    int c;
    int blank = 0;
    int tabs = 0;
    int nl = 0;
    while((c = getchar()) != EOF)
    {
        if(c == ' ')
            ++blank;
        if(c == '\t')
            ++tabs;
        if(c == '\n')
            ++nl;
    }
    printf("Blanks :%d",blank);
    printf("Tabs :%d",tabs);
    printf("newline :%d",nl);

    return 0;
}
