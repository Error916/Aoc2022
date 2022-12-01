#include <stdio.h>
#include <stdlib.h>

#include "src/day1_input1_preproc.h"

void sold1_1(void){
	size_t elfs[255] = {0};
	size_t elfnum = 0;
	for(int i = 0; i < input_count; ++i){
		if(input[i] == 0) ++elfnum;
		elfs[elfnum] += input[i];
	}

	elfnum = 0;
	for(int i = 0; i < 255; ++i)
		if(elfs[elfnum] < elfs[i]) elfnum = i;

	printf("%lu\n", elfs[elfnum]);
}

void sold1_2(void){
	size_t elfs[255] = {0};
	size_t elfnum = 0;
	for(int i = 0; i < input_count; ++i){
		if(input[i] == 0) ++elfnum;
		elfs[elfnum] += input[i];
	}

	size_t sol = 0;
	for(int j = 0; j < 3; ++j){
		elfnum = 0;
		for(int i = 0; i < 255; ++i)
			if(elfs[elfnum] < elfs[i]) elfnum = i;

		sol += elfs[elfnum];
		elfs[elfnum] = 0;
	}

	printf("%lu\n", sol);
}

int main(int argc, char **argv){

	sold1_1();
	sold1_2();

	return 0;
}
