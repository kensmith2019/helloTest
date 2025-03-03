# Makefile
CC = gcc
CFLAGS = -Wall -g -I src/

all: hello_test

hello_test: src/hello.c test/test_hello.c
	$(CC) $(CFLAGS) -o hello_test src/hello.c test/test_hello.c

clean:
	rm -f hello_test
