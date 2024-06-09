#include <stdio.h>
#define MAXLINE 10000

int gettrailed(char line[], int maxline);

int main()
{
    char line[MAXLINE];
    while (gettrailed(line, MAXLINE) > 0)
    {
        printf("%s", line);
    }
    return 0;
}

int gettrailed(char line[], int maxline)
{
    int ch, i;
    for (i = 0; (i < maxline - 1) && ((ch = getchar()) != EOF) && (ch != '\n'); ++i)
    {
        line[i] = ch;
        
    }
    if (ch == '\n')
    {
        line[i] = ch;
        ++i;
    }
    while ((i >= 1) && ((line[i - 1] == ' ') || (line[i - 1] == '\t')))
        --i;
    line[i] = '\0';
    return i;
}