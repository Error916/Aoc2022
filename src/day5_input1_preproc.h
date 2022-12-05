/* [P]     [L]         [T]             */
/* [L]     [M] [G]     [G]     [S]     */
/* [M]     [Q] [W]     [H] [R] [G]     */
/* [N]     [F] [M]     [D] [V] [R] [N] */
/* [W]     [G] [Q] [P] [J] [F] [M] [C] */
/* [V] [H] [B] [F] [H] [M] [B] [H] [B] */
/* [B] [Q] [D] [T] [T] [B] [N] [L] [D] */
/* [H] [M] [N] [Z] [M] [C] [M] [P] [P] */
/*  1   2   3   4   5   6   7   8   9  */

#define MAX_STACK 64
#define MAX_CREATES 9
typedef struct {
	size_t top;
	char arr[MAX_STACK];
} Stack;

const Stack input_formation [] = {
	{ .top = 7, .arr = {'H', 'B', 'V', 'W', 'N', 'M', 'L', 'P',}},
	{ .top = 2, .arr = {'M', 'Q', 'H',}},
	{ .top = 7, .arr = {'N', 'D', 'B', 'G', 'F', 'Q', 'M', 'L',}},
	{ .top = 6, .arr = {'Z', 'T', 'F', 'Q', 'M', 'W', 'G',}},
	{ .top = 3, .arr = {'M', 'T', 'H', 'P',}},
	{ .top = 7, .arr = {'C', 'B', 'M', 'J', 'D', 'H', 'G', 'T',}},
	{ .top = 5, .arr = {'M', 'N', 'B', 'F', 'V', 'R',}},
	{ .top = 6, .arr = {'P', 'L', 'H', 'M', 'R', 'G', 'S',}},
	{ .top = 4, .arr = {'P', 'D', 'B', 'C', 'N',}},
};

const size_t input [] = {
	8, 3, 2,
	1, 9, 5,
	5, 4, 7,
	6, 1, 4,
	8, 6, 8,
	8, 4, 5,
	4, 9, 5,
	4, 7, 9,
	7, 7, 2,
	4, 5, 2,
	11, 8, 3,
	3, 9, 7,
	11, 2, 8,
	13, 8, 4,
	11, 5, 6,
	8, 2, 4,
	1, 5, 4,
	1, 3, 2,
	2, 2, 1,
	2, 8, 5,
	3, 7, 5,
	1, 4, 7,
	9, 6, 7,
	1, 6, 5,
	1, 1, 4,
	3, 1, 9,
	15, 4, 3,
	2, 4, 1,
	1, 1, 9,
	3, 4, 5,
	1, 4, 1,
	1, 7, 2,
	1, 6, 3,
	5, 7, 1,
	19, 3, 9,
	7, 1, 2,
	24, 9, 7,
	23, 7, 1,
	1, 4, 6,
	3, 7, 3,
	1, 6, 1,
	6, 2, 1,
	21, 1, 9,
	5, 3, 8,
	2, 2, 5,
	10, 9, 5,
	1, 2, 1,
	5, 1, 3,
	6, 3, 4,
	1, 2, 8,
	3, 5, 2,
	4, 9, 3,
	13, 5, 9,
	2, 7, 2,
	3, 4, 7,
	1, 7, 8,
	5, 1, 3,
	1, 7, 5,
	1, 8, 1,
	2, 2, 7,
	19, 9, 2,
	5, 2, 3,
	7, 5, 9,
	1, 1, 9,
	5, 9, 2,
	4, 9, 3,
	20, 3, 9,
	1, 3, 9,
	3, 7, 3,
	16, 2, 3,
	12, 3, 4,
	2, 2, 5,
	1, 2, 4,
	2, 4, 1,
	4, 8, 1,
	15, 9, 3,
	2, 5, 3,
	3, 2, 8,
	5, 8, 5,
	7, 3, 4,
	2, 9, 6,
	15, 3, 1,
	3, 1, 8,
	3, 9, 5,
	9, 4, 1,
	3, 3, 5,
	2, 6, 5,
	9, 1, 3,
	1, 9, 4,
	1, 5, 2,
	3, 8, 5,
	10, 1, 6,
	12, 4, 8,
	1, 2, 7,
	2, 5, 6,
	1, 1, 4,
	7, 3, 6,
	1, 7, 2,
	2, 4, 9,
	3, 1, 7,
	1, 9, 8,
	1, 2, 3,
	3, 1, 7,
	5, 8, 2,
	5, 7, 1,
	9, 6, 8,
	6, 6, 9,
	8, 8, 6,
	1, 7, 4,
	5, 2, 4,
	7, 5, 1,
	5, 8, 9,
	11, 6, 7,
	9, 9, 1,
	2, 7, 5,
	1, 9, 5,
	1, 3, 6,
	3, 4, 6,
	1, 8, 2,
	2, 3, 6,
	6, 5, 2,
	3, 5, 9,
	3, 2, 1,
	1, 4, 3,
	3, 2, 7,
	1, 8, 9,
	1, 2, 8,
	8, 7, 5,
	1, 7, 8,
	3, 5, 6,
	5, 5, 2,
	1, 4, 1,
	1, 3, 2,
	4, 1, 5,
	4, 2, 6,
	6, 1, 2,
	5, 9, 3,
	2, 5, 3,
	3, 3, 6,
	10, 6, 4,
	4, 8, 5,
	5, 5, 1,
	21, 1, 7,
	3, 2, 9,
	1, 5, 2,
	4, 2, 9,
	8, 4, 8,
	1, 2, 1,
	7, 8, 2,
	2, 6, 1,
	2, 1, 5,
	1, 1, 5,
	4, 3, 7,
	1, 9, 3,
	4, 6, 3,
	1, 3, 8,
	1, 3, 4,
	2, 2, 6,
	2, 9, 7,
	14, 7, 8,
	10, 8, 7,
	3, 4, 6,
	5, 2, 3,
	3, 9, 8,
	3, 3, 4,
	1, 2, 4,
	1, 9, 4,
	1, 9, 5,
	1, 5, 2,
	3, 5, 7,
	1, 4, 6,
	5, 3, 8,
	1, 6, 8,
	5, 7, 6,
	14, 8, 5,
	2, 6, 7,
	18, 7, 2,
	3, 6, 1,
	5, 5, 4,
	5, 6, 2,
	7, 2, 1,
	1, 8, 4,
	1, 5, 1,
	8, 1, 9,
	10, 4, 3,
	8, 5, 3,
	1, 4, 3,
	2, 1, 5,
	1, 5, 3,
	5, 3, 1,
	1, 1, 3,
	5, 1, 6,
	13, 3, 1,
	3, 9, 4,
	2, 9, 6,
	5, 6, 5,
	6, 5, 1,
	7, 7, 9,
	7, 9, 6,
	1, 9, 3,
	1, 7, 9,
	3, 9, 1,
	12, 2, 7,
	7, 6, 2,
	22, 1, 7,
	1, 6, 5,
	4, 7, 6,
	1, 5, 6,
	2, 4, 1,
	1, 4, 1,
	23, 7, 9,
	4, 6, 2,
	4, 7, 3,
	1, 1, 9,
	6, 2, 1,
	1, 7, 2,
	7, 2, 8,
	2, 3, 8,
	3, 1, 9,
	1, 2, 8,
	5, 8, 3,
	3, 2, 1,
	2, 7, 8,
	10, 9, 8,
	4, 1, 3,
	14, 3, 4,
	7, 4, 5,
	1, 6, 9,
	5, 5, 8,
	1, 6, 4,
	6, 9, 4,
	3, 8, 4,
	1, 5, 1,
	3, 4, 3,
	9, 4, 3,
	5, 3, 6,
	5, 1, 5,
	4, 6, 2,
	8, 9, 2,
	2, 6, 5,
	3, 4, 7,
	2, 2, 7,
	2, 5, 4,
	3, 5, 9,
	3, 4, 2,
	10, 2, 5,
	1, 9, 8,
	2, 2, 9,
	3, 7, 2,
	1, 2, 9,
	13, 5, 1,
	2, 2, 7,
	8, 9, 2,
	1, 4, 6,
	1, 9, 5,
	14, 8, 4,
	7, 4, 5,
	4, 7, 5,
	2, 3, 8,
	4, 1, 5,
	2, 5, 4,
	6, 5, 6,
	7, 2, 5,
	1, 2, 6,
	1, 5, 2,
	2, 2, 8,
	2, 1, 3,
	8, 4, 7,
	1, 4, 3,
	6, 1, 6,
	7, 3, 9,
	3, 7, 1,
	2, 8, 7,
	7, 6, 9,
	2, 3, 6,
	6, 8, 3,
	9, 5, 3,
	2, 7, 8,
	2, 6, 4,
	7, 6, 9,
	5, 3, 8,
	10, 9, 1,
	11, 1, 8,
	1, 3, 2,
	4, 5, 6,
	2, 6, 2,
	2, 7, 9,
	3, 1, 7,
	6, 3, 9,
	2, 7, 2,
	2, 6, 9,
	1, 5, 9,
	11, 9, 8,
	1, 4, 5,
	6, 9, 8,
	31, 8, 9,
	1, 3, 6,
	1, 7, 1,
	1, 4, 3,
	1, 5, 2,
	1, 1, 8,
	1, 8, 9,
	1, 7, 3,
	11, 9, 6,
	2, 3, 1,
	2, 3, 5,
	1, 5, 4,
	1, 4, 1,
	6, 8, 3,
	1, 1, 4,
	1, 4, 6,
	2, 3, 6,
	17, 9, 2,
	23, 2, 9,
	14, 9, 4,
	1, 1, 7,
	1, 5, 6,
	8, 6, 2,
	1, 3, 2,
	4, 9, 8,
	5, 4, 7,
	3, 7, 2,
	1, 1, 2,
	2, 9, 4,
	3, 6, 9,
	8, 4, 9,
	2, 4, 2,
	4, 7, 2,
	1, 7, 9,
	4, 6, 2,
	16, 2, 1,
	2, 3, 2,
	18, 9, 8,
	1, 4, 2,
	1, 6, 8,
	1, 3, 9,
	3, 9, 5,
	4, 9, 8,
	6, 2, 8,
	1, 5, 1,
	4, 2, 8,
	1, 5, 1,
	17, 1, 4,
	1, 5, 8,
	10, 4, 3,
	10, 3, 1,
	4, 4, 9,
	1, 4, 6,
	1, 4, 8,
	38, 8, 1,
	27, 1, 5,
	1, 8, 2,
	1, 6, 3,
	1, 4, 8,
	1, 8, 4,
	14, 1, 9,
	1, 3, 1,
	1, 5, 1,
	1, 2, 5,
	2, 5, 4,
	17, 5, 8,
	3, 4, 9,
	2, 9, 1,
	3, 5, 7,
	3, 7, 4,
	2, 4, 7,
	12, 1, 4,
	1, 7, 4,
	1, 7, 6,
	1, 6, 9,
	11, 4, 3,
	1, 5, 3,
	11, 3, 9,
	1, 3, 2,
	3, 5, 4,
	1, 2, 4,
	1, 5, 8,
	13, 9, 3,
	16, 9, 1,
	4, 8, 9,
	2, 1, 4,
	1, 9, 1,
	1, 9, 7,
	1, 7, 2,
	6, 8, 3,
	8, 4, 2,
	4, 9, 6,
	3, 2, 3,
	3, 6, 1,
	3, 8, 6,
	1, 6, 8,
	3, 6, 4,
	11, 3, 5,
	4, 8, 2,
	6, 3, 5,
	3, 5, 1,
	2, 8, 3,
	14, 5, 3,
	4, 3, 4,
	6, 3, 5,
	3, 2, 9,
	4, 1, 8,
	3, 9, 6,
	2, 6, 9,
	6, 4, 3,
	15, 1, 4,
	1, 6, 7,
	5, 5, 1,
	11, 3, 1,
	2, 9, 7,
	1, 5, 6,
	2, 1, 3,
	7, 2, 6,
	4, 8, 1,
	8, 4, 2,
	3, 6, 4,
	5, 1, 4,
	17, 4, 8,
	3, 3, 7,
	4, 3, 4,
	4, 4, 2,
	9, 8, 7,
	1, 3, 8,
	10, 2, 4,
	1, 6, 2,
	2, 8, 4,
	2, 6, 9,
	2, 6, 2,
	1, 2, 3,
	3, 1, 4,
	1, 3, 2,
	1, 9, 3,
	1, 9, 7,
	4, 8, 4,
	10, 4, 8,
	5, 4, 3,
	1, 2, 8,
	5, 3, 7,
	3, 7, 8,
	3, 4, 3,
	8, 7, 2,
	8, 7, 8,
	1, 3, 2,
	3, 2, 8,
	9, 2, 5,
	12, 1, 7,
	21, 8, 3,
	5, 8, 6,
	8, 7, 5,
	6, 7, 4,
	12, 5, 7,
	1, 8, 5,
	2, 4, 2,
	1, 7, 6,
	14, 3, 8,
	5, 6, 2,
	7, 2, 6,
	6, 8, 4,
	11, 7, 4,
	8, 3, 7,
	4, 5, 7,
	9, 8, 2,
	6, 4, 1,
	2, 5, 2,
	1, 7, 2,
	11, 2, 3,
	1, 2, 1,
	7, 4, 1,
	5, 6, 8,
	1, 2, 3,
	2, 8, 7,
	14, 3, 7,
	15, 7, 6,
	4, 4, 6,
	2, 8, 3,
	12, 1, 3,
	1, 8, 2,
	1, 2, 3,
	1, 3, 9,
	1, 9, 7,
	1, 1, 4,
	18, 6, 8,
	3, 3, 2,
	17, 8, 3,
	3, 7, 6,
	3, 2, 6,
	25, 3, 7,
	2, 4, 1,
	9, 6, 5,
	2, 3, 1,
	1, 3, 9,
	5, 5, 2,
	1, 8, 3,
	2, 4, 7,
	1, 9, 4,
	1, 6, 7,
	2, 5, 2,
	2, 4, 8,
	2, 5, 8,
	5, 7, 9,
	27, 7, 5,
	2, 9, 6,
};

const size_t input_count = sizeof(input) / sizeof(input[0]);
