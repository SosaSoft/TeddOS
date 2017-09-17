TeddOS Compile

COMPILE KERNEL FILE:
~ as -o kernel.o -o kernel.asm

COMPILE C FILE:
~ gcc -o Main_LosDebian.o -c Main_LosDebian.c -nostdlib -fPIC -ffreestanding

CREATE START.ELF:
~ gcc -o START.ELF kernel.o Main_LosDebian.o -Tlink.ld -nostdlib -fPIC -ffreestanding -Igcc grub-mkrescue -o LosDebian.iso

CREATE .iso [grub.cfg]:
~ grub-mkrescue -o LosDebian.iso 
