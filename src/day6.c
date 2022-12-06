#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "src/day6_input1_preproc.h"

void sold6_1(void){
	size_t len = strlen(input);
	for(size_t i = 0; i < len - 3; ++i){
		size_t bitmask = 0;
		bitmask |= 1U << (input[i + 0] - 'a');
		bitmask |= 1U << (input[i + 1] - 'a');
		bitmask |= 1U << (input[i + 2] - 'a');
		bitmask |= 1U << (input[i + 3] - 'a');
		if(__builtin_popcountl(bitmask) == 4){
			printf("%lu\n", i + 4);
			break;
		}
	}
}

void sold6_2(void){
	size_t len = strlen(input);
	for(size_t i = 0; i < len - 13; ++i){
		size_t bitmask = 0;
		bitmask |= 1U << (input[i + 0] - 'a');
		bitmask |= 1U << (input[i + 1] - 'a');
		bitmask |= 1U << (input[i + 2] - 'a');
		bitmask |= 1U << (input[i + 3] - 'a');
		bitmask |= 1U << (input[i + 4] - 'a');
		bitmask |= 1U << (input[i + 5] - 'a');
		bitmask |= 1U << (input[i + 6] - 'a');
		bitmask |= 1U << (input[i + 7] - 'a');
		bitmask |= 1U << (input[i + 8] - 'a');
		bitmask |= 1U << (input[i + 9] - 'a');
		bitmask |= 1U << (input[i + 10] - 'a');
		bitmask |= 1U << (input[i + 11] - 'a');
		bitmask |= 1U << (input[i + 12] - 'a');
		bitmask |= 1U << (input[i + 13] - 'a');
		if(__builtin_popcountl(bitmask) == 14){
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
