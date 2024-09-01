#include <stdio.h>
#define MAXLINE 10000

/*
getline: read a line into s, return length,
copied from exercise-1-16.c
*/
char* my_getline(char s[], int lim)
{
    int c, i;

    for (i = 0; ((c=getchar()) != EOF); ++i)
    {
        if (i >= lim - 1)
            break;
        if (c == '\n')
            break;
        s[i] = c;
    }
    if(c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return s;
}

int main()
{
    char s[MAXLINE];
    printf("%s", my_getline(s, MAXLINE));
    return 0;
}