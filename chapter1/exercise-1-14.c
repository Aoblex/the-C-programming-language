// This program cannot produce the right result when ctrl+c is entered.

#include <stdio.h>
#define MAXLEN 256

int main()
{
    int char_cnt[MAXLEN], ch;

    /* Initialization */
    for (int i = 0; i < MAXLEN; ++i)
    {
        char_cnt[i] = 0;
    }

    for (ch = getchar(); ch != EOF; ch = getchar())
    {
        char_cnt[ch] += 1;
    }
   

    for (int i = 0; i < MAXLEN; ++i)
    {
        if (char_cnt[i] > 0)
        {
            printf("char %3d, frequency = %2d:", i, char_cnt[i]);
            for (int j = 0; j < char_cnt[i]; ++j)
            {
                printf(" *");
            }
            printf("\n");
        }
    }

    return 0;
}