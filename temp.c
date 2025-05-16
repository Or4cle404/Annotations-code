#include <stdio.h>
/*@temp@*/ char* bad_func() {
char buf[] = "Hi";
return buf;
}
int main()
{
char *p = bad_func();
printf("%s\n", p);
return 0;
}
