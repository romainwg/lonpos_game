#ifndef OBJECT_H_INCLUDED
#define OBJECT_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

#define mapX 9
#define mapY 9
#define matX 4
#define matY 4

typedef struct {

	int** matrice;
	int xmin;
	int xmax;
	int ymin;
	int ymax;
	
} piece;

typedef struct {
	
	int id;
	int ssid;
	piece* squelette;
	
} objet;

typedef struct {
	int id;
	int** matrice;
} map;

piece createPiece(int*** ptrMatricePiece);
object createObject(piece* ptrPiece);
int createMap(int*** ptrMatriceMap);

#endif //OBJECT_H_INCLUDED
