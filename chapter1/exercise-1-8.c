#include <stdio.h>

int main()
{
    int blank_cnt, tab_cnt, newline_cnt;
    int c;
    blank_cnt = 0;
    tab_cnt = 0;
    newline_cnt = 0;

    for (c = getchar(); c != EOF; c = getchar())
    {
        if (c == ' ')
            ++blank_cnt;
        if (c == '\t')
            ++tab_cnt;
        if (c == '\n')
            ++newline_cnt;
    }

    printf("Blanks: %d\nTabs: %d\nNewlines: %d\n", blank_cnt, tab_cnt, newline_cnt);
    return 0;
}