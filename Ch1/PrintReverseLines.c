#include <stdio.h>

#define MAXLINE 1000

void copy(char to[], char from[]);
int get_line(char line[], int lim);
void reverse_line(char line[], int length);

int main() {
    int length = 0;
    char line[MAXLINE];

    // Iterates until a line with no characters is reached
    while ((length = get_line(line, MAXLINE)) > 0) {
        reverse_line(line, length); 
        printf("%s", line); 
    }
    return 0;
}

int get_line(char line[], int lim) {
    int c, length;
    
    length = 0;
    // Iterate until EOF, newline, or line length limit is reached
    while(length < (lim - 1) && (c = getchar()) != EOF && c != '\n') {
        line[length] = c;
        length++;  
    }
    // Ensures that newline gets copied over to final output string
    if (c == '\n') {
        line[length] = c;
        length++;
    }
    // Adds null terminator and returns completed string
    line[length] = '\0';
    return length;
}

// This function assumes that the size of to is greater than or equal to the size of from
void copy(char to[], char from[]) {
    int i;

    i = 0;
    //Continue copying array until hitting a null terminator
    while (from[i] != '\0') {
        to[i] = from[i];
        i++;
    }
}

void reverse_line(char line[], int length) {
    // Shift one since array starts at 0
    int index = length - 1;
    char reversed[length];
    for (int i = 0; i < index; i++) {
        // Shifts one more to avoid copying the null terminator to the beginning
        reversed[i] = line[index - i - 1];
    }
    // Add new null terminator to the end of the reversed string
    reversed[index] = '\0';
    copy(line, reversed);
}
