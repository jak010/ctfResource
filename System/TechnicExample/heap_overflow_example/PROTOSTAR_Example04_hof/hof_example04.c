#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <unistd.h>
#include <sys/types.h>

void winner() {
	printf("that wasn't too bad now it? @ %d\n" ,time(NULL))

 }

int main(int argc, char **argv) {

	char *a, *b, *c;

	a = malloc(32);
	b = malloc(32);
	c = malloc(32);

	stcpy(a,argv[1]);
	stcpy(b,argv[2]);
	stcpy(c,argv[3]);

	free(c);
	free(b);
	free(a);

	printf("dynamite failed?\n");
}