cp kc/vdisk dist/vdisk
dd if=dist/booter of=dist/vdisk bs=16 count=27 conv=notrunc
dd if=dist/booter of=dist/vdisk bs=512 seek=1  conv=notrunc
