#include "htoi.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

char lower(char ch){
    if (ch >= 'A' && ch <= 'Z')
        return ch - 'A' + 'a';
    return ch;
}

int is_alphabet(char ch){
    if (ch >= 'a' && ch <= 'z')
        return 1;
    if (ch >= 'A' && ch <= 'Z')
        return 1;
    return 0;
}

int is_digit(char ch){
    if (ch >= '0' && ch <= '9')
        return 1;
    return 0;
}

int is_hexchar(char ch){
    if (ch >= '0' && ch <= '9')
        return 1;
    if (ch >= 'a' && ch <= 'f')
        return 1;
    if (ch >= 'A' && ch <= 'F')
        return 1;
    return 0;
}

int valid_hexdigit(char s[]){
    int len = strlen(s), i;
    if(len <= 2){
        for(i = 0; i < len; ++i){
            if(!is_hexchar(s[i]))
                return 0;
        }
    }
    else{
        if(s[0] == '0' && lower(s[1]) == 'x'){
            for(i = 2; i < len; ++i){
                if(!is_hexchar(s[i]))
                    return 0;
            }
        }
        else{
            for(i = 0; i < len; ++i){
                if(!is_hexchar(s[i]))
                    return 0;
            }
        }
    }
    return 1;
}

int char2hex(char ch){
    if (is_digit(ch))
        return ch - '0';
    return 10 + lower(ch) - 'a';
}

int htoi(char s[]){
    int len = strlen(s), num = 0, i;
    if(len <= 2){
        for(i = 0; i < len; ++i){
            num = num * 16 + char2hex(s[i]);
        }
    }
    else{
        if(s[0] == '0' && lower(s[1]) == 'x'){
            for(i = 2; i < len; ++i){
                num = num * 16 + char2hex(s[i]);
            }
        }
        else{
            for(i = 0; i < len; ++i){
                num = num * 16 + char2hex(s[i]);
            }           
        }
    }
    return num;
}