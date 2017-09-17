/* 
 * File:   Shell.c
 * Author: <Ary "El Jefe">
 *
 * Created:     <--/--/2017>
 * Modified:    <16/09/2017>
 */
int main()
{
	char *str = "Hola Mundo, Somos los Debian, Ary Hernandez, Marc Guzman, Carlos Sosa, Jose Araujo, Andres Alvarez", *ch;
	unsigned short *vidmem = (unsigned short*) 0xb8000;
	unsigned i;
	for (ch = str, i = 0; *ch; ch++, i++)
	vidmem[i] = (unsigned char) *ch | 0x0700;
	return 0;
}
