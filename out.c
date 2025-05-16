#include <stdio.h>
void set_val(/*@out@*/ int *x) {
*x = 10;
}

int main() {
int num;
set_val(&num);
printf("%d\n", num);
return 0;
}
