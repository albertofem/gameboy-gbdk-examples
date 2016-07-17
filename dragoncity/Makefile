include ../Common.mk

dragoncity.o:
	$(CC) -c -o build/dragoncity.o dragoncity.c

dragoncity.s:
	$(CC) -S -o build/dragoncity.s build/dragoncity.o

dragoncity.gb: dragoncity.o
	$(CC) -o build/dragoncity.gb build/dragoncity.o
