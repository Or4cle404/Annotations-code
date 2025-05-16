#include <stdio.h>
static void show_val(/*@in@*/int *x) {
printf("%d\n", *x);
}
int main() 
{
int a = 5;
show_val(&a);
return 0;
}
