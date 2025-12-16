#include <stdio.h>
#include <stdint.h>

int main (void) {
	uint16_t val = 0x400;
	uint8_t* ptr = (uint8_t*)&val;
	printf("Probing low addr of 0x400 ... \n");
	if (ptr[0] == 0x40){
		printf("It is MSB: Big Endian \n");
	} else if (ptr[0] == 0x00){
		printf("It is LSB: Little Endian \n");
	} else {
		printf("unknown endian \n");
	}
	return 0;
}
