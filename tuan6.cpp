void rFilter(char *s) {
    while(*s != '\0'){
        if((*s >= 'a' && *s <= 'z') || (*s >= 'A' && *s <= 'Z')) s++;
        else {
            *s = '_';
            s++;
        }
    }
}
