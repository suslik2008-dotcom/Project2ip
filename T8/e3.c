#include <stdio.h>
int main()
{
	float n = 4, l = 337;
	printf("%9.3f %9.3f\n%-+9.3f", n, l, n/l);
}