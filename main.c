#include <stdlib.h>
#include <stdio.h>

#include "max.h"

int main(int argc, char *argv[])
{
	int result;
	int a, b;

	if (argc != 3) {
		fprintf(stderr, "kullanim: max <sayi1> <sayi2>\n");
		exit(1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);

	result = maximum_of(a, b);
	printf("%d ve %d'nin büyüğü: %d\n", a, b, result);

	return 0;
}
