main: main.o object.o
<<<<<<< HEAD
	gcc -o $@ $^ `sdl-config --cflags --libs`
=======
	gcc -o $@ $^
>>>>>>> 7a3ec1b5b271c8de6fb2e017409b1492077ef9f7

%.o: %.c
	gcc -c $<
