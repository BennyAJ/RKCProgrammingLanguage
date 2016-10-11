#include <stdio.h>

void main()
{
    long count = 0;
    int c;

    while((c = getchar()) != EOF)
    {
        ++count;
        printf("%ld\n", count);
    }
}
