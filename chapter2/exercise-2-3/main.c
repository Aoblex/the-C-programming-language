/*
Write the function htoi(s), which converts a string of
hexadecimal digits digits(including an optional 0x or 
0X) into its equivalent integer value. The allowable  
digits are 0 through 9, a through f, and A through F.
*/

#include "htoi.h"
#include <stdio.h>
#define MAXLEN 50


int main()
{
    char num[MAXLEN], ch;
    int i;

    for (i = 0; (i < MAXLEN - 1) && ((ch = getchar()) != '\n') && (ch != EOF); ++i)
    {
        num[i] = ch;
    }

    if(!valid_hexdigit(num)){
        printf("Invalid hexstring: %s\n", num);

    }
    else{
        printf("%s(hex) -> %d(decimal)\n", num, htoi(num));
    }
    return 0;
}

