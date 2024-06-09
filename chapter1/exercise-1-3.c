#include <stdio.h>

int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    printf("%5s %8s\n", "Fahr", "Celsius");

    fahr = lower;
    while (fahr <= upper)
    {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%5.0f %8.1f\n", fahr, celsius);
        fahr = fahr + step;
    }

    return 0;
}