/*
Write a program to determine the ranges of char, short, int,
and long variables, both signed and unsigned, by printing a-
ppropriate values from standard headers and by direct compu-
tation. Harder if you compute them: determine the ranges of
the various floating-point types.
*/

#include <limits.h>
#include <stdio.h>

int main()
{
    printf("----------------------\n");
    printf("signed char min: %d\n", SCHAR_MIN);
    printf("signed char max: %d\n", SCHAR_MAX);
    printf("unsigned char min: %u\n", 0);
    printf("unsigned char max: %u\n", UCHAR_MAX);
    printf("----------------------\n");
    printf("signed short int min: %d\n", SHRT_MIN);
    printf("signed short int max: %d\n", SHRT_MAX);
    printf("unsigned short int min: %u\n", 0);
    printf("unsigned short int max: %u\n", USHRT_MAX);
    printf("----------------------\n");
    printf("signed int min: %d\n", INT_MIN);
    printf("signed int max: %d\n", INT_MAX);
    printf("unsigned int min: %u\n", 0);
    printf("unsigned int max: %u\n", UINT_MAX);
    printf("----------------------\n");
    printf("signed long int min: %d\n", LONG_MIN);
    printf("signed long int max: %d\n", LONG_MAX);
    printf("unsigned long int min: %u\n", 0);
    printf("unsigned long int max: %u\n", ULONG_MAX);
    printf("----------------------\n");

    return 0;
}