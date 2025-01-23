#include <stdio.h>

int mx_strlen(const char *s);
void mx_swap_char(char *s1, char *s2);

void mx_str_reverse(char *s) {
    if (s == NULL) {
        return;
    }

    int max = mx_strlen(s) - 1;
    for (int i = 0; i < max; i++, max--) {
        mx_swap_char(&s[i], &s[max]);
    }
}
