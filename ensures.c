#include <stdio.h>

/*@ensures \result >= 0 @*/
int abs_val(int x)
{
return (x < 0) ? -x : x;
}
int main()
{
printf("%d\n", abs_val(-5));
return 0;
}
