as86 -o build/bs.o  src/bs.s
bcc -c -ansi -o build/bc.o src/bc.c
ld86 -d -o dist/booter build/bs.o build/bc.o /usr/lib/bcc/libc.a
