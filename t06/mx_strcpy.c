#include <stdio.h>

char *mx_strcpy(char *dst, const char *src) {
    if (!dst || !src) {
        return NULL; 
    }

    char *start = dst;

    // Копирование строки
    while (*src) {
        *dst++ = *src++;
    }
    *dst = '\0'; 

    return start; 
}
