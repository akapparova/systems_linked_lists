all: list.c
	gcc nodes.c

clean:
	rm *.o

run: all
	./a.out