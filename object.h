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
} object;

typedef struct {
	int id;
	int** matrice;
} map;

piece* createPiece(int** ptrMatricePiece);
object* createObject(piece* ptrPiece);
map* createMap(int** ptrMatriceMap);
int viewPiece(piece ptrPcs);
int viewMap(map ptrMap);
int ecritureMapOne(int*** matriceMap);



#endif //OBJECT_H_INCLUDED
