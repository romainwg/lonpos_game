main: main.o object.o
	gcc -o $@ $^

%.o: %.c
	gcc -c $<
