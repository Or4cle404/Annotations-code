#include <stdio.h>
void print_msg(/*@notnull@*/ char *msg) {
	printf("%s\n", msg);
}

int main() {
	print_msg("hello");
	return 0;
}
