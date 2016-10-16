#include <stdio.h>

#define IN  1
#define OUT 0
#define MAX_WORD_LENGTH 40

void main() {
    int c, length, state;
    length = 0;
    // Assuming that no word input greater than 39 characters will be taken 
    // Any more will cause a crash
    int lengths[MAX_WORD_LENGTH];
    
    for (int i = 0; i < MAX_WORD_LENGTH; i++)
        lengths[i] = 0;

    // Keeps track of the height of the largest histogram bar
    int max_word_count = 0;

    state = OUT;

    // Iterate until end of file 
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            // Saves length when word ends
            if (state == IN) {
                lengths[length]++;
                printf("Length: %d\n", length);
                printf("Length Count: %d\n", lengths[length]);
                if (lengths[length] > max_word_count)
                    max_word_count = lengths[length];
                length = 0;
            }
            state = OUT;
        }
        else if (state == OUT) {
            // Switch state back to IN when entering a new word 
            state = IN;
        }
        if (state == IN) {
            // Iterate length while inside of a word
            length++;
        }
    }
    // Draw histogram
    for (int row = max_word_count; row > 0; row--) {
        for (int col = 1; col < MAX_WORD_LENGTH; col++) {
            if (lengths[col] >= row)
                putchar('X');
            else
                putchar(' ');
            putchar(' ');
        }
        putchar('\n');
    } 
}
