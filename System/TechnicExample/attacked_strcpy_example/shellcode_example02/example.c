#include <stdio.h>

int main(int argc, char* argv[]) {

	char buf[16];
	strcpy(buf,argv[1]);
	printf("%s : %p\n" ,buf ,buf);
	return 0;
}
