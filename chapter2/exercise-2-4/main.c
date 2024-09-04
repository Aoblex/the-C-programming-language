/*
Write an alternative version of squeeze(s1, s2)
that deletes each character in s1 that matches 
any character in the string s2.
*/
#include "squeeze.h"
#define MAXLEN 1000

int main(){
    char a[MAXLEN], b[MAXLEN];
    int lena, lenb;
    lena = get_line(a, MAXLEN);
    lenb = get_line(b, MAXLEN);
    printf("string a: %s\nstring b: %s\n\n", a, b);
    /* Notice that if '\n' is in b,
    then the '\n' in a is also rem-
    oved. */
    squeeze(a, b);
    printf("Squeezed:\n");
    printf("string a: %s\nstring b: %s\n", a, b);
    return 0;
}