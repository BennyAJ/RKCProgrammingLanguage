#include <stdio.h>

#define IN  1
#define OUT 0

void main() {
    int c;
    // Only counts alphabet characters
    int freqs[26];
    
    for (int i = 0; i < 26; i++)
        freqs[i] = 0;

    // Keeps track of the height of the largest histogram bar
    int max_freq = 0;

    // Iterate until end of file 
    while ((c = getchar()) != EOF) {
        // Iterates through a-z and checks if equal to current char
        for (int i = 97; i < 123; i++) {
            if (c == i || c == (i - 32)) {
                freqs[i - 97]++;
                if (freqs[i - 97] > max_freq)
                    max_freq = freqs[i - 97];
            }
        }
    }
    // Draw histogram
    for (int row = max_freq; row > 0; row--) {
        for (int col = 0; col < 26; col++) {
            if (freqs[col] >= row)
                putchar('X');
            else
                putchar(' ');
            putchar(' ');
        }
        putchar('\n');
    } 
    for (int col = 0; col < 26; col++) {
        putchar(col + 97);
        putchar(' ');
    }
    putchar('\n');
}
