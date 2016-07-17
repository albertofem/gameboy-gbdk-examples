include ../Common.mk

hello_world.o:
	$(CC) -c -o build/hello_world.o hello_world.c

hello_world.s:
	$(CC) -S -o build/hello_world.s build/hello_world.o

hello_world.gb: hello_world.o
	$(CC) -o build/hello_world.gb build/hello_world.o