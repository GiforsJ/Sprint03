#include <stdbool.h> 
#include <stdio.h>

int mx_toupper(int c);
int mx_tolower(int c);
bool mx_isupper(int c);
bool mx_islower(int c);

void mx_reverse_case(char *c) {
    if (c == NULL) {
        return;
    }
    for (int i = 0; c[i] != '\0'; i++) {
        if (mx_islower(c[i])) {
            c[i] = mx_toupper(c[i]);
        } else if (mx_isupper(c[i])) {
            c[i] = mx_tolower(c[i]);
        }
    }
}
