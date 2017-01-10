#ifndef OBJECT_H_INCLUDED
#define OBJECT_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

<<<<<<< HEAD
=======
#define mapX 9
#define mapY 9
>>>>>>> 7a3ec1b5b271c8de6fb2e017409b1492077ef9f7
#define matX 4
#define matY 4

typedef struct {

<<<<<<< HEAD
	int ssid;
=======
>>>>>>> 7a3ec1b5b271c8de6fb2e017409b1492077ef9f7
	int** matrice;
	int xmin;
	int xmax;
	int ymin;
	int ymax;
	
} piece;

typedef struct {
	
	int id;
	int ssid;
<<<<<<< HEAD
	
	
} objet;

#endif //OBJECT_H_INCLUDED
=======
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
>>>>>>> 7a3ec1b5b271c8de6fb2e017409b1492077ef9f7
