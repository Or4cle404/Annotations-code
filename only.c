#include <stdlib.h>
#include <stdio.h>

void free_string(/*@only@*/ char *s) {
    printf("Freeing: %s\n", s);
    free(s);  // Valid because ownership was transferred
}

int main() {
    char *s = malloc(10);
    if (s != NULL) {
        sprintf(s, "Hello");
        free_string(s);  // OK
        // s shouldn't be used here again
    }
    return 0;
}
