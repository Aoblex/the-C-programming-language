#include "squeeze.h"

void squeeze(char s1[], char s2[]){
    int i1, i2, keepchar, j = 0;

    for (i1 = 0; s1[i1] != '\0'; ++i1){
        keepchar = 1;
        for (i2 = 0; keepchar && s2[i2] != '\0'; ++i2){
            if (s1[i1] == s2[i2]){
                keepchar = 0;
            }
        }
        if (keepchar){
            s1[j++] = s1[i1];
        }
    }
    s1[j] = '\0';
}

int get_line(char s[], int lim)
{
    int c, i;

    for (i = 0; (i < lim-1) && ((c=getchar()) != EOF) && (c != '\n'); ++i)
        s[i] = c;
    if(c == '\n') {
        s[i++] = c;
    }
    s[i] = '\0';
    return i;
}