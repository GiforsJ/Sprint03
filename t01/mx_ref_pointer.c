#include <stddef.h>

void mx_ref_pointer(int i, int ******ptr) {
    if (ptr == NULL) {
        return;
    }
    ******ptr = i;
}
