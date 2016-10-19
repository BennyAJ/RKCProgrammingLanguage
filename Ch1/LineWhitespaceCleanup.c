#include <stdio.h>

#define MAXLINE 1000

void copy(char to[], char from[]);
int get_line(char line[], int lim);
int remove_trailing_whitespace(char line[], int lim);

int main() {
    int length = 0;
    char line[MAXLINE];

    // Iterates until a line with no characters is reached
    while ((length = get_line(line, MAXLINE)) > 0) { 
        length = remove_trailing_whitespace(line, length);
        if (length > 0) {
            printf("%d Chars: %s\n", length, line); 
        }
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

// This function modifies the original line array directly by replacing trailing whitespace with null terminators
// Returns the length of the string after whitespace removal or 0 if the line was blank
int remove_trailing_whitespace(char line[], int length) {
    int index = length - 1;
    while (index >= 0) {
        if (line[index] == ' ' || line[index] == '\n' || line[index] == '\t') {
            line[index] = '\0';
            index--;
        }
        else {
            return index + 1;
        }
    }
    return 0;
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
