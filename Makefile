CFLAGS=-pedantic -Wall -Wextra -Werror -Wfatal-errors -Ofast -march=native -pipe
LIBS=
SRC=main.c
CC=gcc

a.out: $(SRC)
	$(CC) $(CFLAGS) $(SRC) $(LIBS)
