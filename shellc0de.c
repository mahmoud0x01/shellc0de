char code[] = 
"\xeb\x0f" // jmp 0x11 segment jump
"\x31\xc0" // xor eax,eax
"\xb0\x04" // syscall number
"\x31\xdb" 
"\xb3\x01"
"\x59\x31" 
"\xd2\xb2"
"\x16\xcd\x80" // call kernel int 80h
"\xe8\xec\xff\xff\xff\x79\x30"     /* the message to write */
"\x75\x20\x73\x70\x34\x33\x6b\x20"
"\x4f\x50\x43\x30\x44\x45\x20\x21"
"\x3f\xe2\xe6"; //infinite loop

int main(int argc, char **argv)
{
    (*(void(*)())code)();

    return 0;
}
