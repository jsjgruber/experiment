#include <stdio.h>
int main(int argc, char *argv[]) {
	int x, y;
	y = 0;
	x = argc;
	if (x && ! y) {
		printf("x and y don't match %i\n", y);
		y |= 1;
		printf("new y is %i\n", y);
	}
	printf("argc is %i\n", x);
	printf("Tut-tut, it looks like rain.\n");
	if (x && ! y) {
		printf("x and y don't match %i\n", y);
		y |= 1;
		printf("new y is %i\n", y);
	}
}
