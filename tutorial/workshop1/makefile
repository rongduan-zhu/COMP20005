CC=gcc

CFLAGS=-Wall -ansi -c
all: wrong_linker

wrong_linker: main print_name incorrect_import
	gcc main.o print_name.o incorrect_import.o -o main

main:
	$(CC) $(CFLAGS) main.c

print_name:
	$(CC) $(CFLAGS) print_name.c

incorrect_import:
	$(CC) $(CFLAGS) incorrect_import.c

clean:
	rm *o *exe main
