#include <stdio.h>

int main()
{
    int c;
    for (c = getchar(); c != EOF; c = getchar())
    {
        if (c == ' ' || c == '\t' || c == '\n')
        {
            putchar('\n');
            while ((c = getchar()) == ' ' || c == '\t' || c == '\n')
                ;
        }

        if (c != EOF)
        {
            putchar(c);
        }
    }

    return 0;
}