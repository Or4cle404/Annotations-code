
#include <stdio.h>

/*@returned@*/ char* echo(/*@notnull@*/ char *msg) {
    return msg;  // Same pointer returned
}

int main() {
    char *m = "Hello";
    char *r = echo(m);
    printf("%s\n", r);
    return 0;
}
