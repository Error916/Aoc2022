#include <stdio.h>
#include <stdlib.h>

#include "src/day2_input1_preproc.h"

void sold2_1(void){
	size_t score = 0;
	for(int i = 0; i < input_count; i += 2){
		switch(input[i + 1]){
			case 'X':	//rock
				score += 1;
				switch(input[i]){
					case 'A':	//rock
						score += 3;
					break;

					case 'B':	//paper
						score += 0;
					break;

					case 'C':	//scissor
						score += 6;
					break;

					default:
						score += 0;
				}
			break;

			case 'Y':	//paper
				score += 2;
				switch(input[i]){
					case 'A':	//rock
						score += 6;
					break;

					case 'B':	//paper
						score += 3;
					break;

					case 'C':	//scissor
						score += 0;
					break;

					default:
						score += 0;
				}
			break;

			case 'Z':	//scissor
				score += 3;
				switch(input[i]){
					case 'A':	//rock
						score += 0;
					break;

					case 'B':	//paper
						score += 6;
					break;

					case 'C':	//scissor
						score += 3;
					break;

					default:
						score += 0;
				}
			break;

			default:
				score += 0;
		}
	}

	printf("%lu\n", score);
}

void sold2_2(void){
	size_t score = 0;
	for(int i = 0; i < input_count; i += 2){
		switch(input[i + 1]){
			case 'X':	//lose
				switch(input[i]){
					case 'A':	//rock
						score += 3;
					break;

					case 'B':	//paper
						score += 1;
					break;

					case 'C':	//scissor
						score += 2;
					break;

					default:
						score += 0;
				}
			break;

			case 'Y':	//draw
				score += 3;
				switch(input[i]){
					case 'A':	//rock
						score += 1;
					break;

					case 'B':	//paper
						score += 2;
					break;

					case 'C':	//scissor
						score += 3;
					break;

					default:
						score += 0;
				}
			break;

			case 'Z':	//win
				score += 6;
				switch(input[i]){
					case 'A':	//rock
						score += 2;
					break;

					case 'B':	//paper
						score += 3;
					break;

					case 'C':	//scissor
						score += 1;
					break;

					default:
						score += 0;
				}
			break;

			default:
				score += 0;
		}
	}

	printf("%lu\n", score);
}


int main(int argc, char **argv){

	sold2_1();
	sold2_2();

	return 0;
}
