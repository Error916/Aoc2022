#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>

#include "src/day8_input1_preproc.h"

int treeisvisible(size_t y, size_t x){
	int vis_dir = 0;
	bool not_vis;

	not_vis = false;
	for(ssize_t i = y - 1; i >= 0; --i)
		not_vis |= !(input[i][x] < input[y][x]);
	if(y == 0) vis_dir++;
	else vis_dir += !not_vis;

	not_vis = false;
	for(size_t i = y + 1; i < input_count; ++i)
		not_vis |= !(input[i][x] < input[y][x]);
	if(y == input_count - 1) vis_dir++;
	else vis_dir += !not_vis;

	not_vis = false;
	for(ssize_t i = x - 1; i >= 0; --i)
		not_vis |= !(input[y][i] < input[y][x]);
	if(x == 0) vis_dir++;
	else vis_dir += !not_vis;

	not_vis = false;
	for(size_t i = x + 1; i < input_count; ++i)
		not_vis |= !(input[y][i] < input[y][x]);
	if(x == input_count - 1) vis_dir++;
	else vis_dir += !not_vis;

	return vis_dir;
}

size_t treescene(size_t y, size_t x){
	size_t score = 1;
	size_t tree;

	tree = 0;
	for(ssize_t i = y - 1; i >= 0; --i){
		tree++;
		if(input[i][x] >= input[y][x]) break;
	}
	score *= tree;

	tree = 0;
	for(size_t i = y + 1; i < input_count; ++i){
		tree++;
		if(input[i][x] >= input[y][x]) break;
	}
	score *= tree;

	tree = 0;
	for(ssize_t i = x - 1; i >= 0; --i){
		tree++;
		if(input[y][i] >= input[y][x]) break;
	}
	score *= tree;

	tree = 0;
	for(size_t i = x + 1; i < input_count; ++i){
		tree++;
		if(input[y][i] >= input[y][x]) break;
	}
	score *= tree;

	return score;
}

void sold8_1(void){
	size_t sol = 0;
	for(size_t i = 0; i < input_count; ++i){
		for(size_t j = 0; j < input_count; ++j){
			if(treeisvisible(i, j)) sol++;
		}
	}
	printf("%lu\n", sol);
}

void sold8_2(void){
	size_t sol = 0;
	for(size_t i = 0; i < input_count; ++i){
		for(size_t j = 0; j < input_count; ++j){
			size_t res = treescene(i, j);
			if(res > sol) sol = res;
		}
	}
	printf("%lu\n", sol);
}

int main(int argc, char **argv){

	sold8_1();
	sold8_2();

	return 0;
}
