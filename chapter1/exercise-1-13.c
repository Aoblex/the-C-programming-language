#include <stdio.h>
#define MAXLEN 16

int main()
{
    int len_cnt[(MAXLEN + 2)];
    int len_word, ch;

    /* Initialization */
    len_word = 0;
    for (int i = 0; i < (MAXLEN + 2); ++i)
    {
        len_cnt[i] = 0;
    }

    for (ch = getchar(); ch != EOF; ch = getchar())
    {
        if (ch == ' ' || ch == '\n' || ch == '\t') // word separation
        {
            if (len_word > MAXLEN)
            {
                len_cnt[MAXLEN] += 1;
            }
            else
            {
                len_cnt[len_word] += 1;
            }
            len_word = 0;

            while((ch = getchar()) != EOF)
            {
                if ((ch != ' ') || (ch != '\n') || (ch != '\t'))
                {
                    break;
                }
            }
        }
        else // a new char in a word
        {
            len_word += 1;
        }
    }

    printf("Histogram of the lengths of words\n");
    for (int i = 1; i <= MAXLEN; ++i)
    {
        printf("length=%2d, frequency=%2d:", i, len_cnt[i]);
        for (int j = 0; j < len_cnt[i]; ++j)
        {
            printf(" *");
        }
        printf("\n");
    }
    printf("length>%2d, frequency=%2d:", MAXLEN, len_cnt[MAXLEN+1]);
    for (int j = 0; j < len_cnt[MAXLEN+1]; ++j)
    {
        printf(" *");
    }
    printf("\n");

    return 0;
}