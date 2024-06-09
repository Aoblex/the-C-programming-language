#include <stdio.h>
#define MAXLINE 10000
#define TABSTOP 7

int getline(char line[], int maxline);
void entab(char s[]);

int main()
{
    int ch;
    char line[MAXLINE];
    while(getline(line, MAXLINE) > 0)
    {
        entab(line);
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

void entab(char s[])
{
    int i = 0, ch, space_cnt;

    while (s[i] != '\0')
    {
        space_cnt = 0;
        while (s[i] == ' ')
        {
            ++space_cnt;
            ++i;
        }

        while (space_cnt > 0)
        {
            if (space_cnt >= TABSTOP)
            {
                putchar('\t');
                space_cnt -= TABSTOP;
            }
            else
            {
                putchar(' ');
                space_cnt -= 1;
            }
        }
        putchar(s[i]); 
        ++i;
    }
    return;
}