CFLAGS=-std=c11 -pedantic -Wall -Wextra -Werror -Wfatal-errors -O3 -march=native -pipe
LIBS=
SRC=main.c
CC=gcc

a.out: $(SRC)
	$(CC) $(CFLAGS) $(SRC) $(LIBS)
