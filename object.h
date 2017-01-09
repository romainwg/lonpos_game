#ifndef OBJECT_H_INCLUDED
#define OBJECT_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

#define matX 4
#define matY 4

typedef struct {

	int ssid;
	int** matrice;
	int xmin;
	int xmax;
	int ymin;
	int ymax;
	
} piece;

typedef struct {
	
	int id;
	int ssid;
	
	
} objet;

#endif //OBJECT_H_INCLUDED