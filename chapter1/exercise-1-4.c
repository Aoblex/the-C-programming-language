#include <stdio.h>

int main()
{
    float farh, celsius;
    int lower, upper, step;
    
    lower = -50;
    upper = 100;
    step = 10;

    printf("%8s %5s\n", "Celsius", "Fahr");

    celsius = lower;
    while (celsius <= upper)
    {
        farh = (9.0 / 5.0) * celsius + 32.0;
        printf("%8.0f %5.1f\n", celsius, farh);
        celsius = celsius + step;
    }

    return 0;
}