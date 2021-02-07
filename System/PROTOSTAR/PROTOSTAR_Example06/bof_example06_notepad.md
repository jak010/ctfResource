# SOURCE CODE : bof_example06.c

```
[+]Compile Option
: GCC
-g -Wall
-m32 -o bof_example06 bof_example06.c
-fno-stack-protector 
-mpreferred-stack-boundary=2 
-no-pie 
-z execstack 
-I  -static 

[+]Exploit
1. exploit code file : bof5_example06exploit.py
2. exploit usage (exploit code gen) 
: python2 bof_eaxmple06exploit.py > exp
: cat exp - | ./bof_example06

[+]note
: 해당 예제는 ret2libc에 대한 것 코드 내의 system 함수의 주소,
: /bin/sh 문자열 을 찾아서 이용할 수 있는가에 대한 것임
: gdb-peda(pattern_create,pattern_offset)

```