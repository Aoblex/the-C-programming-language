#include <stdio.h>
#define THRESHOLD 80 /* print lines that are longer than THRESHOLD chars*/
#define MAXLINE 10000 /*maximum input line size */

int getline(char line[], int maxline);

/* print longest inputline */
int main()
{
    int len; /* current line length */
    char line[MAXLINE]; /* current input line */

    while((len = getline(line,MAXLINE)) > 0)
    {
        if (len > THRESHOLD) {
            printf("%s", line);
        }
        
    }
    return 0;
}
/* getline: read a line into s, return length */
int getline(char s[], int lim)
{
    int c, i;

    for (i = 0; (i < lim-1) && ((c=getchar()) != EOF) && (c != '\n'); ++i)
        s[i] = c;
    if(c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}