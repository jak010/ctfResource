# SOURCE CODE : hof_example01.c

```
[+]Compile Option
: GCC compiler  
gcc -g -Wall \
-m32 -o {} {} \
-mpreferred-stack-boundary=2 \
-z execstack \
-no-pie \
-fno-stack-protector \
-I -static \

[+]Exploit
1. exploit code file : hof_example01exploit.py

[+]note
: 해당 예제는 힙 오버플로우에 대한 예제
: 힙은 메모리에 올라갔을 떄 오프셋이 달라지므로 오프셋 거리를 찾을 수 있어야 됨

[+]keyword
: break point, x/x $esp (strcpy) ,function pointer offset(gdb)

```