#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "src/day7_input1_preproc.h"

struct file {
	char name[20];
	struct dir *parent;
	int size;
};

struct dir;

struct dir {
	char name[20];
	struct dir *parent;
	size_t dirs_count;
	struct dir *dirs;
	size_t files_count;
	struct file *files;
};

struct dir root = {
	.name = "/",
	.parent = NULL,
	.dirs_count = 0,
	.dirs = NULL,
	.files_count = 0,
	.files = NULL,
};

struct dir *cwd = NULL;

void dir(const char *dir){
	int idx = cwd->dirs_count;
	cwd->dirs = realloc(cwd->dirs, sizeof(struct dir) * ++cwd->dirs_count);

	strcpy(cwd->dirs[idx].name, &dir[4]);
	cwd->dirs[idx].parent = cwd;
	cwd->dirs[idx].dirs_count = 0;
	cwd->dirs[idx].dirs = NULL;
	cwd->dirs[idx].files_count = 0;
	cwd->dirs[idx].files = NULL;
}

void file(const char *file){
	int idx = cwd->files_count;
	cwd->files = realloc(cwd->files, sizeof(struct file) * ++cwd->files_count);

	int i;
	for(i = 0; file[i] != ' '; ++i){}
	strcpy(cwd->files[idx].name, &file[i + 1]);
	cwd->files[idx].parent = cwd;
	cwd->files[idx].size = atoi(file);
}

void filedir(const char *filedir){
	if(filedir[0] == 'd')
		dir(filedir);
	else
		file(filedir);
}

void cd(const char *cmd){
	if(cmd[5] == '/'){
		cwd = &root;
	} else if(cmd[5] == '.'){
		cwd = cwd->parent;
	} else {
		for(int i = 0; i < cwd->dirs_count; ++i)
			if(!strcmp(&cmd[5], cwd->dirs[i].name))
				cwd = &cwd->dirs[i];
	}
}

void ls(const char *cmd){}

void command(const char *cmd){
	if(cmd[2] == 'c')
		cd(cmd);
	else
		ls(cmd);
}

void traverse_print(struct dir *d, int depth){
	for(int i = 0; i < d->dirs_count; ++i){
		for(int s = 0; s < depth; ++s){
			printf(" ");
		}
		printf("- %s", d->dirs[i].name);
		traverse_print(&d->dirs[i], depth + 1);
	}

	for(int i = 0; i < d->files_count; ++i){
		for(int s = 0; s < depth; ++s){
			printf(" ");
		}
		printf("- %s", d->files[i].name);
	}
}

int traverse_sum(struct dir *d, int *total){
	int size = 0;
	for(int i = 0; i < d->dirs_count; ++i){
		size += traverse_sum(&d->dirs[i], total);
	}

	for(int i = 0; i < d->files_count; ++i){
		size += d->files[i].size;
	}

	if(size <= 100000)
		*total += size;

	return size;
}

int traverse_sum2(struct dir *d, int total, int *smallest){
	int size = 0;
	for(int i = 0; i < d->dirs_count; ++i){
		size += traverse_sum2(&d->dirs[i], total, smallest);
	}

	for(int i = 0; i < d->files_count; ++i){
		size += d->files[i].size;
	}

	if(size >= total && size < *smallest)
		*smallest = size;

	return size;
}

void sold7_1(void){
	int sum = 0;
	int total = traverse_sum(&root, &sum);

	printf("%d\n", sum);
}

void sold7_2(void){
	int sum = 0;
	int total = traverse_sum(&root, &sum);
	total = 30000000 - (70000000 - total);
	int smallest = 70000000;
	traverse_sum2(&root, total, &smallest);

	printf("%d\n", smallest);
}

int main(int argc, char **argv){

	for(int i = 0; i < input_count; ++i){
		if(input[i][0] == '$')
			command(input[i]);
		else
			filedir(input[i]);
	}

	sold7_1();
	sold7_2();

	return 0;
}
