#include <stdio.h>

int fahrenheit_to_celsius(int fahrenheit) {
    return (5 * (fahrenheit - 32) / 9);
}

int main() {
    int fahr = 72;
    int celsius = fahrenheit_to_celsius(fahr);
    printf("Fahr\tCelsius\n");
    printf("%d\t%d\n", fahr, celsius);
    return 0;
}
