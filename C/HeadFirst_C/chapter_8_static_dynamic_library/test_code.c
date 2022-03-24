#include <stdio.h>
#include "C:\Users\herojava\Documents\C\HeadFirst\chapter_8_static_dynamic_library\my_header_files\encrypt.h"
#include "C:\Users\herojava\Documents\C\HeadFirst\chapter_8_static_dynamic_library\my_header_files\checksum.h"



int main()
{
	char s[] = "speak friend and enter";
	printf("origin is '%s' \n", s);
	encrypt(s);
	printf("Encrypted is '%s' \n", s);
	printf("Checksum is '%i' \n", checksum(s));
	encrypt(s);
	printf("Decrypted is '%s' \n", s);
	printf("Checksum is '%i' \n", checksum(s));
	return 0;
}