// prints 100 in decimal, octal, and hexadecimal

#include <stdio.h>

int main(void) {
	int x = 100;

	printf("Decimal = %d; Octal = %o; Hexadecimal = %x\n", x, x, x);
	printf("Decimal = %d; Octal = %#o; Hexadecimal = %#x\n", x, x, x);

	return 0;
}