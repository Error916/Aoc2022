#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#include "src/day3_input1_preproc.h"

void sold3_1(void){

	size_t sum = 0;

	for(int i = 0; i < input_count; ++i){
		int lethas[52] = {0};
		char *string = strdup(input[i]);
		size_t len = strlen(string) / 2;
		for(int j = 0; j < len; ++j){
			if(islower(string[j])){
				lethas[string[j] - 'a']++;
			} else {
				lethas[string[j] - 'A' + 26]++;
			}
		}

		for(int j = len; j < len * 2; ++j){
			if(islower(string[j])){
				if(lethas[string[j] - 'a']){
					sum += string[j] - 'a' + 1;
					break;
				}
			} else {
				if(lethas[string[j] - 'A' + 26]){
					sum += string[j] - 'A' + 27;
					break;
				}
			}
		}

	}


	printf("%lu\n", sum);
}

void sold3_2(void){

	size_t sum = 0;

	for(int i = 0; i < input_count; i += 3){
		int lethas[52] = {0};

		for(int t = 0; t < 3; ++t){
			char *string = strdup(input[i+t]);
			size_t len = strlen(string);
			for(int j = 0; j < len; ++j){
				if(islower(string[j])){
					if(lethas[string[j] - 'a'] == t)
						lethas[string[j] - 'a']++;
				} else {
					if(lethas[string[j] - 'A' + 26] == t)
						lethas[string[j] - 'A' + 26]++;
				}
			}
		}

		for(int j = 0; j < 52; ++j){
			if(lethas[j] > 2){
				sum += j + 1;
				break;
			}
		}

	}

	printf("%lu\n", sum);
}

int main(int argc, char **argv){

	sold3_1();
	sold3_2();

	return 0;
}
