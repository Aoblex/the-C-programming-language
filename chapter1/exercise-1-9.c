#include <stdio.h>

int main()
{
    int c;
    for (c = getchar(); c != EOF; c = getchar())
    {
        if (c == ' ')
        {
            putchar(c);
            while ((c = getchar()) == ' ')
                ;
        }
        putchar(c);
    }
    return 0;
}