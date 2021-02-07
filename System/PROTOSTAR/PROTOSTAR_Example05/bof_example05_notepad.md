# SOURCE CODE : bof_example05.c

```
[+]Compile Option
: GCC compiler  
gcc -m32 -o {} {} \
-mpreferred-stack-boundary=2 \
-z execstack \
-no-pie \
-fno-stack-protector \
-static \

[+]Exploit
1. exploit code file : bof5_example05exploit.py
2. exploit usage (exploit code gen) 
: python2 bof5_eaxmple05exploit.py > exp
: cat exp - | ./bof_example05

[+]note
: 해당 예제는 쉘 코드를 올리는 공간 (NOP)를 확보할 수 있는 가에 대한 예제
: gdb-peda(pattern_create,pattern_offset)

```