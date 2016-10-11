#include <stdio.h>

void main() {
    int c;
    int past_c = 0;
    
    while ((c = getchar()) != EOF) {
        if(c == ' ' && past_c == ' ') 
            ;
        else
            putchar(c);
        past_c = c;
    }
}
