#include <stdio.h>
#define MAXLINE 10000
#define TABSTOP 4

int getline(char line[], int maxline);
void detab(char s[]);

int main()
{
    int ch;
    char line[MAXLINE];
    while(getline(line, MAXLINE) > 0)
    {
        detab(line);
    }
    return 0;
}

int getline(char line[], int maxline)
{
    int i, ch;
    for (i = 0; (i < maxline - 1) && ((ch = getchar()) != EOF) && (ch != '\n'); ++i)
    {
        line[i] = ch;
    }

    if (ch == '\n')
    {
        line[i] = ch;
        ++i;
    }

    line[i] = '\0';
    return i;
}

void detab(char s[])
{
    int i = 0, ch;

    while (s[i] != '\0')
    {
        if (s[i] != '\t')
        {
            putchar(s[i]);
        }
        else
        {
            for (int j = 0; j < TABSTOP; ++j)
            {
                putchar(' ');
            }
        }
        ++i;
    }

    return;
}