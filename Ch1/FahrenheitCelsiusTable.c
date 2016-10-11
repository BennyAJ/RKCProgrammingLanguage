#include <stdio.h>

// print F to C table for given fahrenheit range
// uses a for loop because it makes more sense to me
void main()
{
    float lower, upper, step;

    lower = 0; // Lowest fahrenheit value
    upper = 300; // Highest fahrenheit value
    step = 20; // Gap between each fahrenheit value

    printf("Heading\n");
    for(float fahr = lower; fahr <= upper; fahr += step)
    {
        float celsius = 5 * (fahr - 32) / 9;
        printf("%6.2f\t%6.2f\n", fahr, celsius);
    }
}
