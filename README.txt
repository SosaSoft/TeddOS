TeddOS Compile

COMPILE KERNEL FILE:
~ as -o kernel.o -o kernel.asm

COMPILE C FILE:
~ gcc -o main.o -c main.c -nostdlib -fPIC -ffreestanding

CREATE START.ELF:
~ gcc -o START.ELF kernel.o main.o -Tlink.ld -nostdlib -fPIC -ffreestanding -Igcc grub-mkrescue -o Tedd.iso

CREATE .iso [grub.cfg]:
~ grub-mkrescue -o Tedd.iso 
