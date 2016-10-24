#include <stdio.h>

#define TABSTOP 4

int main() {
    int c, count;
    // Initialize variable to count amount of whitespace in a row
    count = 0;
    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            // Increase whitespace count for each space in a row
            count++;
            // Add a tab every time TABSTOP spaces are counted
            if (count == TABSTOP) {
                putchar('\t');
                count = 0;
            }
        } 
        else {
            // Prints excess whitespace if present
            for (int i = count; i > 0; i--) {
                putchar(' ');
            }
            count = 0;
            putchar(c);
        }
    }
    return 0;
}
