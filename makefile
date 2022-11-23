all: connections main.o my_mat.o

connections: my_mat.o main.o
	gcc -o executable my_mat.o main.o
main.o: main.c
	gcc -c main.c
my_mat.o: my_mat.c
	gcc -c my_mat.c

clean:
	rm *.o executable