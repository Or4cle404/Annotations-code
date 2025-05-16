#include <stdio.h>
/*@requires x != 0 @*/
int divide(int x)
{
	return 10/x;
}

int main()
{
	printf("%d/n", divide(2));
	return 0;
}
