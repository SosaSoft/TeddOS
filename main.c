/* 
 * File:   Shell.c
 * Author: <Carlos Sosa>
 */
int main()
{
	char *str = "Hola mundo, mi nombre es Teed, soy tu sistema operativo", *ch;
	unsigned short *vidmem = (unsigned short*) 0xb8000;
	unsigned i;
	for (ch = str, i = 0; *ch; ch++, i++)
	vidmem[i] = (unsigned char) *ch | 0x0700;
	return 0;
}
