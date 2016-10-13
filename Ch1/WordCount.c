#include <stdio.h>

#define IN  1
#define OUT 0

void main() {
    int c, lines, characters, words, state;
    lines = characters = words = 0;
    state = OUT;

    while ((c = getchar()) != EOF) {
        characters++;
        if (c == '\n')
            lines++;
        if (c == ' ' || c == '\n' || c == '\t') {
            state = OUT;
        }
        else if (state == OUT) {
            state = IN;
            words++;
        }
    }
    printf("%d %d %d\n", lines, words, characters);
}
