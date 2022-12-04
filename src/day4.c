#include <stdio.h>
#include <stdlib.h>

#include "src/day4_input1_preproc.h"

void sold4_1(void){
	size_t sol = 0;

	for(int i  = 0; i < input_count; i+=4){
		if((input[i] >= input[i + 2] && input[i + 1] <= input[i + 3]) || (input[i + 2] >= input[i] && input[i + 3] <= input[i + 1])) ++sol;
	}

	printf("%lu\n", sol);
}

void sold4_2(void){
	size_t sol = 0;

	for(int i  = 0; i < input_count; i+=4){
		if(input[i] <= input[i + 3] && input[i + 1] >= input[i + 2]) ++sol;
	}

	printf("%lu\n", sol);
}

int main(int argc, char **argv){

	sold4_1();
	sold4_2();

	return 0;
}
