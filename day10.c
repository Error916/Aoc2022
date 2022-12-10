#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "src/day10_input1_preproc.h"

void sold10_1(void){
	int X = 1;
	size_t cicle = 0;
	int sol = 0;
	for(int i = 0; i < input_count; ++i){
		if(input[i][0] == 'n'){
			if(!((++cicle + 20) % 40)) sol += X * cicle;
		} else {
			if(!((++cicle + 20) % 40)) sol += X * cicle;
			if(!((++cicle + 20) % 40)) sol += X * cicle;
			X += atoi(&input[i][5]);
		}
	}

	printf("%lu\n", sol);
}

void sold10_2(void){
	int X = 1;
	size_t cicle = 0;
	char CRT[240] = {0};

	for(int i = 0; i < input_count; ++i){
		if(input[i][0] == 'n'){
			CRT[cicle - 1] = ((++cicle - 1) % 40 == X || (cicle - 1) % 40 == X - 1 || (cicle - 1) % 40 == X + 1) ? '#' : '.';
		} else {
			CRT[cicle - 1] = ((++cicle - 1) % 40 == X || (cicle - 1) % 40 == X - 1 || (cicle - 1) % 40 == X + 1) ? '#' : '.';
			CRT[cicle - 1] = ((++cicle - 1) % 40 == X || (cicle - 1) % 40 == X - 1 || (cicle - 1) % 40 == X + 1) ? '#' : '.';
			X += atoi(&input[i][5]);
		}
	}

	for(int y = 0; y < 6; ++y){
		for(int x = 0; x < 40; ++x)
			printf("%c", CRT[x + y * 40]);
		printf("\n");
	}
}

int main(int argc, char **argv){

	sold10_1();
	sold10_2();

	return 0;
}
