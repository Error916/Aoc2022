#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "src/day5_input1_preproc.h"

void sold5_1(void){
	Stack creates[MAX_CREATES] = {0};
	memcpy(creates, input_formation, sizeof(creates));
	for(int i = 0; i < input_count; i += 3){
		for(int j = 0; j < input[i]; ++j){
			char box = creates[input[i + 1] - 1].arr[creates[input[i + 1] - 1].top];
			creates[input[i + 1] - 1].arr[creates[input[i + 1] - 1].top] = '!';
			creates[input[i + 1] - 1].top--;

			creates[input[i + 2] - 1].top++;
			creates[input[i + 2] - 1].arr[creates[input[i + 2] - 1].top] = box;
		}
	}

	for(int i = 0; i < MAX_CREATES; ++i){
		printf("%c", creates[i].arr[creates[i].top]);
	}
	printf("\n");
}

void sold5_2(void){
	Stack creates[MAX_CREATES] = {0};
	memcpy(creates, input_formation, sizeof(creates));
	for(int i = 0; i < input_count; i += 3){
		for(int j = 0; j < input[i]; ++j){
			size_t index = creates[input[i + 1] - 1].top - (input[i] - 1) + j;
			char box = creates[input[i + 1] - 1].arr[index];

			creates[input[i + 2] - 1].top++;
			creates[input[i + 2] - 1].arr[creates[input[i + 2] - 1].top] = box;

			creates[input[i + 1] - 1].arr[index] = '!';
		}
		creates[input[i + 1] - 1].top -= input[i];
	}

	for(int i = 0; i < MAX_CREATES; ++i){
		printf("%c", creates[i].arr[creates[i].top]);
	}
	printf("\n");
}

int main(int argc, char **argv){

	sold5_1();
	sold5_2();

	return 0;
}
