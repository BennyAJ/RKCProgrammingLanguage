#include <stdio.h>

void main()
{
    long newlines = 0;
    long blanks = 0;
    long tabs = 0;

    int c;

    while ((c = getchar()) != EOF)
    {
        if (c == '\n')
            ++newlines;
        else if (c == ' ')
            ++blanks;
        else if (c == '\t')
            ++tabs;
    }
    printf("Lines: %ld\n", newlines);
    printf("Blanks: %ld\n", blanks);
    printf("Tabs: %ld\n", tabs);
}
