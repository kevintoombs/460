as86 -o build/bs.o  src/bs.s
bcc -c -ansi -o build/bc.o src/bc.c
bcc -c -ansi -o build/bio.o src/bio.c
ld86 -d -o dist/booter build/bs.o build/bc.o build/bio.o /usr/lib/bcc/libc.a
