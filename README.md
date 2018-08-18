# shellc0de
An intel x86_32 shellcode to write "y0u sp43k OPC0DE !?" message in an infinite loop 
this shellcode works by calling linux sys_write syscall and get the message to write from the .text segment not from a data segment and then recall the same function (infinite loop)
- so the actual message is not in the binary it is calculated during runtime and based to the ecx register 

## compile with gcc
`gcc -o shellc0de.elf shellc0de.c -m32 -fno-stack-protector -z execstack`
 and then run `./shellc0de.elf `
