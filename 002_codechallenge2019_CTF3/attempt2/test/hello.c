#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	unsigned char *cell = calloc(30000, 1);
	unsigned char *cells = cell;
	if (!cell) {
		fprintf(stderr, "Error allocating memory.\n");
		return 1;
	}

		++*cell;
		++*cell;
		++*cell;
		++*cell;
		++*cell;
		++*cell;
		++*cell;
		++*cell;
	while (*cell) {
		++cell;
		++*cell;
		++*cell;
		++*cell;
		++*cell;
	while (*cell) {
		++cell;
		++*cell;
		++*cell;
		++cell;
		++*cell;
		++*cell;
		++*cell;
		++cell;
		++*cell;
		++*cell;
		++*cell;
		++cell;
		++*cell;
		--cell;
		--cell;
		--cell;
		--cell;
		--*cell;
	}
		++cell;
		++*cell;
		++cell;
		++*cell;
		++cell;
		--*cell;
		++cell;
		++cell;
		++*cell;
	while (*cell) {
		--cell;
	}
		--cell;
		--*cell;
	}
		++cell;
		++cell;
		putchar(*cell);
		++cell;
		--*cell;
		--*cell;
		--*cell;
		putchar(*cell);
		++*cell;
		++*cell;
		++*cell;
		++*cell;
		++*cell;
		++*cell;
		++*cell;
		putchar(*cell);
		putchar(*cell);
		++*cell;
		++*cell;
		++*cell;
		putchar(*cell);
		++cell;
		++cell;
		putchar(*cell);
		--cell;
		--*cell;
		putchar(*cell);
		--cell;
		putchar(*cell);
		++*cell;
		++*cell;
		++*cell;
		putchar(*cell);
		--*cell;
		--*cell;
		--*cell;
		--*cell;
		--*cell;
		--*cell;
		putchar(*cell);
		--*cell;
		--*cell;
		--*cell;
		--*cell;
		--*cell;
		--*cell;
		--*cell;
		--*cell;
		putchar(*cell);
		++cell;
		++cell;
		++*cell;
		putchar(*cell);
		++cell;
		++*cell;
		++*cell;
		putchar(*cell);

	free(cells);
	return 0;
}

