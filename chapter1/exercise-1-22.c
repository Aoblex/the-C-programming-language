#include <stdio.h>
#define MAXLINE 10000
#define N 5 

int getline(char line[], int maxline);
void foldline(char s[]);
int nonblank(char a);

int main()
{
    int ch;
    char line[MAXLINE];
    while(getline(line, MAXLINE) > 0)
    {
        foldline(line);
    }
    return 0;
}

int nonblank(char a)
{
    return (a != ' ') && (a != '\t') && (a != '\n');
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

void foldline(char s[])
{
    int last_nb = -1, line_head = 0, i, j;
    for (i = 0; s[i] != '\0'; ++i)
    {
        if (nonblank(s[i]))
        {
            if ((i - line_head + 1) > N)
            {
                for (j = line_head; j <= last_nb; ++j)
                {
                    putchar(s[j]);
                }
                putchar('\n');
                line_head = i;
            }
            last_nb = i;
        }
    }

    for (i = line_head; ((i - line_head + 1) <= N) && (s[i] != '\0'); ++i)
    {
        putchar(s[i]);
    }
}