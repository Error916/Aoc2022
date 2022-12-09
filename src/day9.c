#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "src/day9_input1_preproc.h"

struct pos {
	int x;
	int y;
};

struct pos rope[10] = {0};

size_t vis_count = 1;
struct pos vis[10000];

void add_vis(int x, int y){
	for(int i = 0; i < vis_count; ++i)
		if(vis[i].x == x && vis[i].y == y) return;

	vis[vis_count].x = x;
	vis[vis_count].y = y;
	vis_count++;
}

void move_tail(struct pos *tail, struct pos *head, bool flag){
	if(tail->x == head->x && tail->y == head->y) return;

	int hor_d = head->x - tail->x;
	int ver_d = head->y - tail->y;

	int hor = 0;
	int ver = 0;

	bool diag = abs(hor_d) + abs(ver_d) > 2;

	if(hor_d > 1 || (hor_d > 0 && diag)) hor = 1;
	if(hor_d < -1 || (hor_d < 0 && diag)) hor = -1;
	if(ver_d > 1 || (ver_d > 0 && diag)) ver = 1;
	if(ver_d < -1 || (ver_d < 0 && diag)) ver = -1;

	tail->x += hor;
	tail->y += ver;

	if(flag)
		add_vis(tail->x, tail->y);
}

void move_head(struct pos *head, struct motion *motion, int knots){
	int hor = 0;
	int ver = 0;

	switch(motion->dir){
		case 'U':
			ver = 1;
			break;
		case 'D':
			ver = -1;
			break;
		case 'R':
			hor = 1;
			break;
		case 'L':
			hor = -1;
			break;
	}

	for(int i = 0; i < motion->steps; ++i){
		head->x += hor;
		head->y += ver;
		for(int j = 1; j < knots; ++j)
			move_tail(&rope[j], &rope[j - 1], false);
		move_tail(&rope[knots - 1], &rope[knots - 2], true);
	}
}

void sold9_1(void){
	vis[0].x = 0;
	vis[0].y = 0;
	for(int i = 0; i < input_count; ++i)
		move_head(&rope[0], &input[i], 2);

	printf("%lu\n", vis_count);
}

void sold9_2(void){
	vis_count = 1;
	for(int i = 0; i < 10; ++i){
		rope[i].x = 0;
		rope[i].y = 0;
	}

	for(int i = 0; i < input_count; ++i)
		move_head(&rope[0], &input[i], 10);

	printf("%lu\n", vis_count);
}

int main(int argc, char **argv){

	sold9_1();
	sold9_2();

	return 0;
}
