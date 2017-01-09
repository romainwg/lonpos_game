main: main.o object.o
	gcc -o $@ $^ `sdl-config --cflags --libs`

%.o: %.c
	gcc -c $<
