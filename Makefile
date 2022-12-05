CFLAGS=-std=c11 -pedantic -Wall -Wextra -Werror -Wfatal-errors
LIBS=
SRC=main.c
CC=gcc

a.out: $(SRC)
	$(CC) $(CFLAGS) $(SRC) $(LIBS)
