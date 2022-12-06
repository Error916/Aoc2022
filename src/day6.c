#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

#include "src/day6_input1_preproc.h"

#define STRLEN 4096

void sold6_1(void){
	for(size_t i = 0; i < STRLEN - 3; ++i){
		uint32_t bitmask = 0;
		for(int j = 0; j < 4; ++j)
			bitmask |= 1U << (input[i + j] & 31);
		if(__builtin_popcount(bitmask) == 4){
			printf("%lu\n", i + 4);
			break;
		}
	}
}

void sold6_2(void){
	for(size_t i = 0; i < STRLEN - 13; ++i){
		uint32_t bitmask = 0;
		for(int j = 0; j < 14; ++j)
			bitmask |= 1U << (input[i + j] & 31);
		if(__builtin_popcount(bitmask) == 14){
			printf("%lu\n", i + 14);
			break;
		}
	}
}

int main(int argc, char **argv){

	sold6_1();
	sold6_2();

	return 0;
}
