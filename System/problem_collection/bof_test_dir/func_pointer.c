#include <stdio.h>

int foo() {
	printf(" Success\n");
	return 1;
}

int boo() {
	printf(" fail .. \n");
	return 2;
}

int main() {
	int value;
	int (*function_ptr)();

	function_ptr = boo;
	
	printf("%x %x\n" ,foo,boo);

	char buffer[128];

	gets(buffer);
	printf("(foo) ptr:%x\n" ,function_ptr);

	value = function_ptr();
	
	return 0;
}

