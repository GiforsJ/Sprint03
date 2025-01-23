#include <stddef.h>

void mx_deref_pointer(char ******str) {
    if (str == NULL) {
        return;
    }
    ******str = "Follow the white rabbit!";
}
