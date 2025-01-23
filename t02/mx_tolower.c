int mx_tolower(int c) {
    if (c >= 'a' && c <= 'z') {
        return c; 
    } else if (c >= 'A' && c <= 'Z') {
        return c + 32; 
    }
    return c; 
}
