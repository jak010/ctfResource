#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <err.h>

int main (int argc, char **argv) {

	volatile int modified;
	char buffer[64];
	
	if (argc == 1) {
		errx(1, "please specify an arguments\n");
	}

	modified = 0;
	strcpy(buffer, argv[1]);

	if(modified == 0x61626364) {
		printf("you have correctly got the variable to the right value\n");
	} else {
		printf("Try againg, you got 0x%08x\n" ,modified);
	}
}
