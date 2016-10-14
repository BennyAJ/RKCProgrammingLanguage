#include <stdio.h>

void main() {
    int c;
    int whitespace = 0;
    int other = 0;
    int digit_count[10];

    // Initialize array
    for (int i = 0; i < 10; i++)
        digit_count[i] = 0;

    while ((c = getchar()) != EOF) {
        if (c >= '0' && c <= '9')
            digit_count[c-'0']++;
        else if (c == '\n' || c == '\t' || c == ' ')
            whitespace++; 
        else
            other++;
    }
    
    // Print all counts on one line
    for (int i = 0; i < 10; i++)
        printf("%d ", digit_count[i]);
    printf(", whitespace = %d", whitespace);
    printf(", other = %d\n", other);
}
