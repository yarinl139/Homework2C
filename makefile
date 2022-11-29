executable: my_mat.o main.o
	gcc -Wall -g -o executable my_mat.o main.o
main.o: main.c
	gcc -Wall -g -c main.c
my_mat.o: my_mat.c
	gcc -Wall -g -c my_mat.c

clean:
	rm *.o executable