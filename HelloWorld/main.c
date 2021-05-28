#include <stdio.h>
#include <float.h>

int main(int argc, char* argv[])
{
	int i = 0;
	float f = 4.2542;
	double d = 4.2423;
	char c = 'a';
	char* s = "Hello World";

	printf("===================================\n");
	printf("i = %d\n", i);
	printf("===================================\n");
	printf("min float = %lf\n", FLT_MIN);
	printf("f = %lf\n", f);
	printf("max float = %lf\n", FLT_MAX);
	printf("===================================\n");
	printf("max double = %lf\n", DBL_MIN);
	printf("d = %lf\n", d);
	printf("max double = %lf\n", DBL_MAX);
	printf("===================================\n");
	printf("c = %c\n", c);
	printf("===================================\n");
	printf("s = %s\n", s);
	printf("===================================\n");

	return 0;
}