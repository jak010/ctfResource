# SOURCE NAME : bof_example07
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
1. exploit code file : bof7_example07exploit.py
2. exploit usage (exploit code gen) 
: python2 bof7_eaxmple07exploit.py > exp
: cat exp - | ./bof_example07

[+]note
: 해당 예제는 ROP를 기법을 이용하여 Exploit에 성공할 수 있는가에 대한 예제
: gdb-peda(pattern_create,pattern_offset,find)

```