#include <stdio.h>

// print F to C table for given fahrenheit range
// uses a for loop because it makes more sense to me
void main()
{
    float lower, upper, step;

    lower = 0; // Lowest celsius value
    upper = 300; // Highest celsius value
    step = 20; // Gap between each celsius value

    printf("Celsius\tFahrenheit\n");
    for(float celsius = lower; celsius <= upper; celsius += step)
    {
        float fahr = 9 * celsius / 5 + 32;
        printf("%6.2f\t%6.2f\n", celsius, fahr);
    }
}
