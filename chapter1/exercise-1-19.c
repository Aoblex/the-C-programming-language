#include <stdio.h>
#define MAXLINE 10000

int getline(char line[], int maxline);
void reverse(char s[]);

int main()
{
    char line[MAXLINE];
    while (getline(line, MAXLINE) > 0)
    {
        reverse(line);
        printf("%s", line);
    }
    return 0;
}

int getline(char line[], int maxline)
{
    int ch, i;
    
    for (i = 0; (i < maxline - 1) && ((ch = getchar()) != EOF) && (ch != '\n'); ++i)
    {
        line[i] = ch;
    }

    if (ch == '\n')
    {
        line[i] = '\n';
        ++i;
    }
    line[i] = '\0';
    return i;
}

void reverse(char s[])
{
    int i = 0, len = 0, tmp = 0;
    while (s[len] != '\0')
    {
        ++len;
    }
    if (len == 0)
    {
        return;
    }

    while (i <= ((len - 1) >> 1))
    {
        tmp = s[i];
        s[i] = s[len - i - 1];
        s[len - i - 1] = tmp;
        ++i;
    }
    return;
}